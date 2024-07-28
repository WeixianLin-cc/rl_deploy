// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from common_msg:msg/MotorSet.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/motor_set__rosidl_typesupport_fastrtps_cpp.hpp"
#include "common_msg/msg/detail/motor_set__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace common_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
cdr_serialize(
  const common_msg::msg::MotorSet & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: slave
  cdr << ros_message.slave;
  // Member: motor_id
  cdr << ros_message.motor_id;
  // Member: mode
  cdr << ros_message.mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  common_msg::msg::MotorSet & ros_message)
{
  // Member: slave
  cdr >> ros_message.slave;

  // Member: motor_id
  cdr >> ros_message.motor_id;

  // Member: mode
  cdr >> ros_message.mode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
get_serialized_size(
  const common_msg::msg::MotorSet & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: slave
  {
    size_t item_size = sizeof(ros_message.slave);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_id
  {
    size_t item_size = sizeof(ros_message.motor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
max_serialized_size_MotorSet(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: slave
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _MotorSet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const common_msg::msg::MotorSet *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorSet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<common_msg::msg::MotorSet *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorSet__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const common_msg::msg::MotorSet *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorSet__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MotorSet(full_bounded, 0);
}

static message_type_support_callbacks_t _MotorSet__callbacks = {
  "common_msg::msg",
  "MotorSet",
  _MotorSet__cdr_serialize,
  _MotorSet__cdr_deserialize,
  _MotorSet__get_serialized_size,
  _MotorSet__max_serialized_size
};

static rosidl_message_type_support_t _MotorSet__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorSet__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace common_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_common_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<common_msg::msg::MotorSet>()
{
  return &common_msg::msg::typesupport_fastrtps_cpp::_MotorSet__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, common_msg, msg, MotorSet)() {
  return &common_msg::msg::typesupport_fastrtps_cpp::_MotorSet__handle;
}

#ifdef __cplusplus
}
#endif
