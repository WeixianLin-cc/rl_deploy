// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msg:msg/MotorControlCmd.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_CMD__BUILDER_HPP_
#define COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_CMD__BUILDER_HPP_

#include "common_msg/msg/detail/motor_control_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msg
{

namespace msg
{

namespace builder
{

class Init_MotorControlCmd_kd
{
public:
  explicit Init_MotorControlCmd_kd(::common_msg::msg::MotorControlCmd & msg)
  : msg_(msg)
  {}
  ::common_msg::msg::MotorControlCmd kd(::common_msg::msg::MotorControlCmd::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msg::msg::MotorControlCmd msg_;
};

class Init_MotorControlCmd_kp
{
public:
  explicit Init_MotorControlCmd_kp(::common_msg::msg::MotorControlCmd & msg)
  : msg_(msg)
  {}
  Init_MotorControlCmd_kd kp(::common_msg::msg::MotorControlCmd::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_MotorControlCmd_kd(msg_);
  }

private:
  ::common_msg::msg::MotorControlCmd msg_;
};

class Init_MotorControlCmd_tau
{
public:
  explicit Init_MotorControlCmd_tau(::common_msg::msg::MotorControlCmd & msg)
  : msg_(msg)
  {}
  Init_MotorControlCmd_kp tau(::common_msg::msg::MotorControlCmd::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return Init_MotorControlCmd_kp(msg_);
  }

private:
  ::common_msg::msg::MotorControlCmd msg_;
};

class Init_MotorControlCmd_position
{
public:
  explicit Init_MotorControlCmd_position(::common_msg::msg::MotorControlCmd & msg)
  : msg_(msg)
  {}
  Init_MotorControlCmd_tau position(::common_msg::msg::MotorControlCmd::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_MotorControlCmd_tau(msg_);
  }

private:
  ::common_msg::msg::MotorControlCmd msg_;
};

class Init_MotorControlCmd_current
{
public:
  explicit Init_MotorControlCmd_current(::common_msg::msg::MotorControlCmd & msg)
  : msg_(msg)
  {}
  Init_MotorControlCmd_position current(::common_msg::msg::MotorControlCmd::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_MotorControlCmd_position(msg_);
  }

private:
  ::common_msg::msg::MotorControlCmd msg_;
};

class Init_MotorControlCmd_speed
{
public:
  explicit Init_MotorControlCmd_speed(::common_msg::msg::MotorControlCmd & msg)
  : msg_(msg)
  {}
  Init_MotorControlCmd_current speed(::common_msg::msg::MotorControlCmd::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorControlCmd_current(msg_);
  }

private:
  ::common_msg::msg::MotorControlCmd msg_;
};

class Init_MotorControlCmd_motor_id_new
{
public:
  explicit Init_MotorControlCmd_motor_id_new(::common_msg::msg::MotorControlCmd & msg)
  : msg_(msg)
  {}
  Init_MotorControlCmd_speed motor_id_new(::common_msg::msg::MotorControlCmd::_motor_id_new_type arg)
  {
    msg_.motor_id_new = std::move(arg);
    return Init_MotorControlCmd_speed(msg_);
  }

private:
  ::common_msg::msg::MotorControlCmd msg_;
};

class Init_MotorControlCmd_motor_id
{
public:
  explicit Init_MotorControlCmd_motor_id(::common_msg::msg::MotorControlCmd & msg)
  : msg_(msg)
  {}
  Init_MotorControlCmd_motor_id_new motor_id(::common_msg::msg::MotorControlCmd::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorControlCmd_motor_id_new(msg_);
  }

private:
  ::common_msg::msg::MotorControlCmd msg_;
};

class Init_MotorControlCmd_slave
{
public:
  explicit Init_MotorControlCmd_slave(::common_msg::msg::MotorControlCmd & msg)
  : msg_(msg)
  {}
  Init_MotorControlCmd_motor_id slave(::common_msg::msg::MotorControlCmd::_slave_type arg)
  {
    msg_.slave = std::move(arg);
    return Init_MotorControlCmd_motor_id(msg_);
  }

private:
  ::common_msg::msg::MotorControlCmd msg_;
};

class Init_MotorControlCmd_index
{
public:
  explicit Init_MotorControlCmd_index(::common_msg::msg::MotorControlCmd & msg)
  : msg_(msg)
  {}
  Init_MotorControlCmd_slave index(::common_msg::msg::MotorControlCmd::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_MotorControlCmd_slave(msg_);
  }

private:
  ::common_msg::msg::MotorControlCmd msg_;
};

class Init_MotorControlCmd_mode
{
public:
  Init_MotorControlCmd_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorControlCmd_index mode(::common_msg::msg::MotorControlCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorControlCmd_index(msg_);
  }

private:
  ::common_msg::msg::MotorControlCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msg::msg::MotorControlCmd>()
{
  return common_msg::msg::builder::Init_MotorControlCmd_mode();
}

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_CMD__BUILDER_HPP_
