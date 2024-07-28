// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from common_msg:msg/FootSensor.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__STRUCT_HPP_
#define COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__common_msg__msg__FootSensor __attribute__((deprecated))
#else
# define DEPRECATED__common_msg__msg__FootSensor __declspec(deprecated)
#endif

namespace common_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FootSensor_
{
  using Type = FootSensor_<ContainerAllocator>;

  explicit FootSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 18>::iterator, float>(this->left_foot_sensor.begin(), this->left_foot_sensor.end(), 0.0f);
      std::fill<typename std::array<float, 18>::iterator, float>(this->right_foot_sensor.begin(), this->right_foot_sensor.end(), 0.0f);
    }
  }

  explicit FootSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_foot_sensor(_alloc),
    right_foot_sensor(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 18>::iterator, float>(this->left_foot_sensor.begin(), this->left_foot_sensor.end(), 0.0f);
      std::fill<typename std::array<float, 18>::iterator, float>(this->right_foot_sensor.begin(), this->right_foot_sensor.end(), 0.0f);
    }
  }

  // field types and members
  using _left_foot_sensor_type =
    std::array<float, 18>;
  _left_foot_sensor_type left_foot_sensor;
  using _right_foot_sensor_type =
    std::array<float, 18>;
  _right_foot_sensor_type right_foot_sensor;

  // setters for named parameter idiom
  Type & set__left_foot_sensor(
    const std::array<float, 18> & _arg)
  {
    this->left_foot_sensor = _arg;
    return *this;
  }
  Type & set__right_foot_sensor(
    const std::array<float, 18> & _arg)
  {
    this->right_foot_sensor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_msg::msg::FootSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_msg::msg::FootSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_msg::msg::FootSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_msg::msg::FootSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::FootSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::FootSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::FootSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::FootSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_msg::msg::FootSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_msg::msg::FootSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_msg__msg__FootSensor
    std::shared_ptr<common_msg::msg::FootSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_msg__msg__FootSensor
    std::shared_ptr<common_msg::msg::FootSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FootSensor_ & other) const
  {
    if (this->left_foot_sensor != other.left_foot_sensor) {
      return false;
    }
    if (this->right_foot_sensor != other.right_foot_sensor) {
      return false;
    }
    return true;
  }
  bool operator!=(const FootSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FootSensor_

// alias to use template instance with default allocator
using FootSensor =
  common_msg::msg::FootSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__FOOT_SENSOR__STRUCT_HPP_
