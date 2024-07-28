// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msg:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
#define COMMON_MSG__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_

#include "common_msg/msg/detail/motor_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msg
{

namespace msg
{

namespace builder
{

class Init_MotorCmd_kd
{
public:
  explicit Init_MotorCmd_kd(::common_msg::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  ::common_msg::msg::MotorCmd kd(::common_msg::msg::MotorCmd::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msg::msg::MotorCmd msg_;
};

class Init_MotorCmd_kp
{
public:
  explicit Init_MotorCmd_kp(::common_msg::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_kd kp(::common_msg::msg::MotorCmd::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_MotorCmd_kd(msg_);
  }

private:
  ::common_msg::msg::MotorCmd msg_;
};

class Init_MotorCmd_tau
{
public:
  explicit Init_MotorCmd_tau(::common_msg::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_kp tau(::common_msg::msg::MotorCmd::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return Init_MotorCmd_kp(msg_);
  }

private:
  ::common_msg::msg::MotorCmd msg_;
};

class Init_MotorCmd_dq
{
public:
  explicit Init_MotorCmd_dq(::common_msg::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_tau dq(::common_msg::msg::MotorCmd::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_MotorCmd_tau(msg_);
  }

private:
  ::common_msg::msg::MotorCmd msg_;
};

class Init_MotorCmd_q
{
public:
  explicit Init_MotorCmd_q(::common_msg::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_dq q(::common_msg::msg::MotorCmd::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorCmd_dq(msg_);
  }

private:
  ::common_msg::msg::MotorCmd msg_;
};

class Init_MotorCmd_mode
{
public:
  Init_MotorCmd_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCmd_q mode(::common_msg::msg::MotorCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorCmd_q(msg_);
  }

private:
  ::common_msg::msg::MotorCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msg::msg::MotorCmd>()
{
  return common_msg::msg::builder::Init_MotorCmd_mode();
}

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
