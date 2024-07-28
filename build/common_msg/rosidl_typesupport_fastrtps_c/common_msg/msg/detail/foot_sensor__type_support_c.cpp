// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from common_msg:msg/FootSensor.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/foot_sensor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "common_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "common_msg/msg/detail/foot_sensor__struct.h"
#include "common_msg/msg/detail/foot_sensor__functions.h"
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


using _FootSensor__ros_msg_type = common_msg__msg__FootSensor;

static bool _FootSensor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FootSensor__ros_msg_type * ros_message = static_cast<const _FootSensor__ros_msg_type *>(untyped_ros_message);
  // Field name: left_foot_sensor
  {
    size_t size = 18;
    auto array_ptr = ros_message->left_foot_sensor;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right_foot_sensor
  {
    size_t size = 18;
    auto array_ptr = ros_message->right_foot_sensor;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _FootSensor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FootSensor__ros_msg_type * ros_message = static_cast<_FootSensor__ros_msg_type *>(untyped_ros_message);
  // Field name: left_foot_sensor
  {
    size_t size = 18;
    auto array_ptr = ros_message->left_foot_sensor;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right_foot_sensor
  {
    size_t size = 18;
    auto array_ptr = ros_message->right_foot_sensor;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t get_serialized_size_common_msg__msg__FootSensor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FootSensor__ros_msg_type * ros_message = static_cast<const _FootSensor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_foot_sensor
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->left_foot_sensor;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_foot_sensor
  {
    size_t array_size = 18;
    auto array_ptr = ros_message->right_foot_sensor;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FootSensor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_common_msg__msg__FootSensor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t max_serialized_size_common_msg__msg__FootSensor(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: left_foot_sensor
  {
    size_t array_size = 18;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_foot_sensor
  {
    size_t array_size = 18;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _FootSensor__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_common_msg__msg__FootSensor(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FootSensor = {
  "common_msg::msg",
  "FootSensor",
  _FootSensor__cdr_serialize,
  _FootSensor__cdr_deserialize,
  _FootSensor__get_serialized_size,
  _FootSensor__max_serialized_size
};

static rosidl_message_type_support_t _FootSensor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FootSensor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, FootSensor)() {
  return &_FootSensor__type_support;
}

#if defined(__cplusplus)
}
#endif
