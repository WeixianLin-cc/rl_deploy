// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from common_msg:msg/MotorControlCmd.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_CMD__STRUCT_HPP_
#define COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__common_msg__msg__MotorControlCmd __attribute__((deprecated))
#else
# define DEPRECATED__common_msg__msg__MotorControlCmd __declspec(deprecated)
#endif

namespace common_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorControlCmd_
{
  using Type = MotorControlCmd_<ContainerAllocator>;

  explicit MotorControlCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->index = 0;
      this->slave = 0;
      this->motor_id = 0;
      this->motor_id_new = 0;
      this->speed = 0.0f;
      this->current = 0.0f;
      this->position = 0.0f;
      this->tau = 0.0f;
      this->kp = 0.0f;
      this->kd = 0.0f;
    }
  }

  explicit MotorControlCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->index = 0;
      this->slave = 0;
      this->motor_id = 0;
      this->motor_id_new = 0;
      this->speed = 0.0f;
      this->current = 0.0f;
      this->position = 0.0f;
      this->tau = 0.0f;
      this->kp = 0.0f;
      this->kd = 0.0f;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _index_type =
    uint8_t;
  _index_type index;
  using _slave_type =
    uint8_t;
  _slave_type slave;
  using _motor_id_type =
    uint16_t;
  _motor_id_type motor_id;
  using _motor_id_new_type =
    uint16_t;
  _motor_id_new_type motor_id_new;
  using _speed_type =
    float;
  _speed_type speed;
  using _current_type =
    float;
  _current_type current;
  using _position_type =
    float;
  _position_type position;
  using _tau_type =
    float;
  _tau_type tau;
  using _kp_type =
    float;
  _kp_type kp;
  using _kd_type =
    float;
  _kd_type kd;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__index(
    const uint8_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
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
  Type & set__motor_id_new(
    const uint16_t & _arg)
  {
    this->motor_id_new = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__position(
    const float & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__tau(
    const float & _arg)
  {
    this->tau = _arg;
    return *this;
  }
  Type & set__kp(
    const float & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const float & _arg)
  {
    this->kd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_msg::msg::MotorControlCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_msg::msg::MotorControlCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_msg::msg::MotorControlCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_msg::msg::MotorControlCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::MotorControlCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::MotorControlCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::MotorControlCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::MotorControlCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_msg::msg::MotorControlCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_msg::msg::MotorControlCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_msg__msg__MotorControlCmd
    std::shared_ptr<common_msg::msg::MotorControlCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_msg__msg__MotorControlCmd
    std::shared_ptr<common_msg::msg::MotorControlCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorControlCmd_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->slave != other.slave) {
      return false;
    }
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->motor_id_new != other.motor_id_new) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->tau != other.tau) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorControlCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorControlCmd_

// alias to use template instance with default allocator
using MotorControlCmd =
  common_msg::msg::MotorControlCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__MOTOR_CONTROL_CMD__STRUCT_HPP_
