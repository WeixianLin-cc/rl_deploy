// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from common_msg:msg/MotorStateArray.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_STATE_ARRAY__STRUCT_HPP_
#define COMMON_MSG__MSG__DETAIL__MOTOR_STATE_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'motor_state'
#include "common_msg/msg/detail/motor_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__common_msg__msg__MotorStateArray __attribute__((deprecated))
#else
# define DEPRECATED__common_msg__msg__MotorStateArray __declspec(deprecated)
#endif

namespace common_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStateArray_
{
  using Type = MotorStateArray_<ContainerAllocator>;

  explicit MotorStateArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MotorStateArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _motor_state_type =
    std::vector<common_msg::msg::MotorState_<ContainerAllocator>, typename ContainerAllocator::template rebind<common_msg::msg::MotorState_<ContainerAllocator>>::other>;
  _motor_state_type motor_state;

  // setters for named parameter idiom
  Type & set__motor_state(
    const std::vector<common_msg::msg::MotorState_<ContainerAllocator>, typename ContainerAllocator::template rebind<common_msg::msg::MotorState_<ContainerAllocator>>::other> & _arg)
  {
    this->motor_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_msg::msg::MotorStateArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_msg::msg::MotorStateArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_msg::msg::MotorStateArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_msg::msg::MotorStateArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::MotorStateArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::MotorStateArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::MotorStateArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::MotorStateArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_msg::msg::MotorStateArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_msg::msg::MotorStateArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_msg__msg__MotorStateArray
    std::shared_ptr<common_msg::msg::MotorStateArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_msg__msg__MotorStateArray
    std::shared_ptr<common_msg::msg::MotorStateArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStateArray_ & other) const
  {
    if (this->motor_state != other.motor_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStateArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStateArray_

// alias to use template instance with default allocator
using MotorStateArray =
  common_msg::msg::MotorStateArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_STATE_ARRAY__STRUCT_HPP_
