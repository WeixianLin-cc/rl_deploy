// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from common_msg:msg/BmsState.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/bms_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "common_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "common_msg/msg/detail/bms_state__struct.h"
#include "common_msg/msg/detail/bms_state__functions.h"
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


using _BmsState__ros_msg_type = common_msg__msg__BmsState;

static bool _BmsState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BmsState__ros_msg_type * ros_message = static_cast<const _BmsState__ros_msg_type *>(untyped_ros_message);
  // Field name: voltage
  {
    cdr << ros_message->voltage;
  }

  // Field name: current
  {
    cdr << ros_message->current;
  }

  // Field name: soc
  {
    cdr << ros_message->soc;
  }

  // Field name: remain_capacity
  {
    cdr << ros_message->remain_capacity;
  }

  // Field name: max_cell_temperature
  {
    cdr << ros_message->max_cell_temperature;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: error_code
  {
    cdr << ros_message->error_code;
  }

  return true;
}

static bool _BmsState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BmsState__ros_msg_type * ros_message = static_cast<_BmsState__ros_msg_type *>(untyped_ros_message);
  // Field name: voltage
  {
    cdr >> ros_message->voltage;
  }

  // Field name: current
  {
    cdr >> ros_message->current;
  }

  // Field name: soc
  {
    cdr >> ros_message->soc;
  }

  // Field name: remain_capacity
  {
    cdr >> ros_message->remain_capacity;
  }

  // Field name: max_cell_temperature
  {
    cdr >> ros_message->max_cell_temperature;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: error_code
  {
    cdr >> ros_message->error_code;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t get_serialized_size_common_msg__msg__BmsState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BmsState__ros_msg_type * ros_message = static_cast<const _BmsState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name voltage
  {
    size_t item_size = sizeof(ros_message->voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name soc
  {
    size_t item_size = sizeof(ros_message->soc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remain_capacity
  {
    size_t item_size = sizeof(ros_message->remain_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_cell_temperature
  {
    size_t item_size = sizeof(ros_message->max_cell_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_code
  {
    size_t item_size = sizeof(ros_message->error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BmsState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_common_msg__msg__BmsState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t max_serialized_size_common_msg__msg__BmsState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: soc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: remain_capacity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_cell_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BmsState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_common_msg__msg__BmsState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BmsState = {
  "common_msg::msg",
  "BmsState",
  _BmsState__cdr_serialize,
  _BmsState__cdr_deserialize,
  _BmsState__get_serialized_size,
  _BmsState__max_serialized_size
};

static rosidl_message_type_support_t _BmsState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BmsState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, BmsState)() {
  return &_BmsState__type_support;
}

#if defined(__cplusplus)
}
#endif
