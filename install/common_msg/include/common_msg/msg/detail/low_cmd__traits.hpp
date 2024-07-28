// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_msg:msg/LowCmd.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__LOW_CMD__TRAITS_HPP_
#define COMMON_MSG__MSG__DETAIL__LOW_CMD__TRAITS_HPP_

#include "common_msg/msg/detail/low_cmd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'motor_cmd'
#include "common_msg/msg/detail/motor_cmd__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<common_msg::msg::LowCmd>()
{
  return "common_msg::msg::LowCmd";
}

template<>
inline const char * name<common_msg::msg::LowCmd>()
{
  return "common_msg/msg/LowCmd";
}

template<>
struct has_fixed_size<common_msg::msg::LowCmd>
  : std::integral_constant<bool, has_fixed_size<common_msg::msg::MotorCmd>::value> {};

template<>
struct has_bounded_size<common_msg::msg::LowCmd>
  : std::integral_constant<bool, has_bounded_size<common_msg::msg::MotorCmd>::value> {};

template<>
struct is_message<common_msg::msg::LowCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMON_MSG__MSG__DETAIL__LOW_CMD__TRAITS_HPP_
