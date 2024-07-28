// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from common_msg:msg/FootSensor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "common_msg/msg/detail/foot_sensor__struct.hpp"
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

void FootSensor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) common_msg::msg::FootSensor(_init);
}

void FootSensor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<common_msg::msg::FootSensor *>(message_memory);
  typed_message->~FootSensor();
}

size_t size_function__FootSensor__left_foot_sensor(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__FootSensor__left_foot_sensor(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__FootSensor__left_foot_sensor(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 18> *>(untyped_member);
  return &member[index];
}

size_t size_function__FootSensor__right_foot_sensor(const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * get_const_function__FootSensor__right_foot_sensor(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 18> *>(untyped_member);
  return &member[index];
}

void * get_function__FootSensor__right_foot_sensor(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 18> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FootSensor_message_member_array[2] = {
  {
    "left_foot_sensor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(common_msg::msg::FootSensor, left_foot_sensor),  // bytes offset in struct
    nullptr,  // default value
    size_function__FootSensor__left_foot_sensor,  // size() function pointer
    get_const_function__FootSensor__left_foot_sensor,  // get_const(index) function pointer
    get_function__FootSensor__left_foot_sensor,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_foot_sensor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(common_msg::msg::FootSensor, right_foot_sensor),  // bytes offset in struct
    nullptr,  // default value
    size_function__FootSensor__right_foot_sensor,  // size() function pointer
    get_const_function__FootSensor__right_foot_sensor,  // get_const(index) function pointer
    get_function__FootSensor__right_foot_sensor,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FootSensor_message_members = {
  "common_msg::msg",  // message namespace
  "FootSensor",  // message name
  2,  // number of fields
  sizeof(common_msg::msg::FootSensor),
  FootSensor_message_member_array,  // message members
  FootSensor_init_function,  // function to initialize message memory (memory has to be allocated)
  FootSensor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FootSensor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FootSensor_message_members,
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
get_message_type_support_handle<common_msg::msg::FootSensor>()
{
  return &::common_msg::msg::rosidl_typesupport_introspection_cpp::FootSensor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, common_msg, msg, FootSensor)() {
  return &::common_msg::msg::rosidl_typesupport_introspection_cpp::FootSensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
