// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from common_msg:msg/LowState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "common_msg/msg/detail/low_state__struct.h"
#include "common_msg/msg/detail/low_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "common_msg/msg/detail/motor_state__functions.h"
// end nested array functions include
bool common_msg__msg__motor_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * common_msg__msg__motor_state__convert_to_py(void * raw_ros_message);
bool common_msg__msg__imu__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * common_msg__msg__imu__convert_to_py(void * raw_ros_message);
bool common_msg__msg__bms_state__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * common_msg__msg__bms_state__convert_to_py(void * raw_ros_message);
bool common_msg__msg__foot_sensor__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * common_msg__msg__foot_sensor__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool common_msg__msg__low_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("common_msg.msg._low_state.LowState", full_classname_dest, 34) == 0);
  }
  common_msg__msg__LowState * ros_message = _ros_message;
  {  // motor_state_struct
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_state_struct");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'motor_state_struct'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 30;
    common_msg__msg__MotorState * dest = ros_message->motor_state_struct;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!common_msg__msg__motor_state__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // imu_state_struct
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_state_struct");
    if (!field) {
      return false;
    }
    if (!common_msg__msg__imu__convert_from_py(field, &ros_message->imu_state_struct)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bms_state_struct
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_state_struct");
    if (!field) {
      return false;
    }
    if (!common_msg__msg__bms_state__convert_from_py(field, &ros_message->bms_state_struct)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // foot_senser_state_struct
    PyObject * field = PyObject_GetAttrString(_pymsg, "foot_senser_state_struct");
    if (!field) {
      return false;
    }
    if (!common_msg__msg__foot_sensor__convert_from_py(field, &ros_message->foot_senser_state_struct)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * common_msg__msg__low_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LowState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("common_msg.msg._low_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LowState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  common_msg__msg__LowState * ros_message = (common_msg__msg__LowState *)raw_ros_message;
  {  // motor_state_struct
    PyObject * field = NULL;
    size_t size = 30;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    common_msg__msg__MotorState * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->motor_state_struct[i]);
      PyObject * pyitem = common_msg__msg__motor_state__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_state_struct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_state_struct
    PyObject * field = NULL;
    field = common_msg__msg__imu__convert_to_py(&ros_message->imu_state_struct);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_state_struct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_state_struct
    PyObject * field = NULL;
    field = common_msg__msg__bms_state__convert_to_py(&ros_message->bms_state_struct);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_state_struct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // foot_senser_state_struct
    PyObject * field = NULL;
    field = common_msg__msg__foot_sensor__convert_to_py(&ros_message->foot_senser_state_struct);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "foot_senser_state_struct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
