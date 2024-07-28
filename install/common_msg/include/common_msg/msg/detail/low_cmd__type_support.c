// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from common_msg:msg/LowCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "common_msg/msg/detail/low_cmd__rosidl_typesupport_introspection_c.h"
#include "common_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "common_msg/msg/detail/low_cmd__functions.h"
#include "common_msg/msg/detail/low_cmd__struct.h"


// Include directives for member types
// Member `motor_cmd`
#include "common_msg/msg/motor_cmd.h"
// Member `motor_cmd`
#include "common_msg/msg/detail/motor_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LowCmd__rosidl_typesupport_introspection_c__LowCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  common_msg__msg__LowCmd__init(message_memory);
}

void LowCmd__rosidl_typesupport_introspection_c__LowCmd_fini_function(void * message_memory)
{
  common_msg__msg__LowCmd__fini(message_memory);
}

size_t LowCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__motor_cmd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 30;
}

const void * LowCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__motor_cmd(
  const void * untyped_member, size_t index)
{
  const common_msg__msg__MotorCmd ** member =
    (const common_msg__msg__MotorCmd **)(untyped_member);
  return &(*member)[index];
}

void * LowCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__motor_cmd(
  void * untyped_member, size_t index)
{
  common_msg__msg__MotorCmd ** member =
    (common_msg__msg__MotorCmd **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_member_array[1] = {
  {
    "motor_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    30,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__LowCmd, motor_cmd),  // bytes offset in struct
    NULL,  // default value
    LowCmd__rosidl_typesupport_introspection_c__size_function__MotorCmd__motor_cmd,  // size() function pointer
    LowCmd__rosidl_typesupport_introspection_c__get_const_function__MotorCmd__motor_cmd,  // get_const(index) function pointer
    LowCmd__rosidl_typesupport_introspection_c__get_function__MotorCmd__motor_cmd,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_members = {
  "common_msg__msg",  // message namespace
  "LowCmd",  // message name
  1,  // number of fields
  sizeof(common_msg__msg__LowCmd),
  LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_member_array,  // message members
  LowCmd__rosidl_typesupport_introspection_c__LowCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  LowCmd__rosidl_typesupport_introspection_c__LowCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle = {
  0,
  &LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_common_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, LowCmd)() {
  LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, MotorCmd)();
  if (!LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle.typesupport_identifier) {
    LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LowCmd__rosidl_typesupport_introspection_c__LowCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
