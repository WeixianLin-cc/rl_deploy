// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msg:msg/LowCmd.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__LOW_CMD__STRUCT_H_
#define COMMON_MSG__MSG__DETAIL__LOW_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_cmd'
#include "common_msg/msg/detail/motor_cmd__struct.h"

// Struct defined in msg/LowCmd in the package common_msg.
typedef struct common_msg__msg__LowCmd
{
  common_msg__msg__MotorCmd motor_cmd[30];
} common_msg__msg__LowCmd;

// Struct for a sequence of common_msg__msg__LowCmd.
typedef struct common_msg__msg__LowCmd__Sequence
{
  common_msg__msg__LowCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msg__msg__LowCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSG__MSG__DETAIL__LOW_CMD__STRUCT_H_
