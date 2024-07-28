// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from common_msg:msg/MotorStateArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "common_msg/msg/detail/motor_state_array__rosidl_typesupport_introspection_c.h"
#include "common_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "common_msg/msg/detail/motor_state_array__functions.h"
#include "common_msg/msg/detail/motor_state_array__struct.h"


// Include directives for member types
// Member `motor_state`
#include "common_msg/msg/motor_state.h"
// Member `motor_state`
#include "common_msg/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  common_msg__msg__MotorStateArray__init(message_memory);
}

void MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_fini_function(void * message_memory)
{
  common_msg__msg__MotorStateArray__fini(message_memory);
}

size_t MotorStateArray__rosidl_typesupport_introspection_c__size_function__MotorState__motor_state(
  const void * untyped_member)
{
  const common_msg__msg__MotorState__Sequence * member =
    (const common_msg__msg__MotorState__Sequence *)(untyped_member);
  return member->size;
}

const void * MotorStateArray__rosidl_typesupport_introspection_c__get_const_function__MotorState__motor_state(
  const void * untyped_member, size_t index)
{
  const common_msg__msg__MotorState__Sequence * member =
    (const common_msg__msg__MotorState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MotorStateArray__rosidl_typesupport_introspection_c__get_function__MotorState__motor_state(
  void * untyped_member, size_t index)
{
  common_msg__msg__MotorState__Sequence * member =
    (common_msg__msg__MotorState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MotorStateArray__rosidl_typesupport_introspection_c__resize_function__MotorState__motor_state(
  void * untyped_member, size_t size)
{
  common_msg__msg__MotorState__Sequence * member =
    (common_msg__msg__MotorState__Sequence *)(untyped_member);
  common_msg__msg__MotorState__Sequence__fini(member);
  return common_msg__msg__MotorState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_message_member_array[1] = {
  {
    "motor_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__MotorStateArray, motor_state),  // bytes offset in struct
    NULL,  // default value
    MotorStateArray__rosidl_typesupport_introspection_c__size_function__MotorState__motor_state,  // size() function pointer
    MotorStateArray__rosidl_typesupport_introspection_c__get_const_function__MotorState__motor_state,  // get_const(index) function pointer
    MotorStateArray__rosidl_typesupport_introspection_c__get_function__MotorState__motor_state,  // get(index) function pointer
    MotorStateArray__rosidl_typesupport_introspection_c__resize_function__MotorState__motor_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_message_members = {
  "common_msg__msg",  // message namespace
  "MotorStateArray",  // message name
  1,  // number of fields
  sizeof(common_msg__msg__MotorStateArray),
  MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_message_member_array,  // message members
  MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_message_type_support_handle = {
  0,
  &MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_common_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, MotorStateArray)() {
  MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, MotorState)();
  if (!MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_message_type_support_handle.typesupport_identifier) {
    MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorStateArray__rosidl_typesupport_introspection_c__MotorStateArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
