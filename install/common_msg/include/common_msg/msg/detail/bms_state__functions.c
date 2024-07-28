// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from common_msg:msg/BmsState.idl
// generated code does not contain a copyright notice
#include "common_msg/msg/detail/bms_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
common_msg__msg__BmsState__init(common_msg__msg__BmsState * msg)
{
  if (!msg) {
    return false;
  }
  // voltage
  // current
  // soc
  // remain_capacity
  // max_cell_temperature
  // status
  // error_code
  return true;
}

void
common_msg__msg__BmsState__fini(common_msg__msg__BmsState * msg)
{
  if (!msg) {
    return;
  }
  // voltage
  // current
  // soc
  // remain_capacity
  // max_cell_temperature
  // status
  // error_code
}

bool
common_msg__msg__BmsState__are_equal(const common_msg__msg__BmsState * lhs, const common_msg__msg__BmsState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // soc
  if (lhs->soc != rhs->soc) {
    return false;
  }
  // remain_capacity
  if (lhs->remain_capacity != rhs->remain_capacity) {
    return false;
  }
  // max_cell_temperature
  if (lhs->max_cell_temperature != rhs->max_cell_temperature) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  return true;
}

bool
common_msg__msg__BmsState__copy(
  const common_msg__msg__BmsState * input,
  common_msg__msg__BmsState * output)
{
  if (!input || !output) {
    return false;
  }
  // voltage
  output->voltage = input->voltage;
  // current
  output->current = input->current;
  // soc
  output->soc = input->soc;
  // remain_capacity
  output->remain_capacity = input->remain_capacity;
  // max_cell_temperature
  output->max_cell_temperature = input->max_cell_temperature;
  // status
  output->status = input->status;
  // error_code
  output->error_code = input->error_code;
  return true;
}

common_msg__msg__BmsState *
common_msg__msg__BmsState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__BmsState * msg = (common_msg__msg__BmsState *)allocator.allocate(sizeof(common_msg__msg__BmsState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(common_msg__msg__BmsState));
  bool success = common_msg__msg__BmsState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
common_msg__msg__BmsState__destroy(common_msg__msg__BmsState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    common_msg__msg__BmsState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
common_msg__msg__BmsState__Sequence__init(common_msg__msg__BmsState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__BmsState * data = NULL;

  if (size) {
    data = (common_msg__msg__BmsState *)allocator.zero_allocate(size, sizeof(common_msg__msg__BmsState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = common_msg__msg__BmsState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        common_msg__msg__BmsState__fini(&data[i - 1]);
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
common_msg__msg__BmsState__Sequence__fini(common_msg__msg__BmsState__Sequence * array)
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
      common_msg__msg__BmsState__fini(&array->data[i]);
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

common_msg__msg__BmsState__Sequence *
common_msg__msg__BmsState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_msg__msg__BmsState__Sequence * array = (common_msg__msg__BmsState__Sequence *)allocator.allocate(sizeof(common_msg__msg__BmsState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = common_msg__msg__BmsState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
common_msg__msg__BmsState__Sequence__destroy(common_msg__msg__BmsState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    common_msg__msg__BmsState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
common_msg__msg__BmsState__Sequence__are_equal(const common_msg__msg__BmsState__Sequence * lhs, const common_msg__msg__BmsState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!common_msg__msg__BmsState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
common_msg__msg__BmsState__Sequence__copy(
  const common_msg__msg__BmsState__Sequence * input,
  common_msg__msg__BmsState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(common_msg__msg__BmsState);
    common_msg__msg__BmsState * data =
      (common_msg__msg__BmsState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!common_msg__msg__BmsState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          common_msg__msg__BmsState__fini(&data[i]);
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
    if (!common_msg__msg__BmsState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
