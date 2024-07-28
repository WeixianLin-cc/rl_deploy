// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msg:msg/MotorStateArray.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_STATE_ARRAY__STRUCT_H_
#define COMMON_MSG__MSG__DETAIL__MOTOR_STATE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_state'
#include "common_msg/msg/detail/motor_state__struct.h"

// Struct defined in msg/MotorStateArray in the package common_msg.
typedef struct common_msg__msg__MotorStateArray
{
  common_msg__msg__MotorState__Sequence motor_state;
} common_msg__msg__MotorStateArray;

// Struct for a sequence of common_msg__msg__MotorStateArray.
typedef struct common_msg__msg__MotorStateArray__Sequence
{
  common_msg__msg__MotorStateArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msg__msg__MotorStateArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_STATE_ARRAY__STRUCT_H_
