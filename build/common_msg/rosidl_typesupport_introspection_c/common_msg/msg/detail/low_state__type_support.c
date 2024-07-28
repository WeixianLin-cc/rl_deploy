// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from common_msg:msg/LowState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "common_msg/msg/detail/low_state__rosidl_typesupport_introspection_c.h"
#include "common_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "common_msg/msg/detail/low_state__functions.h"
#include "common_msg/msg/detail/low_state__struct.h"


// Include directives for member types
// Member `motor_state_struct`
#include "common_msg/msg/motor_state.h"
// Member `motor_state_struct`
#include "common_msg/msg/detail/motor_state__rosidl_typesupport_introspection_c.h"
// Member `imu_state_struct`
#include "common_msg/msg/imu.h"
// Member `imu_state_struct`
#include "common_msg/msg/detail/imu__rosidl_typesupport_introspection_c.h"
// Member `bms_state_struct`
#include "common_msg/msg/bms_state.h"
// Member `bms_state_struct`
#include "common_msg/msg/detail/bms_state__rosidl_typesupport_introspection_c.h"
// Member `foot_senser_state_struct`
#include "common_msg/msg/foot_sensor.h"
// Member `foot_senser_state_struct`
#include "common_msg/msg/detail/foot_sensor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LowState__rosidl_typesupport_introspection_c__LowState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  common_msg__msg__LowState__init(message_memory);
}

void LowState__rosidl_typesupport_introspection_c__LowState_fini_function(void * message_memory)
{
  common_msg__msg__LowState__fini(message_memory);
}

size_t LowState__rosidl_typesupport_introspection_c__size_function__MotorState__motor_state_struct(
  const void * untyped_member)
{
  (void)untyped_member;
  return 30;
}

const void * LowState__rosidl_typesupport_introspection_c__get_const_function__MotorState__motor_state_struct(
  const void * untyped_member, size_t index)
{
  const common_msg__msg__MotorState ** member =
    (const common_msg__msg__MotorState **)(untyped_member);
  return &(*member)[index];
}

void * LowState__rosidl_typesupport_introspection_c__get_function__MotorState__motor_state_struct(
  void * untyped_member, size_t index)
{
  common_msg__msg__MotorState ** member =
    (common_msg__msg__MotorState **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[4] = {
  {
    "motor_state_struct",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    30,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__LowState, motor_state_struct),  // bytes offset in struct
    NULL,  // default value
    LowState__rosidl_typesupport_introspection_c__size_function__MotorState__motor_state_struct,  // size() function pointer
    LowState__rosidl_typesupport_introspection_c__get_const_function__MotorState__motor_state_struct,  // get_const(index) function pointer
    LowState__rosidl_typesupport_introspection_c__get_function__MotorState__motor_state_struct,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_state_struct",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__LowState, imu_state_struct),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bms_state_struct",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__LowState, bms_state_struct),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "foot_senser_state_struct",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(common_msg__msg__LowState, foot_senser_state_struct),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LowState__rosidl_typesupport_introspection_c__LowState_message_members = {
  "common_msg__msg",  // message namespace
  "LowState",  // message name
  4,  // number of fields
  sizeof(common_msg__msg__LowState),
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array,  // message members
  LowState__rosidl_typesupport_introspection_c__LowState_init_function,  // function to initialize message memory (memory has to be allocated)
  LowState__rosidl_typesupport_introspection_c__LowState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle = {
  0,
  &LowState__rosidl_typesupport_introspection_c__LowState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_common_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, LowState)() {
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, MotorState)();
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, Imu)();
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, BmsState)();
  LowState__rosidl_typesupport_introspection_c__LowState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, FootSensor)();
  if (!LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle.typesupport_identifier) {
    LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LowState__rosidl_typesupport_introspection_c__LowState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
