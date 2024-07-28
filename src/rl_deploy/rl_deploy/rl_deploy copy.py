#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
# 导入话题消息类型
from std_msgs.msg import String,UInt32

from common_msg.msg import Sphere

class WriterNode(Node):
    """
    创建一个李四节点，并在初始化时输出一个话
    """
    def __init__(self,name):
        super().__init__(name)
        self.get_logger().info("大家好，我是%s,我是一名作家！" % name)
        # 创建并初始化发布者成员属性pubnovel
        self.pubnovel = self.create_publisher(Sphere,"sexy_girl", 10) 

        # 创建定时器成员属性timer
        timer_period = 5  #每5s写一章节话
        
        #self.timer = self.create_timer(timer_period, self.timer_callback)  #启动一个定时装置，每 1 s,调用一次time_callback函数

        # 账户钱的数量
        self.account = 80
        # 创建并初始化订阅者成员属性submoney
        self.submoney = self.create_subscription(UInt32,"sexy_girl_money",self.recv_money_callback,1)   
    
    # def timer_callback(self):
    #     """
    #     定时器回调函数
    #     """
    #     msg = Sphere()
    #     msg.radius = 1.0
    #     self.pubnovel.publish(msg)  #将小说内容发布出去


    def recv_money_callback(self,money):
        """
        4. 编写订阅回调处理逻辑
        """
        self.account += money.data
        self.get_logger().info('李四：我已经收到了%d的稿费' % self.account)


def main(args=None):
    """
    ros2运行该节点的入口函数，可配置函数名称
    """
    rclpy.init(args=args) # 初始化rclpy
    node = WriterNode("rl_node")  # 新建一个节点
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # rcl关闭
