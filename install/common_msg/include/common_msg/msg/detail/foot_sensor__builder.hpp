// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msg:msg/FootSensor.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__BUILDER_HPP_
#define COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__BUILDER_HPP_

#include "common_msg/msg/detail/foot_sensor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msg
{

namespace msg
{

namespace builder
{

class Init_FootSensor_right_foot_sensor
{
public:
  explicit Init_FootSensor_right_foot_sensor(::common_msg::msg::FootSensor & msg)
  : msg_(msg)
  {}
  ::common_msg::msg::FootSensor right_foot_sensor(::common_msg::msg::FootSensor::_right_foot_sensor_type arg)
  {
    msg_.right_foot_sensor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msg::msg::FootSensor msg_;
};

class Init_FootSensor_left_foot_sensor
{
public:
  Init_FootSensor_left_foot_sensor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FootSensor_right_foot_sensor left_foot_sensor(::common_msg::msg::FootSensor::_left_foot_sensor_type arg)
  {
    msg_.left_foot_sensor = std::move(arg);
    return Init_FootSensor_right_foot_sensor(msg_);
  }

private:
  ::common_msg::msg::FootSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msg::msg::FootSensor>()
{
  return common_msg::msg::builder::Init_FootSensor_left_foot_sensor();
}

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__BUILDER_HPP_
