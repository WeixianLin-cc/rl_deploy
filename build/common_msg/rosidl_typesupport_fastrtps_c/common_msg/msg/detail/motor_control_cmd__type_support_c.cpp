// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from common_msg:msg/MotorControlCmd.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/motor_control_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "common_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "common_msg/msg/detail/motor_control_cmd__struct.h"
#include "common_msg/msg/detail/motor_control_cmd__functions.h"
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


using _MotorControlCmd__ros_msg_type = common_msg__msg__MotorControlCmd;

static bool _MotorControlCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotorControlCmd__ros_msg_type * ros_message = static_cast<const _MotorControlCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: index
  {
    cdr << ros_message->index;
  }

  // Field name: slave
  {
    cdr << ros_message->slave;
  }

  // Field name: motor_id
  {
    cdr << ros_message->motor_id;
  }

  // Field name: motor_id_new
  {
    cdr << ros_message->motor_id_new;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: current
  {
    cdr << ros_message->current;
  }

  // Field name: position
  {
    cdr << ros_message->position;
  }

  // Field name: tau
  {
    cdr << ros_message->tau;
  }

  // Field name: kp
  {
    cdr << ros_message->kp;
  }

  // Field name: kd
  {
    cdr << ros_message->kd;
  }

  return true;
}

static bool _MotorControlCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotorControlCmd__ros_msg_type * ros_message = static_cast<_MotorControlCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: index
  {
    cdr >> ros_message->index;
  }

  // Field name: slave
  {
    cdr >> ros_message->slave;
  }

  // Field name: motor_id
  {
    cdr >> ros_message->motor_id;
  }

  // Field name: motor_id_new
  {
    cdr >> ros_message->motor_id_new;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: current
  {
    cdr >> ros_message->current;
  }

  // Field name: position
  {
    cdr >> ros_message->position;
  }

  // Field name: tau
  {
    cdr >> ros_message->tau;
  }

  // Field name: kp
  {
    cdr >> ros_message->kp;
  }

  // Field name: kd
  {
    cdr >> ros_message->kd;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t get_serialized_size_common_msg__msg__MotorControlCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotorControlCmd__ros_msg_type * ros_message = static_cast<const _MotorControlCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name index
  {
    size_t item_size = sizeof(ros_message->index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
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
  // field.name motor_id_new
  {
    size_t item_size = sizeof(ros_message->motor_id_new);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position
  {
    size_t item_size = sizeof(ros_message->position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tau
  {
    size_t item_size = sizeof(ros_message->tau);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kp
  {
    size_t item_size = sizeof(ros_message->kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kd
  {
    size_t item_size = sizeof(ros_message->kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotorControlCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_common_msg__msg__MotorControlCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_common_msg
size_t max_serialized_size_common_msg__msg__MotorControlCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: index
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
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
  // member: motor_id_new
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: speed
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
  // member: position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tau
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: kd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MotorControlCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_common_msg__msg__MotorControlCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MotorControlCmd = {
  "common_msg::msg",
  "MotorControlCmd",
  _MotorControlCmd__cdr_serialize,
  _MotorControlCmd__cdr_deserialize,
  _MotorControlCmd__get_serialized_size,
  _MotorControlCmd__max_serialized_size
};

static rosidl_message_type_support_t _MotorControlCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotorControlCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, MotorControlCmd)() {
  return &_MotorControlCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
