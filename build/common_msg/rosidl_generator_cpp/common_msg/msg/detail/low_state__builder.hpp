// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msg:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__LOW_STATE__BUILDER_HPP_
#define COMMON_MSG__MSG__DETAIL__LOW_STATE__BUILDER_HPP_

#include "common_msg/msg/detail/low_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msg
{

namespace msg
{

namespace builder
{

class Init_LowState_foot_senser_state_struct
{
public:
  explicit Init_LowState_foot_senser_state_struct(::common_msg::msg::LowState & msg)
  : msg_(msg)
  {}
  ::common_msg::msg::LowState foot_senser_state_struct(::common_msg::msg::LowState::_foot_senser_state_struct_type arg)
  {
    msg_.foot_senser_state_struct = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msg::msg::LowState msg_;
};

class Init_LowState_bms_state_struct
{
public:
  explicit Init_LowState_bms_state_struct(::common_msg::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_foot_senser_state_struct bms_state_struct(::common_msg::msg::LowState::_bms_state_struct_type arg)
  {
    msg_.bms_state_struct = std::move(arg);
    return Init_LowState_foot_senser_state_struct(msg_);
  }

private:
  ::common_msg::msg::LowState msg_;
};

class Init_LowState_imu_state_struct
{
public:
  explicit Init_LowState_imu_state_struct(::common_msg::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_bms_state_struct imu_state_struct(::common_msg::msg::LowState::_imu_state_struct_type arg)
  {
    msg_.imu_state_struct = std::move(arg);
    return Init_LowState_bms_state_struct(msg_);
  }

private:
  ::common_msg::msg::LowState msg_;
};

class Init_LowState_motor_state_struct
{
public:
  Init_LowState_motor_state_struct()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LowState_imu_state_struct motor_state_struct(::common_msg::msg::LowState::_motor_state_struct_type arg)
  {
    msg_.motor_state_struct = std::move(arg);
    return Init_LowState_imu_state_struct(msg_);
  }

private:
  ::common_msg::msg::LowState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msg::msg::LowState>()
{
  return common_msg::msg::builder::Init_LowState_motor_state_struct();
}

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__LOW_STATE__BUILDER_HPP_
