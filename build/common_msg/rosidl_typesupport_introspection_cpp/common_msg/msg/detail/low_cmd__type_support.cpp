// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from common_msg:msg/LowCmd.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "common_msg/msg/detail/low_cmd__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace common_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LowCmd_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) common_msg::msg::LowCmd(_init);
}

void LowCmd_fini_function(void * message_memory)
{
  auto typed_message = static_cast<common_msg::msg::LowCmd *>(message_memory);
  typed_message->~LowCmd();
}

size_t size_function__LowCmd__motor_cmd(const void * untyped_member)
{
  (void)untyped_member;
  return 30;
}

const void * get_const_function__LowCmd__motor_cmd(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<common_msg::msg::MotorCmd, 30> *>(untyped_member);
  return &member[index];
}

void * get_function__LowCmd__motor_cmd(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<common_msg::msg::MotorCmd, 30> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LowCmd_message_member_array[1] = {
  {
    "motor_cmd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<common_msg::msg::MotorCmd>(),  // members of sub message
    true,  // is array
    30,  // array size
    false,  // is upper bound
    offsetof(common_msg::msg::LowCmd, motor_cmd),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowCmd__motor_cmd,  // size() function pointer
    get_const_function__LowCmd__motor_cmd,  // get_const(index) function pointer
    get_function__LowCmd__motor_cmd,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LowCmd_message_members = {
  "common_msg::msg",  // message namespace
  "LowCmd",  // message name
  1,  // number of fields
  sizeof(common_msg::msg::LowCmd),
  LowCmd_message_member_array,  // message members
  LowCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  LowCmd_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LowCmd_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LowCmd_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace common_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<common_msg::msg::LowCmd>()
{
  return &::common_msg::msg::rosidl_typesupport_introspection_cpp::LowCmd_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, common_msg, msg, LowCmd)() {
  return &::common_msg::msg::rosidl_typesupport_introspection_cpp::LowCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
