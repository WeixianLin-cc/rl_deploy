// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msg:msg/BmsState.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__BMS_STATE__BUILDER_HPP_
#define COMMON_MSG__MSG__DETAIL__BMS_STATE__BUILDER_HPP_

#include "common_msg/msg/detail/bms_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msg
{

namespace msg
{

namespace builder
{

class Init_BmsState_error_code
{
public:
  explicit Init_BmsState_error_code(::common_msg::msg::BmsState & msg)
  : msg_(msg)
  {}
  ::common_msg::msg::BmsState error_code(::common_msg::msg::BmsState::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msg::msg::BmsState msg_;
};

class Init_BmsState_status
{
public:
  explicit Init_BmsState_status(::common_msg::msg::BmsState & msg)
  : msg_(msg)
  {}
  Init_BmsState_error_code status(::common_msg::msg::BmsState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_BmsState_error_code(msg_);
  }

private:
  ::common_msg::msg::BmsState msg_;
};

class Init_BmsState_max_cell_temperature
{
public:
  explicit Init_BmsState_max_cell_temperature(::common_msg::msg::BmsState & msg)
  : msg_(msg)
  {}
  Init_BmsState_status max_cell_temperature(::common_msg::msg::BmsState::_max_cell_temperature_type arg)
  {
    msg_.max_cell_temperature = std::move(arg);
    return Init_BmsState_status(msg_);
  }

private:
  ::common_msg::msg::BmsState msg_;
};

class Init_BmsState_remain_capacity
{
public:
  explicit Init_BmsState_remain_capacity(::common_msg::msg::BmsState & msg)
  : msg_(msg)
  {}
  Init_BmsState_max_cell_temperature remain_capacity(::common_msg::msg::BmsState::_remain_capacity_type arg)
  {
    msg_.remain_capacity = std::move(arg);
    return Init_BmsState_max_cell_temperature(msg_);
  }

private:
  ::common_msg::msg::BmsState msg_;
};

class Init_BmsState_soc
{
public:
  explicit Init_BmsState_soc(::common_msg::msg::BmsState & msg)
  : msg_(msg)
  {}
  Init_BmsState_remain_capacity soc(::common_msg::msg::BmsState::_soc_type arg)
  {
    msg_.soc = std::move(arg);
    return Init_BmsState_remain_capacity(msg_);
  }

private:
  ::common_msg::msg::BmsState msg_;
};

class Init_BmsState_current
{
public:
  explicit Init_BmsState_current(::common_msg::msg::BmsState & msg)
  : msg_(msg)
  {}
  Init_BmsState_soc current(::common_msg::msg::BmsState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_BmsState_soc(msg_);
  }

private:
  ::common_msg::msg::BmsState msg_;
};

class Init_BmsState_voltage
{
public:
  Init_BmsState_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsState_current voltage(::common_msg::msg::BmsState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BmsState_current(msg_);
  }

private:
  ::common_msg::msg::BmsState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msg::msg::BmsState>()
{
  return common_msg::msg::builder::Init_BmsState_voltage();
}

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__BMS_STATE__BUILDER_HPP_
