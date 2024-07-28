// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from common_msg:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__LOW_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define COMMON_MSG__MSG__DETAIL__LOW_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "common_msg/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "common_msg/msg/detail/low_state__struct.hpp"

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

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  common_msg::msg::LowState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
get_serialized_size(
  const common_msg::msg::LowState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
max_serialized_size_LowState(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace common_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_common_msg
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, common_msg, msg, LowState)();

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSG__MSG__DETAIL__LOW_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
