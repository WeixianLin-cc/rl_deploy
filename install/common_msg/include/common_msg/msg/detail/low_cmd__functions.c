// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from common_msg:msg/LowCmd.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/low_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motor_cmd`
#include "common_msg/msg/detail/motor_cmd__functions.h"

bool
common_msg__msg__LowCmd__init(common_msg__msg__LowCmd * msg)
{
  if (!msg) {
    return false;
  }
  // motor_cmd
  for (size_t i = 0; i < 30; ++i) {
    if (!common_msg__msg__MotorCmd__init(&msg->motor_cmd[i])) {
      common_msg__msg__LowCmd__fini(msg);
      return false;
    }
  }
  return true;
}

void
common_msg__msg__LowCmd__fini(common_msg__msg__LowCmd * msg)
{
  if (!msg) {
    return;
  }
  // motor_cmd
  for (size_t i = 0; i < 30; ++i) {
    common_msg__msg__MotorCmd__fini(&msg->motor_cmd[i]);
  }
}

bool
common_msg__msg__LowCmd__are_equal(const common_msg__msg__LowCmd * lhs, const common_msg__msg__LowCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_cmd
  for (size_t i = 0; i < 30; ++i) {
    if (!common_msg__msg__MotorCmd__are_equal(
        &(lhs->motor_cmd[i]), &(rhs->motor_cmd[i])))
    {
      return false;
    }
  }
  return true;
}

bool
common_msg__msg__LowCmd__copy(
  const common_msg__msg__LowCmd * input,
  common_msg__msg__LowCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_cmd
  for (size_t i = 0; i < 30; ++i) {
    if (!common_msg__msg__MotorCmd__copy(
        &(input->motor_cmd[i]), &(output->motor_cmd[i])))
    {
      return false;
    }
  }
  return true;
}

common_msg__msg__LowCmd *
common_msg__msg__LowCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__LowCmd * msg = (common_msg__msg__LowCmd *)allocator.allocate(sizeof(common_msg__msg__LowCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(common_msg__msg__LowCmd));
  bool success = common_msg__msg__LowCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
common_msg__msg__LowCmd__destroy(common_msg__msg__LowCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    common_msg__msg__LowCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
common_msg__msg__LowCmd__Sequence__init(common_msg__msg__LowCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__LowCmd * data = NULL;

  if (size) {
    data = (common_msg__msg__LowCmd *)allocator.zero_allocate(size, sizeof(common_msg__msg__LowCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = common_msg__msg__LowCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        common_msg__msg__LowCmd__fini(&data[i - 1]);
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
common_msg__msg__LowCmd__Sequence__fini(common_msg__msg__LowCmd__Sequence * array)
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
      common_msg__msg__LowCmd__fini(&array->data[i]);
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

common_msg__msg__LowCmd__Sequence *
common_msg__msg__LowCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__LowCmd__Sequence * array = (common_msg__msg__LowCmd__Sequence *)allocator.allocate(sizeof(common_msg__msg__LowCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = common_msg__msg__LowCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
common_msg__msg__LowCmd__Sequence__destroy(common_msg__msg__LowCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    common_msg__msg__LowCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
common_msg__msg__LowCmd__Sequence__are_equal(const common_msg__msg__LowCmd__Sequence * lhs, const common_msg__msg__LowCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!common_msg__msg__LowCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
common_msg__msg__LowCmd__Sequence__copy(
  const common_msg__msg__LowCmd__Sequence * input,
  common_msg__msg__LowCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(common_msg__msg__LowCmd);
    common_msg__msg__LowCmd * data =
      (common_msg__msg__LowCmd *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!common_msg__msg__LowCmd__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          common_msg__msg__LowCmd__fini(&data[i]);
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
    if (!common_msg__msg__LowCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
