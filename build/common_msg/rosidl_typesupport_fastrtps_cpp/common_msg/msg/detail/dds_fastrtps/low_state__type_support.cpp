// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from common_msg:msg/LowState.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/low_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "common_msg/msg/detail/low_state__struct.hpp"

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
  const common_msg::msg::MotorState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  common_msg::msg::MotorState &);
size_t get_serialized_size(
  const common_msg::msg::MotorState &,
  size_t current_alignment);
size_t
max_serialized_size_MotorState(
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
bool cdr_serialize(
  const common_msg::msg::Imu &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  common_msg::msg::Imu &);
size_t get_serialized_size(
  const common_msg::msg::Imu &,
  size_t current_alignment);
size_t
max_serialized_size_Imu(
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
bool cdr_serialize(
  const common_msg::msg::BmsState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  common_msg::msg::BmsState &);
size_t get_serialized_size(
  const common_msg::msg::BmsState &,
  size_t current_alignment);
size_t
max_serialized_size_BmsState(
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
bool cdr_serialize(
  const common_msg::msg::FootSensor &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  common_msg::msg::FootSensor &);
size_t get_serialized_size(
  const common_msg::msg::FootSensor &,
  size_t current_alignment);
size_t
max_serialized_size_FootSensor(
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
  const common_msg::msg::LowState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motor_state_struct
  {
    for (size_t i = 0; i < 30; i++) {
      common_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.motor_state_struct[i],
        cdr);
    }
  }
  // Member: imu_state_struct
  common_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.imu_state_struct,
    cdr);
  // Member: bms_state_struct
  common_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.bms_state_struct,
    cdr);
  // Member: foot_senser_state_struct
  common_msg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.foot_senser_state_struct,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  common_msg::msg::LowState & ros_message)
{
  // Member: motor_state_struct
  {
    for (size_t i = 0; i < 30; i++) {
      common_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.motor_state_struct[i]);
    }
  }

  // Member: imu_state_struct
  common_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.imu_state_struct);

  // Member: bms_state_struct
  common_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.bms_state_struct);

  // Member: foot_senser_state_struct
  common_msg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.foot_senser_state_struct);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
get_serialized_size(
  const common_msg::msg::LowState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motor_state_struct
  {
    size_t array_size = 30;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        common_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.motor_state_struct[index], current_alignment);
    }
  }
  // Member: imu_state_struct

  current_alignment +=
    common_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.imu_state_struct, current_alignment);
  // Member: bms_state_struct

  current_alignment +=
    common_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.bms_state_struct, current_alignment);
  // Member: foot_senser_state_struct

  current_alignment +=
    common_msg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.foot_senser_state_struct, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
max_serialized_size_LowState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: motor_state_struct
  {
    size_t array_size = 30;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        common_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_MotorState(
        full_bounded, current_alignment);
    }
  }

  // Member: imu_state_struct
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        common_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_Imu(
        full_bounded, current_alignment);
    }
  }

  // Member: bms_state_struct
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        common_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_BmsState(
        full_bounded, current_alignment);
    }
  }

  // Member: foot_senser_state_struct
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        common_msg::msg::typesupport_fastrtps_cpp::max_serialized_size_FootSensor(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LowState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const common_msg::msg::LowState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LowState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<common_msg::msg::LowState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LowState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const common_msg::msg::LowState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LowState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LowState(full_bounded, 0);
}

static message_type_support_callbacks_t _LowState__callbacks = {
  "common_msg::msg",
  "LowState",
  _LowState__cdr_serialize,
  _LowState__cdr_deserialize,
  _LowState__get_serialized_size,
  _LowState__max_serialized_size
};

static rosidl_message_type_support_t _LowState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LowState__callbacks,
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
get_message_type_support_handle<common_msg::msg::LowState>()
{
  return &common_msg::msg::typesupport_fastrtps_cpp::_LowState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, common_msg, msg, LowState)() {
  return &common_msg::msg::typesupport_fastrtps_cpp::_LowState__handle;
}

#ifdef __cplusplus
}
#endif
