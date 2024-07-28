// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from common_msg:msg/LowState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "common_msg/msg/detail/low_state__struct.hpp"
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

void LowState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) common_msg::msg::LowState(_init);
}

void LowState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<common_msg::msg::LowState *>(message_memory);
  typed_message->~LowState();
}

size_t size_function__LowState__motor_state_struct(const void * untyped_member)
{
  (void)untyped_member;
  return 30;
}

const void * get_const_function__LowState__motor_state_struct(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<common_msg::msg::MotorState, 30> *>(untyped_member);
  return &member[index];
}

void * get_function__LowState__motor_state_struct(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<common_msg::msg::MotorState, 30> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LowState_message_member_array[4] = {
  {
    "motor_state_struct",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<common_msg::msg::MotorState>(),  // members of sub message
    true,  // is array
    30,  // array size
    false,  // is upper bound
    offsetof(common_msg::msg::LowState, motor_state_struct),  // bytes offset in struct
    nullptr,  // default value
    size_function__LowState__motor_state_struct,  // size() function pointer
    get_const_function__LowState__motor_state_struct,  // get_const(index) function pointer
    get_function__LowState__motor_state_struct,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_state_struct",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<common_msg::msg::Imu>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg::msg::LowState, imu_state_struct),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bms_state_struct",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<common_msg::msg::BmsState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg::msg::LowState, bms_state_struct),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "foot_senser_state_struct",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<common_msg::msg::FootSensor>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg::msg::LowState, foot_senser_state_struct),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LowState_message_members = {
  "common_msg::msg",  // message namespace
  "LowState",  // message name
  4,  // number of fields
  sizeof(common_msg::msg::LowState),
  LowState_message_member_array,  // message members
  LowState_init_function,  // function to initialize message memory (memory has to be allocated)
  LowState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LowState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LowState_message_members,
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
get_message_type_support_handle<common_msg::msg::LowState>()
{
  return &::common_msg::msg::rosidl_typesupport_introspection_cpp::LowState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, common_msg, msg, LowState)() {
  return &::common_msg::msg::rosidl_typesupport_introspection_cpp::LowState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
