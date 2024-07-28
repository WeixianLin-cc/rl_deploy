// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from common_msg:msg/BmsState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "common_msg/msg/detail/bms_state__rosidl_typesupport_introspection_c.h"
#include "common_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "common_msg/msg/detail/bms_state__functions.h"
#include "common_msg/msg/detail/bms_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BmsState__rosidl_typesupport_introspection_c__BmsState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  common_msg__msg__BmsState__init(message_memory);
}

void BmsState__rosidl_typesupport_introspection_c__BmsState_fini_function(void * message_memory)
{
  common_msg__msg__BmsState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BmsState__rosidl_typesupport_introspection_c__BmsState_message_member_array[7] = {
  {
    "voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__BmsState, voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__BmsState, current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "soc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__BmsState, soc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remain_capacity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__BmsState, remain_capacity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_cell_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__BmsState, max_cell_temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__BmsState, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__BmsState, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BmsState__rosidl_typesupport_introspection_c__BmsState_message_members = {
  "common_msg__msg",  // message namespace
  "BmsState",  // message name
  7,  // number of fields
  sizeof(common_msg__msg__BmsState),
  BmsState__rosidl_typesupport_introspection_c__BmsState_message_member_array,  // message members
  BmsState__rosidl_typesupport_introspection_c__BmsState_init_function,  // function to initialize message memory (memory has to be allocated)
  BmsState__rosidl_typesupport_introspection_c__BmsState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BmsState__rosidl_typesupport_introspection_c__BmsState_message_type_support_handle = {
  0,
  &BmsState__rosidl_typesupport_introspection_c__BmsState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_common_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, BmsState)() {
  if (!BmsState__rosidl_typesupport_introspection_c__BmsState_message_type_support_handle.typesupport_identifier) {
    BmsState__rosidl_typesupport_introspection_c__BmsState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BmsState__rosidl_typesupport_introspection_c__BmsState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
