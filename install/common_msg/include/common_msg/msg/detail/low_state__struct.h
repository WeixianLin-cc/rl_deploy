// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msg:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__LOW_STATE__STRUCT_H_
#define COMMON_MSG__MSG__DETAIL__LOW_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motor_state_struct'
#include "common_msg/msg/detail/motor_state__struct.h"
// Member 'imu_state_struct'
#include "common_msg/msg/detail/imu__struct.h"
// Member 'bms_state_struct'
#include "common_msg/msg/detail/bms_state__struct.h"
// Member 'foot_senser_state_struct'
#include "common_msg/msg/detail/foot_sensor__struct.h"

// Struct defined in msg/LowState in the package common_msg.
typedef struct common_msg__msg__LowState
{
  common_msg__msg__MotorState motor_state_struct[30];
  common_msg__msg__Imu imu_state_struct;
  common_msg__msg__BmsState bms_state_struct;
  common_msg__msg__FootSensor foot_senser_state_struct;
} common_msg__msg__LowState;

// Struct for a sequence of common_msg__msg__LowState.
typedef struct common_msg__msg__LowState__Sequence
{
  common_msg__msg__LowState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msg__msg__LowState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSG__MSG__DETAIL__LOW_STATE__STRUCT_H_
