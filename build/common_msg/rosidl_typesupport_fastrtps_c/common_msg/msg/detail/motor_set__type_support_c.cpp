// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from common_msg:msg/MotorSet.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/motor_set__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "common_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "common_msg/msg/detail/motor_set__struct.h"
#include "common_msg/msg/detail/motor_set__functions.h"
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


// forward declare type support functions


using _MotorSet__ros_msg_type = common_msg__msg__MotorSet;

static bool _MotorSet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorSet__ros_msg_type * ros_message = static_cast<const _MotorSet__ros_msg_type *>(untyped_ros_message);
  // Field name: slave
  {
    cdr << ros_message->slave;
  }

  // Field name: motor_id
  {
    cdr << ros_message->motor_id;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  return true;
}

static bool _MotorSet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorSet__ros_msg_type * ros_message = static_cast<_MotorSet__ros_msg_type *>(untyped_ros_message);
  // Field name: slave
  {
    cdr >> ros_message->slave;
  }

  // Field name: motor_id
  {
    cdr >> ros_message->motor_id;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t get_serialized_size_common_msg__msg__MotorSet(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorSet__ros_msg_type * ros_message = static_cast<const _MotorSet__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name slave
  {
    size_t item_size = sizeof(ros_message->slave);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_id
  {
    size_t item_size = sizeof(ros_message->motor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotorSet__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_common_msg__msg__MotorSet(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t max_serialized_size_common_msg__msg__MotorSet(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: slave
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _MotorSet__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_common_msg__msg__MotorSet(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotorSet = {
  "common_msg::msg",
  "MotorSet",
  _MotorSet__cdr_serialize,
  _MotorSet__cdr_deserialize,
  _MotorSet__get_serialized_size,
  _MotorSet__max_serialized_size
};

static rosidl_message_type_support_t _MotorSet__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorSet,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, MotorSet)() {
  return &_MotorSet__type_support;
}

#if defined(__cplusplus)
}
#endif
