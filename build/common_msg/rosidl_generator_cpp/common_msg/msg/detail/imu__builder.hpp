// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from common_msg:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__IMU__BUILDER_HPP_
#define COMMON_MSG__MSG__DETAIL__IMU__BUILDER_HPP_

#include "common_msg/msg/detail/imu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace common_msg
{

namespace msg
{

namespace builder
{

class Init_Imu_rpy
{
public:
  explicit Init_Imu_rpy(::common_msg::msg::Imu & msg)
  : msg_(msg)
  {}
  ::common_msg::msg::Imu rpy(::common_msg::msg::Imu::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::common_msg::msg::Imu msg_;
};

class Init_Imu_accelerometer
{
public:
  explicit Init_Imu_accelerometer(::common_msg::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_rpy accelerometer(::common_msg::msg::Imu::_accelerometer_type arg)
  {
    msg_.accelerometer = std::move(arg);
    return Init_Imu_rpy(msg_);
  }

private:
  ::common_msg::msg::Imu msg_;
};

class Init_Imu_gyroscope
{
public:
  explicit Init_Imu_gyroscope(::common_msg::msg::Imu & msg)
  : msg_(msg)
  {}
  Init_Imu_accelerometer gyroscope(::common_msg::msg::Imu::_gyroscope_type arg)
  {
    msg_.gyroscope = std::move(arg);
    return Init_Imu_accelerometer(msg_);
  }

private:
  ::common_msg::msg::Imu msg_;
};

class Init_Imu_quaternion
{
public:
  Init_Imu_quaternion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Imu_gyroscope quaternion(::common_msg::msg::Imu::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_Imu_gyroscope(msg_);
  }

private:
  ::common_msg::msg::Imu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::common_msg::msg::Imu>()
{
  return common_msg::msg::builder::Init_Imu_quaternion();
}

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__IMU__BUILDER_HPP_
