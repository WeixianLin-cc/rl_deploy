// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from common_msg:msg/MotorControlArray.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/motor_control_array__rosidl_typesupport_fastrtps_cpp.hpp"
#include "common_msg/msg/detail/motor_control_array__struct.hpp"

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
bool cdr_serialize(
  const common_msg::msg::MotorControlCmd &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  common_msg::msg::MotorControlCmd &);
size_t get_serialized_size(
  const common_msg::msg::MotorControlCmd &,
  size_t current_alignment);
size_t
max_serialized_size_MotorControlCmd(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace common_msg


namespace common_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
cdr_serialize(
  const common_msg::msg::MotorControlArray & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motor_control
  {
    size_t size = ros_message.motor_control.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      common_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.motor_control[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  common_msg::msg::MotorControlArray & ros_message)
{
  // Member: motor_control
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.motor_control.resize(size);
    for (size_t i = 0; i < size; i++) {
      common_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.motor_control[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
get_serialized_size(
  const common_msg::msg::MotorControlArray & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motor_control
  {
    size_t array_size = ros_message.motor_control.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        common_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.motor_control[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
max_serialized_size_MotorControlArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: motor_control
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        common_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_MotorControlCmd(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _MotorControlArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const common_msg::msg::MotorControlArray *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorControlArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<common_msg::msg::MotorControlArray *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorControlArray__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const common_msg::msg::MotorControlArray *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorControlArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MotorControlArray(full_bounded, 0);
}

static message_type_support_callbacks_t _MotorControlArray__callbacks = {
  "common_msg::msg",
  "MotorControlArray",
  _MotorControlArray__cdr_serialize,
  _MotorControlArray__cdr_deserialize,
  _MotorControlArray__get_serialized_size,
  _MotorControlArray__max_serialized_size
};

static rosidl_message_type_support_t _MotorControlArray__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorControlArray__callbacks,
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
get_message_type_support_handle<common_msg::msg::MotorControlArray>()
{
  return &common_msg::msg::typesupport_fastrtps_cpp::_MotorControlArray__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, common_msg, msg, MotorControlArray)() {
  return &common_msg::msg::typesupport_fastrtps_cpp::_MotorControlArray__handle;
}

#ifdef __cplusplus
}
#endif
