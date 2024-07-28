// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msg:msg/MotorSet.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_SET__BUILDER_HPP_
#define COMMON_MSG__MSG__DETAIL__MOTOR_SET__BUILDER_HPP_

#include "common_msg/msg/detail/motor_set__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msg
{

namespace msg
{

namespace builder
{

class Init_MotorSet_mode
{
public:
  explicit Init_MotorSet_mode(::common_msg::msg::MotorSet & msg)
  : msg_(msg)
  {}
  ::common_msg::msg::MotorSet mode(::common_msg::msg::MotorSet::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msg::msg::MotorSet msg_;
};

class Init_MotorSet_motor_id
{
public:
  explicit Init_MotorSet_motor_id(::common_msg::msg::MotorSet & msg)
  : msg_(msg)
  {}
  Init_MotorSet_mode motor_id(::common_msg::msg::MotorSet::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorSet_mode(msg_);
  }

private:
  ::common_msg::msg::MotorSet msg_;
};

class Init_MotorSet_slave
{
public:
  Init_MotorSet_slave()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorSet_motor_id slave(::common_msg::msg::MotorSet::_slave_type arg)
  {
    msg_.slave = std::move(arg);
    return Init_MotorSet_motor_id(msg_);
  }

private:
  ::common_msg::msg::MotorSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msg::msg::MotorSet>()
{
  return common_msg::msg::builder::Init_MotorSet_slave();
}

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_SET__BUILDER_HPP_
