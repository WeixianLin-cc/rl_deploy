// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from common_msg:msg/Imu.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/imu__rosidl_typesupport_fastrtps_cpp.hpp"
#include "common_msg/msg/detail/imu__struct.hpp"

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
  const common_msg::msg::Imu & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: quaternion
  {
    cdr << ros_message.quaternion;
  }
  // Member: gyroscope
  {
    cdr << ros_message.gyroscope;
  }
  // Member: accelerometer
  {
    cdr << ros_message.accelerometer;
  }
  // Member: rpy
  {
    cdr << ros_message.rpy;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  common_msg::msg::Imu & ros_message)
{
  // Member: quaternion
  {
    cdr >> ros_message.quaternion;
  }

  // Member: gyroscope
  {
    cdr >> ros_message.gyroscope;
  }

  // Member: accelerometer
  {
    cdr >> ros_message.accelerometer;
  }

  // Member: rpy
  {
    cdr >> ros_message.rpy;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
get_serialized_size(
  const common_msg::msg::Imu & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: quaternion
  {
    size_t array_size = 4;
    size_t item_size = sizeof(ros_message.quaternion[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gyroscope
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.gyroscope[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accelerometer
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.accelerometer[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rpy
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.rpy[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
max_serialized_size_Imu(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: quaternion
  {
    size_t array_size = 4;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gyroscope
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accelerometer
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rpy
  {
    size_t array_size = 3;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Imu__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const common_msg::msg::Imu *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Imu__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<common_msg::msg::Imu *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Imu__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const common_msg::msg::Imu *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Imu__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Imu(full_bounded, 0);
}

static message_type_support_callbacks_t _Imu__callbacks = {
  "common_msg::msg",
  "Imu",
  _Imu__cdr_serialize,
  _Imu__cdr_deserialize,
  _Imu__get_serialized_size,
  _Imu__max_serialized_size
};

static rosidl_message_type_support_t _Imu__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Imu__callbacks,
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
get_message_type_support_handle<common_msg::msg::Imu>()
{
  return &common_msg::msg::typesupport_fastrtps_cpp::_Imu__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, common_msg, msg, Imu)() {
  return &common_msg::msg::typesupport_fastrtps_cpp::_Imu__handle;
}

#ifdef __cplusplus
}
#endif