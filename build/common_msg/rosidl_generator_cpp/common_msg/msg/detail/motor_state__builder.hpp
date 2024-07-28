// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msg:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define COMMON_MSG__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include "common_msg/msg/detail/motor_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msg
{

namespace msg
{

namespace builder
{

class Init_MotorState_temperature
{
public:
  explicit Init_MotorState_temperature(::common_msg::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::common_msg::msg::MotorState temperature(::common_msg::msg::MotorState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msg::msg::MotorState msg_;
};

class Init_MotorState_tau
{
public:
  explicit Init_MotorState_tau(::common_msg::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_temperature tau(::common_msg::msg::MotorState::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return Init_MotorState_temperature(msg_);
  }

private:
  ::common_msg::msg::MotorState msg_;
};

class Init_MotorState_ddq
{
public:
  explicit Init_MotorState_ddq(::common_msg::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_tau ddq(::common_msg::msg::MotorState::_ddq_type arg)
  {
    msg_.ddq = std::move(arg);
    return Init_MotorState_tau(msg_);
  }

private:
  ::common_msg::msg::MotorState msg_;
};

class Init_MotorState_dq
{
public:
  explicit Init_MotorState_dq(::common_msg::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_ddq dq(::common_msg::msg::MotorState::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_MotorState_ddq(msg_);
  }

private:
  ::common_msg::msg::MotorState msg_;
};

class Init_MotorState_q
{
public:
  explicit Init_MotorState_q(::common_msg::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_dq q(::common_msg::msg::MotorState::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorState_dq(msg_);
  }

private:
  ::common_msg::msg::MotorState msg_;
};

class Init_MotorState_mode
{
public:
  Init_MotorState_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_q mode(::common_msg::msg::MotorState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorState_q(msg_);
  }

private:
  ::common_msg::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msg::msg::MotorState>()
{
  return common_msg::msg::builder::Init_MotorState_mode();
}

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
