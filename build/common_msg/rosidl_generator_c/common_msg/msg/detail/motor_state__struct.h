// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msg:msg/MotorState.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
#define COMMON_MSG__MSG__DETAIL__MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorState in the package common_msg.
typedef struct common_msg__msg__MotorState
{
  uint8_t mode;
  float q;
  float dq;
  float ddq;
  float tau;
  int8_t temperature;
} common_msg__msg__MotorState;

// Struct for a sequence of common_msg__msg__MotorState.
typedef struct common_msg__msg__MotorState__Sequence
{
  common_msg__msg__MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msg__msg__MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_STATE__STRUCT_H_
