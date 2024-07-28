// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msg:msg/MotorControlArray.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_ARRAY__BUILDER_HPP_
#define COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_ARRAY__BUILDER_HPP_

#include "common_msg/msg/detail/motor_control_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msg
{

namespace msg
{

namespace builder
{

class Init_MotorControlArray_motor_control
{
public:
  Init_MotorControlArray_motor_control()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_msg::msg::MotorControlArray motor_control(::common_msg::msg::MotorControlArray::_motor_control_type arg)
  {
    msg_.motor_control = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msg::msg::MotorControlArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msg::msg::MotorControlArray>()
{
  return common_msg::msg::builder::Init_MotorControlArray_motor_control();
}

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_ARRAY__BUILDER_HPP_
