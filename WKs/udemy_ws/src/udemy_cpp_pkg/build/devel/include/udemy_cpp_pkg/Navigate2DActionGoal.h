// Generated by gencpp from file udemy_cpp_pkg/Navigate2DActionGoal.msg
// DO NOT EDIT!


#ifndef UDEMY_CPP_PKG_MESSAGE_NAVIGATE2DACTIONGOAL_H
#define UDEMY_CPP_PKG_MESSAGE_NAVIGATE2DACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <udemy_cpp_pkg/Navigate2DGoal.h>

namespace udemy_cpp_pkg
{
template <class ContainerAllocator>
struct Navigate2DActionGoal_
{
  typedef Navigate2DActionGoal_<ContainerAllocator> Type;

  Navigate2DActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  Navigate2DActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::udemy_cpp_pkg::Navigate2DGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct Navigate2DActionGoal_

typedef ::udemy_cpp_pkg::Navigate2DActionGoal_<std::allocator<void> > Navigate2DActionGoal;

typedef boost::shared_ptr< ::udemy_cpp_pkg::Navigate2DActionGoal > Navigate2DActionGoalPtr;
typedef boost::shared_ptr< ::udemy_cpp_pkg::Navigate2DActionGoal const> Navigate2DActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator1> & lhs, const ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator1> & lhs, const ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace udemy_cpp_pkg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "215e9c98c1bdc2bd19e1a8eb6bc51969";
  }

  static const char* value(const ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x215e9c98c1bdc2bdULL;
  static const uint64_t static_value2 = 0x19e1a8eb6bc51969ULL;
};

template<class ContainerAllocator>
struct DataType< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "udemy_cpp_pkg/Navigate2DActionGoal";
  }

  static const char* value(const ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"Navigate2DGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: udemy_cpp_pkg/Navigate2DGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Goal \n"
"geometry_msgs/Point point \n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Navigate2DActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::udemy_cpp_pkg::Navigate2DActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::udemy_cpp_pkg::Navigate2DGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UDEMY_CPP_PKG_MESSAGE_NAVIGATE2DACTIONGOAL_H
