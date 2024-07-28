// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msg:msg/FootSensor.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__STRUCT_H_
#define COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/FootSensor in the package common_msg.
typedef struct common_msg__msg__FootSensor
{
  float left_foot_sensor[18];
  float right_foot_sensor[18];
} common_msg__msg__FootSensor;

// Struct for a sequence of common_msg__msg__FootSensor.
typedef struct common_msg__msg__FootSensor__Sequence
{
  common_msg__msg__FootSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msg__msg__FootSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__STRUCT_H_
