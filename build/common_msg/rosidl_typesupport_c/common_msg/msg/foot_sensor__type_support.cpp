// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from common_msg:msg/FootSensor.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "common_msg/msg/rosidl_typesupport_c__visibility_control.h"
#include "common_msg/msg/detail/foot_sensor__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace common_msg
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _FootSensor_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FootSensor_type_support_ids_t;

static const _FootSensor_type_support_ids_t _FootSensor_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FootSensor_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FootSensor_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FootSensor_type_support_symbol_names_t _FootSensor_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, common_msg, msg, FootSensor)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, common_msg, msg, FootSensor)),
  }
};

typedef struct _FootSensor_type_support_data_t
{
  void * data[2];
} _FootSensor_type_support_data_t;

static _FootSensor_type_support_data_t _FootSensor_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FootSensor_message_typesupport_map = {
  2,
  "common_msg",
  &_FootSensor_message_typesupport_ids.typesupport_identifier[0],
  &_FootSensor_message_typesupport_symbol_names.symbol_name[0],
  &_FootSensor_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FootSensor_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FootSensor_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace common_msg

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_common_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, common_msg, msg, FootSensor)() {
  return &::common_msg::msg::rosidl_typesupport_c::FootSensor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
