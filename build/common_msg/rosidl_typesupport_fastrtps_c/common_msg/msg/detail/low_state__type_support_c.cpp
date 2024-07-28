// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from common_msg:msg/LowState.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/low_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "common_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "common_msg/msg/detail/low_state__struct.h"
#include "common_msg/msg/detail/low_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "common_msg/msg/detail/bms_state__functions.h"  // bms_state_struct
#include "common_msg/msg/detail/foot_sensor__functions.h"  // foot_senser_state_struct
#include "common_msg/msg/detail/imu__functions.h"  // imu_state_struct
#include "common_msg/msg/detail/motor_state__functions.h"  // motor_state_struct

// forward declare type support functions
size_t get_serialized_size_common_msg__msg__BmsState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_common_msg__msg__BmsState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, BmsState)();
size_t get_serialized_size_common_msg__msg__FootSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_common_msg__msg__FootSensor(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, FootSensor)();
size_t get_serialized_size_common_msg__msg__Imu(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_common_msg__msg__Imu(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, Imu)();
size_t get_serialized_size_common_msg__msg__MotorState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_common_msg__msg__MotorState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, MotorState)();


using _LowState__ros_msg_type = common_msg__msg__LowState;

static bool _LowState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LowState__ros_msg_type * ros_message = static_cast<const _LowState__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_state_struct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, common_msg, msg, MotorState
      )()->data);
    size_t size = 30;
    auto array_ptr = ros_message->motor_state_struct;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: imu_state_struct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, common_msg, msg, Imu
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->imu_state_struct, cdr))
    {
      return false;
    }
  }

  // Field name: bms_state_struct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, common_msg, msg, BmsState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bms_state_struct, cdr))
    {
      return false;
    }
  }

  // Field name: foot_senser_state_struct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, common_msg, msg, FootSensor
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->foot_senser_state_struct, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LowState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LowState__ros_msg_type * ros_message = static_cast<_LowState__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_state_struct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, common_msg, msg, MotorState
      )()->data);
    size_t size = 30;
    auto array_ptr = ros_message->motor_state_struct;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: imu_state_struct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, common_msg, msg, Imu
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->imu_state_struct))
    {
      return false;
    }
  }

  // Field name: bms_state_struct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, common_msg, msg, BmsState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bms_state_struct))
    {
      return false;
    }
  }

  // Field name: foot_senser_state_struct
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, common_msg, msg, FootSensor
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->foot_senser_state_struct))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t get_serialized_size_common_msg__msg__LowState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LowState__ros_msg_type * ros_message = static_cast<const _LowState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motor_state_struct
  {
    size_t array_size = 30;
    auto array_ptr = ros_message->motor_state_struct;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_common_msg__msg__MotorState(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name imu_state_struct

  current_alignment += get_serialized_size_common_msg__msg__Imu(
    &(ros_message->imu_state_struct), current_alignment);
  // field.name bms_state_struct

  current_alignment += get_serialized_size_common_msg__msg__BmsState(
    &(ros_message->bms_state_struct), current_alignment);
  // field.name foot_senser_state_struct

  current_alignment += get_serialized_size_common_msg__msg__FootSensor(
    &(ros_message->foot_senser_state_struct), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LowState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_common_msg__msg__LowState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t max_serialized_size_common_msg__msg__LowState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: motor_state_struct
  {
    size_t array_size = 30;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_common_msg__msg__MotorState(
        full_bounded, current_alignment);
    }
  }
  // member: imu_state_struct
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_common_msg__msg__Imu(
        full_bounded, current_alignment);
    }
  }
  // member: bms_state_struct
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_common_msg__msg__BmsState(
        full_bounded, current_alignment);
    }
  }
  // member: foot_senser_state_struct
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_common_msg__msg__FootSensor(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _LowState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_common_msg__msg__LowState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LowState = {
  "common_msg::msg",
  "LowState",
  _LowState__cdr_serialize,
  _LowState__cdr_deserialize,
  _LowState__get_serialized_size,
  _LowState__max_serialized_size
};

static rosidl_message_type_support_t _LowState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LowState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, LowState)() {
  return &_LowState__type_support;
}

#if defined(__cplusplus)
}
#endif
