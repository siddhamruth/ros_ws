// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bat_led_interfaces:msg/LedStateArray.idl
// generated code does not contain a copyright notice

#ifndef BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__STRUCT_HPP_
#define BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__bat_led_interfaces__msg__LedStateArray __attribute__((deprecated))
#else
# define DEPRECATED__bat_led_interfaces__msg__LedStateArray __declspec(deprecated)
#endif

namespace bat_led_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedStateArray_
{
  using Type = LedStateArray_<ContainerAllocator>;

  explicit LedStateArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int64_t, 3>::iterator, int64_t>(this->led_states.begin(), this->led_states.end(), 0ll);
    }
  }

  explicit LedStateArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : led_states(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<int64_t, 3>::iterator, int64_t>(this->led_states.begin(), this->led_states.end(), 0ll);
    }
  }

  // field types and members
  using _led_states_type =
    std::array<int64_t, 3>;
  _led_states_type led_states;

  // setters for named parameter idiom
  Type & set__led_states(
    const std::array<int64_t, 3> & _arg)
  {
    this->led_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bat_led_interfaces::msg::LedStateArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const bat_led_interfaces::msg::LedStateArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bat_led_interfaces::msg::LedStateArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bat_led_interfaces::msg::LedStateArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bat_led_interfaces::msg::LedStateArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bat_led_interfaces::msg::LedStateArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bat_led_interfaces::msg::LedStateArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bat_led_interfaces::msg::LedStateArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bat_led_interfaces::msg::LedStateArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bat_led_interfaces::msg::LedStateArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bat_led_interfaces__msg__LedStateArray
    std::shared_ptr<bat_led_interfaces::msg::LedStateArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bat_led_interfaces__msg__LedStateArray
    std::shared_ptr<bat_led_interfaces::msg::LedStateArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedStateArray_ & other) const
  {
    if (this->led_states != other.led_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedStateArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedStateArray_

// alias to use template instance with default allocator
using LedStateArray =
  bat_led_interfaces::msg::LedStateArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bat_led_interfaces

#endif  // BAT_LED_INTERFACES__MSG__DETAIL__LED_STATE_ARRAY__STRUCT_HPP_