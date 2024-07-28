// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from common_msg:msg/BmsState.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/bms_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "common_msg/msg/detail/bms_state__struct.hpp"

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
  const common_msg::msg::BmsState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: voltage
  cdr << ros_message.voltage;
  // Member: current
  cdr << ros_message.current;
  // Member: soc
  cdr << ros_message.soc;
  // Member: remain_capacity
  cdr << ros_message.remain_capacity;
  // Member: max_cell_temperature
  cdr << ros_message.max_cell_temperature;
  // Member: status
  cdr << ros_message.status;
  // Member: error_code
  cdr << ros_message.error_code;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  common_msg::msg::BmsState & ros_message)
{
  // Member: voltage
  cdr >> ros_message.voltage;

  // Member: current
  cdr >> ros_message.current;

  // Member: soc
  cdr >> ros_message.soc;

  // Member: remain_capacity
  cdr >> ros_message.remain_capacity;

  // Member: max_cell_temperature
  cdr >> ros_message.max_cell_temperature;

  // Member: status
  cdr >> ros_message.status;

  // Member: error_code
  cdr >> ros_message.error_code;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
get_serialized_size(
  const common_msg::msg::BmsState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: voltage
  {
    size_t item_size = sizeof(ros_message.voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current
  {
    size_t item_size = sizeof(ros_message.current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: soc
  {
    size_t item_size = sizeof(ros_message.soc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remain_capacity
  {
    size_t item_size = sizeof(ros_message.remain_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_cell_temperature
  {
    size_t item_size = sizeof(ros_message.max_cell_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_code
  {
    size_t item_size = sizeof(ros_message.error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
max_serialized_size_BmsState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: voltage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: soc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: remain_capacity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_cell_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BmsState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const common_msg::msg::BmsState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BmsState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<common_msg::msg::BmsState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BmsState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const common_msg::msg::BmsState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BmsState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_BmsState(full_bounded, 0);
}

static message_type_support_callbacks_t _BmsState__callbacks = {
  "common_msg::msg",
  "BmsState",
  _BmsState__cdr_serialize,
  _BmsState__cdr_deserialize,
  _BmsState__get_serialized_size,
  _BmsState__max_serialized_size
};

static rosidl_message_type_support_t _BmsState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BmsState__callbacks,
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
get_message_type_support_handle<common_msg::msg::BmsState>()
{
  return &common_msg::msg::typesupport_fastrtps_cpp::_BmsState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, common_msg, msg, BmsState)() {
  return &common_msg::msg::typesupport_fastrtps_cpp::_BmsState__handle;
}

#ifdef __cplusplus
}
#endif
