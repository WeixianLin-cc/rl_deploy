// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msg:msg/LowCmd.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__LOW_CMD__BUILDER_HPP_
#define COMMON_MSG__MSG__DETAIL__LOW_CMD__BUILDER_HPP_

#include "common_msg/msg/detail/low_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msg
{

namespace msg
{

namespace builder
{

class Init_LowCmd_motor_cmd
{
public:
  Init_LowCmd_motor_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::common_msg::msg::LowCmd motor_cmd(::common_msg::msg::LowCmd::_motor_cmd_type arg)
  {
    msg_.motor_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msg::msg::LowCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msg::msg::LowCmd>()
{
  return common_msg::msg::builder::Init_LowCmd_motor_cmd();
}

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__LOW_CMD__BUILDER_HPP_
