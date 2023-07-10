// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:msg/LandmarkList.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_LIST__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'landmarks'
#include "cartographer_ros_msgs/msg/detail/landmark_entry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__msg__LandmarkList __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__msg__LandmarkList __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LandmarkList_
{
  using Type = LandmarkList_<ContainerAllocator>;

  explicit LandmarkList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit LandmarkList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _landmarks_type =
    std::vector<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator>>>;
  _landmarks_type landmarks;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__landmarks(
    const std::vector<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator>>> & _arg)
  {
    this->landmarks = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__msg__LandmarkList
    std::shared_ptr<cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__msg__LandmarkList
    std::shared_ptr<cartographer_ros_msgs::msg::LandmarkList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandmarkList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->landmarks != other.landmarks) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandmarkList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandmarkList_

// alias to use template instance with default allocator
using LandmarkList =
  cartographer_ros_msgs::msg::LandmarkList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_LIST__STRUCT_HPP_
