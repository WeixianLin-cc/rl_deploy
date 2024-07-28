// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from common_msg:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__LOW_STATE__TRAITS_HPP_
#define COMMON_MSG__MSG__DETAIL__LOW_STATE__TRAITS_HPP_

#include "common_msg/msg/detail/low_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'motor_state_struct'
#include "common_msg/msg/detail/motor_state__traits.hpp"
// Member 'imu_state_struct'
#include "common_msg/msg/detail/imu__traits.hpp"
// Member 'bms_state_struct'
#include "common_msg/msg/detail/bms_state__traits.hpp"
// Member 'foot_senser_state_struct'
#include "common_msg/msg/detail/foot_sensor__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<common_msg::msg::LowState>()
{
  return "common_msg::msg::LowState";
}

template<>
inline const char * name<common_msg::msg::LowState>()
{
  return "common_msg/msg/LowState";
}

template<>
struct has_fixed_size<common_msg::msg::LowState>
  : std::integral_constant<bool, has_fixed_size<common_msg::msg::BmsState>::value && has_fixed_size<common_msg::msg::FootSensor>::value && has_fixed_size<common_msg::msg::Imu>::value && has_fixed_size<common_msg::msg::MotorState>::value> {};

template<>
struct has_bounded_size<common_msg::msg::LowState>
  : std::integral_constant<bool, has_bounded_size<common_msg::msg::BmsState>::value && has_bounded_size<common_msg::msg::FootSensor>::value && has_bounded_size<common_msg::msg::Imu>::value && has_bounded_size<common_msg::msg::MotorState>::value> {};

template<>
struct is_message<common_msg::msg::LowState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // COMMON_MSG__MSG__DETAIL__LOW_STATE__TRAITS_HPP_
