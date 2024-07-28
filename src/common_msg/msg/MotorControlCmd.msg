# mode = 0 混合力矩模式
# mode = 1 位置模式
# mode = 2 速度模式
# mode = 3 电流、力矩控制模式和刹车控制指令

# mode = 13 设置电机零点 
# mode = 14 设置电机ID

# mode = 82 查询电机ID
uint8 mode
uint8 index
uint8 slave
# motor_id 为电机CAN_id  , 只能在1-6.
uint16 motor_id
uint16 motor_id_new
# 单位 rad/s
float32 speed
# 单位 A
float32 current
# 单位 rad
float32 position
float32 tau
float32 kp
float32 kd