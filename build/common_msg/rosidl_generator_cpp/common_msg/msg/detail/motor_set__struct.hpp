// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from common_msg:msg/MotorSet.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_SET__STRUCT_HPP_
#define COMMON_MSG__MSG__DETAIL__MOTOR_SET__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__common_msg__msg__MotorSet __attribute__((deprecated))
#else
# define DEPRECATED__common_msg__msg__MotorSet __declspec(deprecated)
#endif

namespace common_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorSet_
{
  using Type = MotorSet_<ContainerAllocator>;

  explicit MotorSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slave = 0;
      this->motor_id = 0;
      this->mode = 0;
    }
  }

  explicit MotorSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slave = 0;
      this->motor_id = 0;
      this->mode = 0;
    }
  }

  // field types and members
  using _slave_type =
    uint8_t;
  _slave_type slave;
  using _motor_id_type =
    uint16_t;
  _motor_id_type motor_id;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__slave(
    const uint8_t & _arg)
  {
    this->slave = _arg;
    return *this;
  }
  Type & set__motor_id(
    const uint16_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_msg::msg::MotorSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_msg::msg::MotorSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_msg::msg::MotorSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_msg::msg::MotorSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::MotorSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::MotorSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::MotorSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::MotorSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_msg::msg::MotorSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_msg::msg::MotorSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_msg__msg__MotorSet
    std::shared_ptr<common_msg::msg::MotorSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_msg__msg__MotorSet
    std::shared_ptr<common_msg::msg::MotorSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorSet_ & other) const
  {
    if (this->slave != other.slave) {
      return false;
    }
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorSet_

// alias to use template instance with default allocator
using MotorSet =
  common_msg::msg::MotorSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_SET__STRUCT_HPP_
