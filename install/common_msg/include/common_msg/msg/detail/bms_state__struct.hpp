// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from common_msg:msg/BmsState.idl
// generated code does not contain a copyright notice

#ifndef COMMON_MSG__MSG__DETAIL__BMS_STATE__STRUCT_HPP_
#define COMMON_MSG__MSG__DETAIL__BMS_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__common_msg__msg__BmsState __attribute__((deprecated))
#else
# define DEPRECATED__common_msg__msg__BmsState __declspec(deprecated)
#endif

namespace common_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BmsState_
{
  using Type = BmsState_<ContainerAllocator>;

  explicit BmsState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->soc = 0.0f;
      this->remain_capacity = 0.0f;
      this->max_cell_temperature = 0.0f;
      this->status = 0;
      this->error_code = 0ull;
    }
  }

  explicit BmsState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->current = 0.0f;
      this->soc = 0.0f;
      this->remain_capacity = 0.0f;
      this->max_cell_temperature = 0.0f;
      this->status = 0;
      this->error_code = 0ull;
    }
  }

  // field types and members
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _current_type =
    float;
  _current_type current;
  using _soc_type =
    float;
  _soc_type soc;
  using _remain_capacity_type =
    float;
  _remain_capacity_type remain_capacity;
  using _max_cell_temperature_type =
    float;
  _max_cell_temperature_type max_cell_temperature;
  using _status_type =
    uint8_t;
  _status_type status;
  using _error_code_type =
    uint64_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__soc(
    const float & _arg)
  {
    this->soc = _arg;
    return *this;
  }
  Type & set__remain_capacity(
    const float & _arg)
  {
    this->remain_capacity = _arg;
    return *this;
  }
  Type & set__max_cell_temperature(
    const float & _arg)
  {
    this->max_cell_temperature = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint64_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    common_msg::msg::BmsState_<ContainerAllocator> *;
  using ConstRawPtr =
    const common_msg::msg::BmsState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<common_msg::msg::BmsState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<common_msg::msg::BmsState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::BmsState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::BmsState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      common_msg::msg::BmsState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<common_msg::msg::BmsState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<common_msg::msg::BmsState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<common_msg::msg::BmsState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__common_msg__msg__BmsState
    std::shared_ptr<common_msg::msg::BmsState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__common_msg__msg__BmsState
    std::shared_ptr<common_msg::msg::BmsState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BmsState_ & other) const
  {
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->soc != other.soc) {
      return false;
    }
    if (this->remain_capacity != other.remain_capacity) {
      return false;
    }
    if (this->max_cell_temperature != other.max_cell_temperature) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const BmsState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BmsState_

// alias to use template instance with default allocator
using BmsState =
  common_msg::msg::BmsState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace common_msg

#endif  // COMMON_MSG__MSG__DETAIL__BMS_STATE__STRUCT_HPP_
