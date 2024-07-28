// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from common_msg:msg/Imu.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__IMU__STRUCT_H_
#define COMMON_MSG__MSG__DETAIL__IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Imu in the package common_msg.
typedef struct common_msg__msg__Imu
{
  float quaternion[4];
  float gyroscope[3];
  float accelerometer[3];
  float rpy[3];
} common_msg__msg__Imu;

// Struct for a sequence of common_msg__msg__Imu.
typedef struct common_msg__msg__Imu__Sequence
{
  common_msg__msg__Imu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} common_msg__msg__Imu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSG__MSG__DETAIL__IMU__STRUCT_H_
