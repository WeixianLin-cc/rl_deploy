// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from common_msg:msg/MotorControlArray.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/motor_control_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "common_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "common_msg/msg/detail/motor_control_array__struct.h"
#include "common_msg/msg/detail/motor_control_array__functions.h"
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

#include "common_msg/msg/detail/motor_control_cmd__functions.h"  // motor_control

// forward declare type support functions
size_t get_serialized_size_common_msg__msg__MotorControlCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_common_msg__msg__MotorControlCmd(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, MotorControlCmd)();


using _MotorControlArray__ros_msg_type = common_msg__msg__MotorControlArray;

static bool _MotorControlArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorControlArray__ros_msg_type * ros_message = static_cast<const _MotorControlArray__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_control
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, common_msg, msg, MotorControlCmd
      )()->data);
    size_t size = ros_message->motor_control.size;
    auto array_ptr = ros_message->motor_control.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _MotorControlArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorControlArray__ros_msg_type * ros_message = static_cast<_MotorControlArray__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_control
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, common_msg, msg, MotorControlCmd
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->motor_control.data) {
      common_msg__msg__MotorControlCmd__Sequence__fini(&ros_message->motor_control);
    }
    if (!common_msg__msg__MotorControlCmd__Sequence__init(&ros_message->motor_control, size)) {
      return "failed to create array for field 'motor_control'";
    }
    auto array_ptr = ros_message->motor_control.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t get_serialized_size_common_msg__msg__MotorControlArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorControlArray__ros_msg_type * ros_message = static_cast<const _MotorControlArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motor_control
  {
    size_t array_size = ros_message->motor_control.size;
    auto array_ptr = ros_message->motor_control.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_common_msg__msg__MotorControlCmd(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotorControlArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_common_msg__msg__MotorControlArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t max_serialized_size_common_msg__msg__MotorControlArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: motor_control
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_common_msg__msg__MotorControlCmd(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MotorControlArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_common_msg__msg__MotorControlArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotorControlArray = {
  "common_msg::msg",
  "MotorControlArray",
  _MotorControlArray__cdr_serialize,
  _MotorControlArray__cdr_deserialize,
  _MotorControlArray__get_serialized_size,
  _MotorControlArray__max_serialized_size
};

static rosidl_message_type_support_t _MotorControlArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorControlArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, MotorControlArray)() {
  return &_MotorControlArray__type_support;
}

#if defined(__cplusplus)
}
#endif
