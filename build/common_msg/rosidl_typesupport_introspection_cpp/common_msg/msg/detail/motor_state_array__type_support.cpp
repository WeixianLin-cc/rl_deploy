// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from common_msg:msg/MotorStateArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "common_msg/msg/detail/motor_state_array__struct.hpp"
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

void MotorStateArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) common_msg::msg::MotorStateArray(_init);
}

void MotorStateArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<common_msg::msg::MotorStateArray *>(message_memory);
  typed_message->~MotorStateArray();
}

size_t size_function__MotorStateArray__motor_state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<common_msg::msg::MotorState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MotorStateArray__motor_state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<common_msg::msg::MotorState> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorStateArray__motor_state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<common_msg::msg::MotorState> *>(untyped_member);
  return &member[index];
}

void resize_function__MotorStateArray__motor_state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<common_msg::msg::MotorState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorStateArray_message_member_array[1] = {
  {
    "motor_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<common_msg::msg::MotorState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg::msg::MotorStateArray, motor_state),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorStateArray__motor_state,  // size() function pointer
    get_const_function__MotorStateArray__motor_state,  // get_const(index) function pointer
    get_function__MotorStateArray__motor_state,  // get(index) function pointer
    resize_function__MotorStateArray__motor_state  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorStateArray_message_members = {
  "common_msg::msg",  // message namespace
  "MotorStateArray",  // message name
  1,  // number of fields
  sizeof(common_msg::msg::MotorStateArray),
  MotorStateArray_message_member_array,  // message members
  MotorStateArray_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorStateArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorStateArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorStateArray_message_members,
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
get_message_type_support_handle<common_msg::msg::MotorStateArray>()
{
  return &::common_msg::msg::rosidl_typesupport_introspection_cpp::MotorStateArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, common_msg, msg, MotorStateArray)() {
  return &::common_msg::msg::rosidl_typesupport_introspection_cpp::MotorStateArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
