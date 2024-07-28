// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from common_msg:msg/MotorControlArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "common_msg/msg/detail/motor_control_array__rosidl_typesupport_introspection_c.h"
#include "common_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "common_msg/msg/detail/motor_control_array__functions.h"
#include "common_msg/msg/detail/motor_control_array__struct.h"


// Include directives for member types
// Member `motor_control`
#include "common_msg/msg/motor_control_cmd.h"
// Member `motor_control`
#include "common_msg/msg/detail/motor_control_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  common_msg__msg__MotorControlArray__init(message_memory);
}

void MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_fini_function(void * message_memory)
{
  common_msg__msg__MotorControlArray__fini(message_memory);
}

size_t MotorControlArray__rosidl_typesupport_introspection_c__size_function__MotorControlCmd__motor_control(
  const void * untyped_member)
{
  const common_msg__msg__MotorControlCmd__Sequence * member =
    (const common_msg__msg__MotorControlCmd__Sequence *)(untyped_member);
  return member->size;
}

const void * MotorControlArray__rosidl_typesupport_introspection_c__get_const_function__MotorControlCmd__motor_control(
  const void * untyped_member, size_t index)
{
  const common_msg__msg__MotorControlCmd__Sequence * member =
    (const common_msg__msg__MotorControlCmd__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MotorControlArray__rosidl_typesupport_introspection_c__get_function__MotorControlCmd__motor_control(
  void * untyped_member, size_t index)
{
  common_msg__msg__MotorControlCmd__Sequence * member =
    (common_msg__msg__MotorControlCmd__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MotorControlArray__rosidl_typesupport_introspection_c__resize_function__MotorControlCmd__motor_control(
  void * untyped_member, size_t size)
{
  common_msg__msg__MotorControlCmd__Sequence * member =
    (common_msg__msg__MotorControlCmd__Sequence *)(untyped_member);
  common_msg__msg__MotorControlCmd__Sequence__fini(member);
  return common_msg__msg__MotorControlCmd__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_message_member_array[1] = {
  {
    "motor_control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__MotorControlArray, motor_control),  // bytes offset in struct
    NULL,  // default value
    MotorControlArray__rosidl_typesupport_introspection_c__size_function__MotorControlCmd__motor_control,  // size() function pointer
    MotorControlArray__rosidl_typesupport_introspection_c__get_const_function__MotorControlCmd__motor_control,  // get_const(index) function pointer
    MotorControlArray__rosidl_typesupport_introspection_c__get_function__MotorControlCmd__motor_control,  // get(index) function pointer
    MotorControlArray__rosidl_typesupport_introspection_c__resize_function__MotorControlCmd__motor_control  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_message_members = {
  "common_msg__msg",  // message namespace
  "MotorControlArray",  // message name
  1,  // number of fields
  sizeof(common_msg__msg__MotorControlArray),
  MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_message_member_array,  // message members
  MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_message_type_support_handle = {
  0,
  &MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_common_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, MotorControlArray)() {
  MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, MotorControlCmd)();
  if (!MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_message_type_support_handle.typesupport_identifier) {
    MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MotorControlArray__rosidl_typesupport_introspection_c__MotorControlArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
