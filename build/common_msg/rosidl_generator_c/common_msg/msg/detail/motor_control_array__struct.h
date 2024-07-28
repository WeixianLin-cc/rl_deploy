// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msg:msg/MotorControlArray.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_ARRAY__STRUCT_H_
#define COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_control'
#include "common_msg/msg/detail/motor_control_cmd__struct.h"

// Struct defined in msg/MotorControlArray in the package common_msg.
typedef struct common_msg__msg__MotorControlArray
{
  common_msg__msg__MotorControlCmd__Sequence motor_control;
} common_msg__msg__MotorControlArray;

// Struct for a sequence of common_msg__msg__MotorControlArray.
typedef struct common_msg__msg__MotorControlArray__Sequence
{
  common_msg__msg__MotorControlArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msg__msg__MotorControlArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_ARRAY__STRUCT_H_
