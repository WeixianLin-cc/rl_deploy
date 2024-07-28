// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from common_msg:msg/FootSensor.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__FUNCTIONS_H_
#define COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "common_msg/msg/rosidl_generator_c__visibility_control.h"

#include "common_msg/msg/detail/foot_sensor__struct.h"

/// Initialize msg/FootSensor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * common_msg__msg__FootSensor
 * )) before or use
 * common_msg__msg__FootSensor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
bool
common_msg__msg__FootSensor__init(common_msg__msg__FootSensor * msg);

/// Finalize msg/FootSensor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
void
common_msg__msg__FootSensor__fini(common_msg__msg__FootSensor * msg);

/// Create msg/FootSensor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * common_msg__msg__FootSensor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
common_msg__msg__FootSensor *
common_msg__msg__FootSensor__create();

/// Destroy msg/FootSensor message.
/**
 * It calls
 * common_msg__msg__FootSensor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
void
common_msg__msg__FootSensor__destroy(common_msg__msg__FootSensor * msg);

/// Check for msg/FootSensor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
bool
common_msg__msg__FootSensor__are_equal(const common_msg__msg__FootSensor * lhs, const common_msg__msg__FootSensor * rhs);

/// Copy a msg/FootSensor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
bool
common_msg__msg__FootSensor__copy(
  const common_msg__msg__FootSensor * input,
  common_msg__msg__FootSensor * output);

/// Initialize array of msg/FootSensor messages.
/**
 * It allocates the memory for the number of elements and calls
 * common_msg__msg__FootSensor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
bool
common_msg__msg__FootSensor__Sequence__init(common_msg__msg__FootSensor__Sequence * array, size_t size);

/// Finalize array of msg/FootSensor messages.
/**
 * It calls
 * common_msg__msg__FootSensor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
void
common_msg__msg__FootSensor__Sequence__fini(common_msg__msg__FootSensor__Sequence * array);

/// Create array of msg/FootSensor messages.
/**
 * It allocates the memory for the array and calls
 * common_msg__msg__FootSensor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
common_msg__msg__FootSensor__Sequence *
common_msg__msg__FootSensor__Sequence__create(size_t size);

/// Destroy array of msg/FootSensor messages.
/**
 * It calls
 * common_msg__msg__FootSensor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
void
common_msg__msg__FootSensor__Sequence__destroy(common_msg__msg__FootSensor__Sequence * array);

/// Check for msg/FootSensor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
bool
common_msg__msg__FootSensor__Sequence__are_equal(const common_msg__msg__FootSensor__Sequence * lhs, const common_msg__msg__FootSensor__Sequence * rhs);

/// Copy an array of msg/FootSensor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_common_msg
bool
common_msg__msg__FootSensor__Sequence__copy(
  const common_msg__msg__FootSensor__Sequence * input,
  common_msg__msg__FootSensor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__FUNCTIONS_H_
