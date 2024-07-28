#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
# 导入话题消息类型
from common_msg.msg import LowState, LowCmd

import time
import torch
import numpy as np
from .humanoid_config import XBotLCfg
from collections import deque
import pygame

class RLNode(Node):
    """
    创建一个RL节点，并在初始化时输出一个话
    """
    def __init__(self,name):
        super().__init__(name)
        self.get_logger().info("%s启动，请握好急停开关" % name)  #%字符串占位符号
        # 创建并初始化发布者成员属性pub
        self.pub = self.create_publisher(LowCmd,"Low_cmd", 1) 

        # 创建并初始化订阅者成员属性sub
        self.sub = self.create_subscription(LowState,"Low_state",self.call_back,1)
        self.callback_count = 0  # 订阅回调函数被调用的次数

        self.rl_init()
        print("device",self.device)
        self.index=0
        self.setup()
        
        self.begin_time = time.time()
        
    def call_back_test(self,msg:LowState):
        print("收到消息")
        print("关节位置：",msg.motor_state_struct[0].q)
        pass
    

    def rl_init(self):
        self.policy_dir = "src/rl_deploy/policy/policy_1.pt"
        
        self.cfg = XBotLCfg()

        self.device = torch.device("cpu")#("cuda" if torch.cuda.is_available() else "cpu")
        

        self.num_envs = 1
        self.num_actions = self.cfg.env.num_actions

        self.stand = False
        
        self.last_button = 0

        self.default_motor_pos = [0.0,0.0,0.3,-0.6,0.3,-0.3,
                                  0.0,0.0,0.3,0.6,-0.3,0.3]
        
###接收的数据
        self.q = torch.zeros(self.num_envs, self.num_actions, dtype=torch.float, device=self.device, requires_grad=False)  #关节位置
        self.dq = torch.zeros(self.num_envs, self.num_actions, dtype=torch.float, device=self.device, requires_grad=False) #关节速度
        self.base_ang_vel = torch.zeros(self.num_envs, 3, dtype=torch.float, device=self.device, requires_grad=False)
        self.base_euler_xyz = torch.zeros(self.num_envs, 3, dtype=torch.float, device=self.device, requires_grad=False)

####
        self.dof_pos = torch.zeros(self.num_envs, self.num_actions, dtype=torch.float, device=self.device, requires_grad=False)  ##关节位置
        self.dof_vel = torch.zeros(self.num_envs, self.num_actions, dtype=torch.float, device=self.device, requires_grad=False)  ##关节速度



        self.commands= torch.zeros(self.num_envs, 4, dtype=torch.float, device=self.device, requires_grad=False)

        self.commands_scale = torch.tensor([self.cfg.normalization.obs_scales.lin_vel, self.cfg.normalization.obs_scales.lin_vel, self.cfg.normalization.obs_scales.ang_vel],
                                            device=self.device, requires_grad=False) 
        
        self.obs_history = deque(maxlen=self.cfg.env.frame_stack)

        for _ in range(self.cfg.env.frame_stack):
            self.obs_history.append(torch.zeros(
                self.num_envs, self.cfg.env.num_single_obs, dtype=torch.float, device=self.device))

        self.p_gains =[200.,200.,200.,300.,40.,40.,200.,200.,200.,300.,40.,40.]#TODO 改kp kd
        self.d_gains =[5.,5.,5.,5.,3.,3.,5.,5.,5.,5.,3.,3.]
        self.actions = torch.zeros(self.num_envs, self.num_actions, dtype=torch.float, device=self.device, requires_grad=False)

        self.default_dof_pos =torch.tensor([0,0,0.3,-0.6,0.3,0,
                                            0,0,0.3,-0.6,0.3,0], device=self.device, requires_grad=False) #关节位置

        self.dt=0.02
        self.episode_length_buf = 0
        
        self.imu_yaw = 0
        self.imu_yaw_set = 0   




    def get_data_ros2(self,msg:LowState):
        """
        self.q 关节位置  self.dq 关节速度  self.base_ang_vel 角速度  self.base_euler_xyz 欧拉角
        """
        for i in range(self.num_actions):
            self.dof_pos[0,i] = msg.motor_state_struct[i].q
            self.dof_vel[0,i] = msg.motor_state_struct[i].dq
        
        if self.imu_yaw_set == 0:
            self.imu_yaw = msg.imu_state_struct.rpy[2]
            self.imu_yaw_set = 1
        
            
        for i in range(2):
            #print(self.base_ang_vel[0,i])
            self.base_ang_vel[0,i] = torch.tensor(msg.imu_state_struct.gyroscope[i])
            self.base_euler_xyz[0,i] = torch.tensor(msg.imu_state_struct.rpy[i])
            
        self.base_ang_vel[0,2] = torch.tensor(msg.imu_state_struct.gyroscope[2])
        self.base_euler_xyz[0,2] = torch.tensor(msg.imu_state_struct.rpy[2]-self.imu_yaw)
        # print("base_euler_xyz",self.base_euler_xyz)
            
        pass

    def send_data_ros2(self, actions):
        """
        actions 动作 转成pd命令
        """
        cmd = LowCmd()
        
        actions_scaled = actions * self.cfg.control.action_scale
        actions_scaled.to("cpu")
        p_gains = self.p_gains
        d_gains = self.d_gains
        
        actions_scaled = actions_scaled.detach()
        
        #actions_scaled = torch.zeros_like(actions_scaled)
        
        q=(actions_scaled.numpy()[0,:] + self.default_motor_pos[:])
        
        for i in range(12):
            cmd.motor_cmd[i].mode = 2
            cmd.motor_cmd[i].kp = p_gains[i] 
            cmd.motor_cmd[i].kd = d_gains[i]
            cmd.motor_cmd[i].q = q[i]
            cmd.motor_cmd[i].dq = 0.
            cmd.motor_cmd[i].tau = 0.
            
        self.pub.publish(cmd)


    def load_policy(self):
        policy = torch.jit.load(self.policy_dir)
        print("policy loaded successfully")
        return policy



    def get_phase(self):  #得到相位信息
        cycle_time = self.cfg.rewards.cycle_time
        
        phase = torch.zeros(self.num_envs,1,device=self.device)
        
        phase[0] = self.episode_length_buf * self.dt / cycle_time #episode_length_buf控制器更新的次数  self.dt 控制器更新的时间间隔

        if (self.stand==1):
            phase = torch.ones(self.num_envs,1,device=self.device)/4
            return phase

        self.episode_length_buf +=1
        
        return phase 
        

    def get_obs(self):
        phase = self.get_phase()
        sin_pos = torch.sin(2 * torch.pi * phase)
        cos_pos = torch.cos(2 * torch.pi * phase)
        print("sin_pos",sin_pos)
        print("cos_pos",cos_pos)
        self.command_input = torch.cat(
            (sin_pos, cos_pos, self.commands[:,:3] * self.commands_scale),dim=1)
        
        self.q = (self.dof_pos - self.default_dof_pos) * self.cfg.normalization.obs_scales.dof_pos  #关节位置

        self.dq = self.dof_vel * self.cfg.normalization.obs_scales.dof_vel                #关节速度
        
        #print(self.command_input,self.q,self.dq,self.actions,self.base_ang_vel,self.base_euler_xyz)

        obs_buf = torch.cat((
        self.command_input,  # 5 = 2D(sin cos) + 3D(vel_x, vel_y, aug_vel_yaw)            heading_command怎么处理
        self.q,    # 12D
        self.dq,  # 12D
        self.actions,   # 12D
        self.base_ang_vel * self.cfg.normalization.obs_scales.ang_vel,  # 3
        self.base_euler_xyz * self.cfg.normalization.obs_scales.quat,  # 3
            ), dim=-1)
        
        #print("obs_buf",obs_buf)
        
        
        obs_now = obs_buf.clone()
        self.obs_history.append(obs_now)

        obs_buf_all = torch.stack([self.obs_history[i]
                                   for i in range(self.obs_history.maxlen)], dim=1)  # N,T,K

        self.obs_buf = obs_buf_all.reshape(self.num_envs, -1)  # N, T*K



    def clip_action(self, actions):
        clip_actions = self.cfg.normalization.clip_actions
        actions = torch.clip(actions, -clip_actions, clip_actions).to(self.device)
        self.actions = actions
        return actions
    
    def joystick_input(self):
        pygame.init()
        pygame.joystick.init()
        if pygame.joystick.get_count() == 0:
            print("没有检测到手柄，请连接手柄后重试。")
            exit()
        joystick = pygame.joystick.Joystick(0)
        joystick.init()

        print(f"检测到手柄: {joystick.get_name()}")

        #um_axes = joystick.get_numaxes()
        return joystick
    
    def read_joystick(self):
                    
        pygame.event.pump()
        self.commands[:,0] =  -self.joystick.get_axis(1) 
        self.commands[:,1] =  -self.joystick.get_axis(0) 
        self.commands[:,2] =  0
        self.commands[:,3] =  0

        if abs(-self.joystick.get_axis(1))<0.1:
            self.commands[:,0]=0
        if abs(-self.joystick.get_axis(0))<0.1:
            self.commands[:,1]=0
        
        
        if (self.joystick.get_button(0)==0)&(self.last_button==1):
            self.stand = not self.stand
            #print("stand:",self.stand)
            
        self.last_button=self.joystick.get_button(0)
            
        print("commands:",self.commands,"stand:",self.stand)


    def setup(self):
        self.policy = self.load_policy()
        self.joystick=self.joystick_input()


    def call_back(self,msg):
        """call_back函数的流程如下：
        
        1. 读取dds数据,使用ros2topic,处理得到obs（包含正弦信号,关节角度，关节速度（底层发），动作，角速度，欧拉角）底层发rpy角
        2. 输入obs到policy网络中，得到action
        3. 对action进行裁剪，输出action"""
        if self.callback_count % 16 == 0:        
            self.read_joystick()
            self.get_data_ros2(msg)
            self.get_obs()
            actions = self.policy(self.obs_buf.detach())
            actions = self.clip_action(actions)
            self.send_data_ros2(actions)
            print(self.index,time.time()-self.begin_time)
            self.index+=1
        self.callback_count+=1
        



def main(args=None):
    """
    ros2运行该节点的入口函数，可配置函数名称
    """
    rclpy.init(args=args) # 初始化rclpy
    node = RLNode("rl_node")  # 新建一个节点
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # rcl关闭
