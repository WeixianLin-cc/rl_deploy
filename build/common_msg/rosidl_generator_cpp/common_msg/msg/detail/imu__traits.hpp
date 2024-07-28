// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_msg:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__IMU__TRAITS_HPP_
#define COMMON_MSG__MSG__DETAIL__IMU__TRAITS_HPP_

#include "common_msg/msg/detail/imu__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<common_msg::msg::Imu>()
{
  return "common_msg::msg::Imu";
}

template<>
inline const char * name<common_msg::msg::Imu>()
{
  return "common_msg/msg/Imu";
}

template<>
struct has_fixed_size<common_msg::msg::Imu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<common_msg::msg::Imu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<common_msg::msg::Imu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMON_MSG__MSG__DETAIL__IMU__TRAITS_HPP_
