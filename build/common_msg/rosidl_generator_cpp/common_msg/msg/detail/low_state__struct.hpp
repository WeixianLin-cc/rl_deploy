// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from common_msg:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__LOW_STATE__STRUCT_HPP_
#define COMMON_MSG__MSG__DETAIL__LOW_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'motor_state_struct'
#include "common_msg/msg/detail/motor_state__struct.hpp"
// Member 'imu_state_struct'
#include "common_msg/msg/detail/imu__struct.hpp"
// Member 'bms_state_struct'
#include "common_msg/msg/detail/bms_state__struct.hpp"
// Member 'foot_senser_state_struct'
#include "common_msg/msg/detail/foot_sensor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__common_msg__msg__LowState __attribute__((deprecated))
#else
# define DEPRECATED__common_msg__msg__LowState __declspec(deprecated)
#endif

namespace common_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LowState_
{
  using Type = LowState_<ContainerAllocator>;

  explicit LowState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_state_struct(_init),
    bms_state_struct(_init),
    foot_senser_state_struct(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_state_struct.fill(common_msg::msg::MotorState_<ContainerAllocator>{_init});
    }
  }

  explicit LowState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motor_state_struct(_alloc),
    imu_state_struct(_alloc, _init),
    bms_state_struct(_alloc, _init),
    foot_senser_state_struct(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_state_struct.fill(common_msg::msg::MotorState_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _motor_state_struct_type =
    std::array<common_msg::msg::MotorState_<ContainerAllocator>, 30>;
  _motor_state_struct_type motor_state_struct;
  using _imu_state_struct_type =
    common_msg::msg::Imu_<ContainerAllocator>;
  _imu_state_struct_type imu_state_struct;
  using _bms_state_struct_type =
    common_msg::msg::BmsState_<ContainerAllocator>;
  _bms_state_struct_type bms_state_struct;
  using _foot_senser_state_struct_type =
    common_msg::msg::FootSensor_<ContainerAllocator>;
  _foot_senser_state_struct_type foot_senser_state_struct;

  // setters for named parameter idiom
  Type & set__motor_state_struct(
    const std::array<common_msg::msg::MotorState_<ContainerAllocator>, 30> & _arg)
  {
    this->motor_state_struct = _arg;
    return *this;
  }
  Type & set__imu_state_struct(
    const common_msg::msg::Imu_<ContainerAllocator> & _arg)
  {
    this->imu_state_struct = _arg;
    return *this;
  }
  Type & set__bms_state_struct(
    const common_msg::msg::BmsState_<ContainerAllocator> & _arg)
  {
    this->bms_state_struct = _arg;
    return *this;
  }
  Type & set__foot_senser_state_struct(
    const common_msg::msg::FootSensor_<ContainerAllocator> & _arg)
  {
    this->foot_senser_state_struct = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_msg::msg::LowState_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_msg::msg::LowState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_msg::msg::LowState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_msg::msg::LowState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::LowState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::LowState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::LowState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::LowState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_msg::msg::LowState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_msg::msg::LowState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_msg__msg__LowState
    std::shared_ptr<common_msg::msg::LowState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_msg__msg__LowState
    std::shared_ptr<common_msg::msg::LowState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LowState_ & other) const
  {
    if (this->motor_state_struct != other.motor_state_struct) {
      return false;
    }
    if (this->imu_state_struct != other.imu_state_struct) {
      return false;
    }
    if (this->bms_state_struct != other.bms_state_struct) {
      return false;
    }
    if (this->foot_senser_state_struct != other.foot_senser_state_struct) {
      return false;
    }
    return true;
  }
  bool operator!=(const LowState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LowState_

// alias to use template instance with default allocator
using LowState =
  common_msg::msg::LowState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__LOW_STATE__STRUCT_HPP_
