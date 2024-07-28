// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from common_msg:msg/LowState.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/low_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motor_state_struct`
#include "common_msg/msg/detail/motor_state__functions.h"
// Member `imu_state_struct`
#include "common_msg/msg/detail/imu__functions.h"
// Member `bms_state_struct`
#include "common_msg/msg/detail/bms_state__functions.h"
// Member `foot_senser_state_struct`
#include "common_msg/msg/detail/foot_sensor__functions.h"

bool
common_msg__msg__LowState__init(common_msg__msg__LowState * msg)
{
  if (!msg) {
    return false;
  }
  // motor_state_struct
  for (size_t i = 0; i < 30; ++i) {
    if (!common_msg__msg__MotorState__init(&msg->motor_state_struct[i])) {
      common_msg__msg__LowState__fini(msg);
      return false;
    }
  }
  // imu_state_struct
  if (!common_msg__msg__Imu__init(&msg->imu_state_struct)) {
    common_msg__msg__LowState__fini(msg);
    return false;
  }
  // bms_state_struct
  if (!common_msg__msg__BmsState__init(&msg->bms_state_struct)) {
    common_msg__msg__LowState__fini(msg);
    return false;
  }
  // foot_senser_state_struct
  if (!common_msg__msg__FootSensor__init(&msg->foot_senser_state_struct)) {
    common_msg__msg__LowState__fini(msg);
    return false;
  }
  return true;
}

void
common_msg__msg__LowState__fini(common_msg__msg__LowState * msg)
{
  if (!msg) {
    return;
  }
  // motor_state_struct
  for (size_t i = 0; i < 30; ++i) {
    common_msg__msg__MotorState__fini(&msg->motor_state_struct[i]);
  }
  // imu_state_struct
  common_msg__msg__Imu__fini(&msg->imu_state_struct);
  // bms_state_struct
  common_msg__msg__BmsState__fini(&msg->bms_state_struct);
  // foot_senser_state_struct
  common_msg__msg__FootSensor__fini(&msg->foot_senser_state_struct);
}

bool
common_msg__msg__LowState__are_equal(const common_msg__msg__LowState * lhs, const common_msg__msg__LowState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_state_struct
  for (size_t i = 0; i < 30; ++i) {
    if (!common_msg__msg__MotorState__are_equal(
        &(lhs->motor_state_struct[i]), &(rhs->motor_state_struct[i])))
    {
      return false;
    }
  }
  // imu_state_struct
  if (!common_msg__msg__Imu__are_equal(
      &(lhs->imu_state_struct), &(rhs->imu_state_struct)))
  {
    return false;
  }
  // bms_state_struct
  if (!common_msg__msg__BmsState__are_equal(
      &(lhs->bms_state_struct), &(rhs->bms_state_struct)))
  {
    return false;
  }
  // foot_senser_state_struct
  if (!common_msg__msg__FootSensor__are_equal(
      &(lhs->foot_senser_state_struct), &(rhs->foot_senser_state_struct)))
  {
    return false;
  }
  return true;
}

bool
common_msg__msg__LowState__copy(
  const common_msg__msg__LowState * input,
  common_msg__msg__LowState * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_state_struct
  for (size_t i = 0; i < 30; ++i) {
    if (!common_msg__msg__MotorState__copy(
        &(input->motor_state_struct[i]), &(output->motor_state_struct[i])))
    {
      return false;
    }
  }
  // imu_state_struct
  if (!common_msg__msg__Imu__copy(
      &(input->imu_state_struct), &(output->imu_state_struct)))
  {
    return false;
  }
  // bms_state_struct
  if (!common_msg__msg__BmsState__copy(
      &(input->bms_state_struct), &(output->bms_state_struct)))
  {
    return false;
  }
  // foot_senser_state_struct
  if (!common_msg__msg__FootSensor__copy(
      &(input->foot_senser_state_struct), &(output->foot_senser_state_struct)))
  {
    return false;
  }
  return true;
}

common_msg__msg__LowState *
common_msg__msg__LowState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__LowState * msg = (common_msg__msg__LowState *)allocator.allocate(sizeof(common_msg__msg__LowState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(common_msg__msg__LowState));
  bool success = common_msg__msg__LowState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
common_msg__msg__LowState__destroy(common_msg__msg__LowState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    common_msg__msg__LowState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
common_msg__msg__LowState__Sequence__init(common_msg__msg__LowState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__LowState * data = NULL;

  if (size) {
    data = (common_msg__msg__LowState *)allocator.zero_allocate(size, sizeof(common_msg__msg__LowState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = common_msg__msg__LowState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        common_msg__msg__LowState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
common_msg__msg__LowState__Sequence__fini(common_msg__msg__LowState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      common_msg__msg__LowState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

common_msg__msg__LowState__Sequence *
common_msg__msg__LowState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__LowState__Sequence * array = (common_msg__msg__LowState__Sequence *)allocator.allocate(sizeof(common_msg__msg__LowState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = common_msg__msg__LowState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
common_msg__msg__LowState__Sequence__destroy(common_msg__msg__LowState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    common_msg__msg__LowState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
common_msg__msg__LowState__Sequence__are_equal(const common_msg__msg__LowState__Sequence * lhs, const common_msg__msg__LowState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!common_msg__msg__LowState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
common_msg__msg__LowState__Sequence__copy(
  const common_msg__msg__LowState__Sequence * input,
  common_msg__msg__LowState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(common_msg__msg__LowState);
    common_msg__msg__LowState * data =
      (common_msg__msg__LowState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!common_msg__msg__LowState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          common_msg__msg__LowState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!common_msg__msg__LowState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
