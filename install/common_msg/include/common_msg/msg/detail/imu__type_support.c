// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from common_msg:msg/Imu.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "common_msg/msg/detail/imu__rosidl_typesupport_introspection_c.h"
#include "common_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "common_msg/msg/detail/imu__functions.h"
#include "common_msg/msg/detail/imu__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Imu__rosidl_typesupport_introspection_c__Imu_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  common_msg__msg__Imu__init(message_memory);
}

void Imu__rosidl_typesupport_introspection_c__Imu_fini_function(void * message_memory)
{
  common_msg__msg__Imu__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Imu__rosidl_typesupport_introspection_c__Imu_message_member_array[4] = {
  {
    "quaternion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__Imu, quaternion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyroscope",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__Imu, gyroscope),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accelerometer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__Imu, accelerometer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rpy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__Imu, rpy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Imu__rosidl_typesupport_introspection_c__Imu_message_members = {
  "common_msg__msg",  // message namespace
  "Imu",  // message name
  4,  // number of fields
  sizeof(common_msg__msg__Imu),
  Imu__rosidl_typesupport_introspection_c__Imu_message_member_array,  // message members
  Imu__rosidl_typesupport_introspection_c__Imu_init_function,  // function to initialize message memory (memory has to be allocated)
  Imu__rosidl_typesupport_introspection_c__Imu_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle = {
  0,
  &Imu__rosidl_typesupport_introspection_c__Imu_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_common_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, Imu)() {
  if (!Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle.typesupport_identifier) {
    Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Imu__rosidl_typesupport_introspection_c__Imu_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
