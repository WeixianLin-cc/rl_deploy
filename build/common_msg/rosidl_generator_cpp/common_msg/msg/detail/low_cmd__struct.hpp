// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from common_msg:msg/LowCmd.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__LOW_CMD__STRUCT_HPP_
#define COMMON_MSG__MSG__DETAIL__LOW_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'motor_cmd'
#include "common_msg/msg/detail/motor_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__common_msg__msg__LowCmd __attribute__((deprecated))
#else
# define DEPRECATED__common_msg__msg__LowCmd __declspec(deprecated)
#endif

namespace common_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LowCmd_
{
  using Type = LowCmd_<ContainerAllocator>;

  explicit LowCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_cmd.fill(common_msg::msg::MotorCmd_<ContainerAllocator>{_init});
    }
  }

  explicit LowCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motor_cmd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_cmd.fill(common_msg::msg::MotorCmd_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _motor_cmd_type =
    std::array<common_msg::msg::MotorCmd_<ContainerAllocator>, 30>;
  _motor_cmd_type motor_cmd;

  // setters for named parameter idiom
  Type & set__motor_cmd(
    const std::array<common_msg::msg::MotorCmd_<ContainerAllocator>, 30> & _arg)
  {
    this->motor_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_msg::msg::LowCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_msg::msg::LowCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_msg::msg::LowCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_msg::msg::LowCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::LowCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::LowCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::LowCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::LowCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_msg::msg::LowCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_msg::msg::LowCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_msg__msg__LowCmd
    std::shared_ptr<common_msg::msg::LowCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_msg__msg__LowCmd
    std::shared_ptr<common_msg::msg::LowCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LowCmd_ & other) const
  {
    if (this->motor_cmd != other.motor_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const LowCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LowCmd_

// alias to use template instance with default allocator
using LowCmd =
  common_msg::msg::LowCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__LOW_CMD__STRUCT_HPP_
