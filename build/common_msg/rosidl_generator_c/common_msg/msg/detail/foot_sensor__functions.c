// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from common_msg:msg/FootSensor.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/foot_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
common_msg__msg__FootSensor__init(common_msg__msg__FootSensor * msg)
{
  if (!msg) {
    return false;
  }
  // left_foot_sensor
  // right_foot_sensor
  return true;
}

void
common_msg__msg__FootSensor__fini(common_msg__msg__FootSensor * msg)
{
  if (!msg) {
    return;
  }
  // left_foot_sensor
  // right_foot_sensor
}

bool
common_msg__msg__FootSensor__are_equal(const common_msg__msg__FootSensor * lhs, const common_msg__msg__FootSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_foot_sensor
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->left_foot_sensor[i] != rhs->left_foot_sensor[i]) {
      return false;
    }
  }
  // right_foot_sensor
  for (size_t i = 0; i < 18; ++i) {
    if (lhs->right_foot_sensor[i] != rhs->right_foot_sensor[i]) {
      return false;
    }
  }
  return true;
}

bool
common_msg__msg__FootSensor__copy(
  const common_msg__msg__FootSensor * input,
  common_msg__msg__FootSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // left_foot_sensor
  for (size_t i = 0; i < 18; ++i) {
    output->left_foot_sensor[i] = input->left_foot_sensor[i];
  }
  // right_foot_sensor
  for (size_t i = 0; i < 18; ++i) {
    output->right_foot_sensor[i] = input->right_foot_sensor[i];
  }
  return true;
}

common_msg__msg__FootSensor *
common_msg__msg__FootSensor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__FootSensor * msg = (common_msg__msg__FootSensor *)allocator.allocate(sizeof(common_msg__msg__FootSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(common_msg__msg__FootSensor));
  bool success = common_msg__msg__FootSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
common_msg__msg__FootSensor__destroy(common_msg__msg__FootSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    common_msg__msg__FootSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
common_msg__msg__FootSensor__Sequence__init(common_msg__msg__FootSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__FootSensor * data = NULL;

  if (size) {
    data = (common_msg__msg__FootSensor *)allocator.zero_allocate(size, sizeof(common_msg__msg__FootSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = common_msg__msg__FootSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        common_msg__msg__FootSensor__fini(&data[i - 1]);
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
common_msg__msg__FootSensor__Sequence__fini(common_msg__msg__FootSensor__Sequence * array)
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
      common_msg__msg__FootSensor__fini(&array->data[i]);
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

common_msg__msg__FootSensor__Sequence *
common_msg__msg__FootSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__FootSensor__Sequence * array = (common_msg__msg__FootSensor__Sequence *)allocator.allocate(sizeof(common_msg__msg__FootSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = common_msg__msg__FootSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
common_msg__msg__FootSensor__Sequence__destroy(common_msg__msg__FootSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    common_msg__msg__FootSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
common_msg__msg__FootSensor__Sequence__are_equal(const common_msg__msg__FootSensor__Sequence * lhs, const common_msg__msg__FootSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!common_msg__msg__FootSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
common_msg__msg__FootSensor__Sequence__copy(
  const common_msg__msg__FootSensor__Sequence * input,
  common_msg__msg__FootSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(common_msg__msg__FootSensor);
    common_msg__msg__FootSensor * data =
      (common_msg__msg__FootSensor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!common_msg__msg__FootSensor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          common_msg__msg__FootSensor__fini(&data[i]);
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
    if (!common_msg__msg__FootSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
