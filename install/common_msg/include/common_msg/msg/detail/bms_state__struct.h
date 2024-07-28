// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msg:msg/BmsState.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__BMS_STATE__STRUCT_H_
#define COMMON_MSG__MSG__DETAIL__BMS_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BmsState in the package common_msg.
typedef struct common_msg__msg__BmsState
{
  float voltage;
  float current;
  float soc;
  float remain_capacity;
  float max_cell_temperature;
  uint8_t status;
  uint64_t error_code;
} common_msg__msg__BmsState;

// Struct for a sequence of common_msg__msg__BmsState.
typedef struct common_msg__msg__BmsState__Sequence
{
  common_msg__msg__BmsState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msg__msg__BmsState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSG__MSG__DETAIL__BMS_STATE__STRUCT_H_
