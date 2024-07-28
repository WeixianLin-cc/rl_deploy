// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msg:msg/MotorControlCmd.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_CMD__STRUCT_H_
#define COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorControlCmd in the package common_msg.
typedef struct common_msg__msg__MotorControlCmd
{
  uint8_t mode;
  uint8_t index;
  uint8_t slave;
  uint16_t motor_id;
  uint16_t motor_id_new;
  float speed;
  float current;
  float position;
  float tau;
  float kp;
  float kd;
} common_msg__msg__MotorControlCmd;

// Struct for a sequence of common_msg__msg__MotorControlCmd.
typedef struct common_msg__msg__MotorControlCmd__Sequence
{
  common_msg__msg__MotorControlCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msg__msg__MotorControlCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_CMD__STRUCT_H_
