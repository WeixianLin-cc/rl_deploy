// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msg:msg/MotorStateArray.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_STATE_ARRAY__BUILDER_HPP_
#define COMMON_MSG__MSG__DETAIL__MOTOR_STATE_ARRAY__BUILDER_HPP_

#include "common_msg/msg/detail/motor_state_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msg
{

namespace msg
{

namespace builder
{

class Init_MotorStateArray_motor_state
{
public:
  Init_MotorStateArray_motor_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_msg::msg::MotorStateArray motor_state(::common_msg::msg::MotorStateArray::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msg::msg::MotorStateArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msg::msg::MotorStateArray>()
{
  return common_msg::msg::builder::Init_MotorStateArray_motor_state();
}

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_STATE_ARRAY__BUILDER_HPP_
