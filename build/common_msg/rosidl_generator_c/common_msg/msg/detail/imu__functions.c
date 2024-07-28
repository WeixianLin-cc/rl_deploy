// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from common_msg:msg/Imu.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/imu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
common_msg__msg__Imu__init(common_msg__msg__Imu * msg)
{
  if (!msg) {
    return false;
  }
  // quaternion
  // gyroscope
  // accelerometer
  // rpy
  return true;
}

void
common_msg__msg__Imu__fini(common_msg__msg__Imu * msg)
{
  if (!msg) {
    return;
  }
  // quaternion
  // gyroscope
  // accelerometer
  // rpy
}

bool
common_msg__msg__Imu__are_equal(const common_msg__msg__Imu * lhs, const common_msg__msg__Imu * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // quaternion
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->quaternion[i] != rhs->quaternion[i]) {
      return false;
    }
  }
  // gyroscope
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->gyroscope[i] != rhs->gyroscope[i]) {
      return false;
    }
  }
  // accelerometer
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->accelerometer[i] != rhs->accelerometer[i]) {
      return false;
    }
  }
  // rpy
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->rpy[i] != rhs->rpy[i]) {
      return false;
    }
  }
  return true;
}

bool
common_msg__msg__Imu__copy(
  const common_msg__msg__Imu * input,
  common_msg__msg__Imu * output)
{
  if (!input || !output) {
    return false;
  }
  // quaternion
  for (size_t i = 0; i < 4; ++i) {
    output->quaternion[i] = input->quaternion[i];
  }
  // gyroscope
  for (size_t i = 0; i < 3; ++i) {
    output->gyroscope[i] = input->gyroscope[i];
  }
  // accelerometer
  for (size_t i = 0; i < 3; ++i) {
    output->accelerometer[i] = input->accelerometer[i];
  }
  // rpy
  for (size_t i = 0; i < 3; ++i) {
    output->rpy[i] = input->rpy[i];
  }
  return true;
}

common_msg__msg__Imu *
common_msg__msg__Imu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__Imu * msg = (common_msg__msg__Imu *)allocator.allocate(sizeof(common_msg__msg__Imu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(common_msg__msg__Imu));
  bool success = common_msg__msg__Imu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
common_msg__msg__Imu__destroy(common_msg__msg__Imu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    common_msg__msg__Imu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
common_msg__msg__Imu__Sequence__init(common_msg__msg__Imu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__Imu * data = NULL;

  if (size) {
    data = (common_msg__msg__Imu *)allocator.zero_allocate(size, sizeof(common_msg__msg__Imu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = common_msg__msg__Imu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        common_msg__msg__Imu__fini(&data[i - 1]);
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
common_msg__msg__Imu__Sequence__fini(common_msg__msg__Imu__Sequence * array)
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
      common_msg__msg__Imu__fini(&array->data[i]);
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

common_msg__msg__Imu__Sequence *
common_msg__msg__Imu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__Imu__Sequence * array = (common_msg__msg__Imu__Sequence *)allocator.allocate(sizeof(common_msg__msg__Imu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = common_msg__msg__Imu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
common_msg__msg__Imu__Sequence__destroy(common_msg__msg__Imu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    common_msg__msg__Imu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
common_msg__msg__Imu__Sequence__are_equal(const common_msg__msg__Imu__Sequence * lhs, const common_msg__msg__Imu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!common_msg__msg__Imu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
common_msg__msg__Imu__Sequence__copy(
  const common_msg__msg__Imu__Sequence * input,
  common_msg__msg__Imu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(common_msg__msg__Imu);
    common_msg__msg__Imu * data =
      (common_msg__msg__Imu *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!common_msg__msg__Imu__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          common_msg__msg__Imu__fini(&data[i]);
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
    if (!common_msg__msg__Imu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
