// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from common_msg:msg/MotorSet.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "common_msg/msg/detail/motor_set__struct.hpp"
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

void MotorSet_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) common_msg::msg::MotorSet(_init);
}

void MotorSet_fini_function(void * message_memory)
{
  auto typed_message = static_cast<common_msg::msg::MotorSet *>(message_memory);
  typed_message->~MotorSet();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorSet_message_member_array[3] = {
  {
    "slave",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg::msg::MotorSet, slave),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg::msg::MotorSet, motor_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg::msg::MotorSet, mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorSet_message_members = {
  "common_msg::msg",  // message namespace
  "MotorSet",  // message name
  3,  // number of fields
  sizeof(common_msg::msg::MotorSet),
  MotorSet_message_member_array,  // message members
  MotorSet_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorSet_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorSet_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorSet_message_members,
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
get_message_type_support_handle<common_msg::msg::MotorSet>()
{
  return &::common_msg::msg::rosidl_typesupport_introspection_cpp::MotorSet_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, common_msg, msg, MotorSet)() {
  return &::common_msg::msg::rosidl_typesupport_introspection_cpp::MotorSet_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
