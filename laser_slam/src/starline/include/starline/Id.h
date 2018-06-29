/* Auto-generated by genmsg_cpp for file /home/gavin/ros_ws/stargazer/msg/Id.msg */
#ifndef STARGAZER_MESSAGE_ID_H
#define STARGAZER_MESSAGE_ID_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace stargazer
{
template <class ContainerAllocator>
struct Id_ {
  typedef Id_<ContainerAllocator> Type;

  Id_()
  : id(0)
  , th(0.0)
  , x(0.0)
  , y(0.0)
  , z(0.0)
  {
  }

  Id_(const ContainerAllocator& _alloc)
  : id(0)
  , th(0.0)
  , x(0.0)
  , y(0.0)
  , z(0.0)
  {
  }

  typedef int64_t _id_type;
  int64_t id;

  typedef double _th_type;
  double th;

  typedef double _x_type;
  double x;

  typedef double _y_type;
  double y;

  typedef double _z_type;
  double z;


  typedef boost::shared_ptr< ::stargazer::Id_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stargazer::Id_<ContainerAllocator>  const> ConstPtr;
}; // struct Id
typedef  ::stargazer::Id_<std::allocator<void> > Id;

typedef boost::shared_ptr< ::stargazer::Id> IdPtr;
typedef boost::shared_ptr< ::stargazer::Id const> IdConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::stargazer::Id_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::stargazer::Id_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace stargazer

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::stargazer::Id_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::stargazer::Id_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::stargazer::Id_<ContainerAllocator> > {
  static const char* value() 
  {
    return "de4685357faae67f888f4b9ee86cad07";
  }

  static const char* value(const  ::stargazer::Id_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xde4685357faae67fULL;
  static const uint64_t static_value2 = 0x888f4b9ee86cad07ULL;
};

template<class ContainerAllocator>
struct DataType< ::stargazer::Id_<ContainerAllocator> > {
  static const char* value() 
  {
    return "stargazer/Id";
  }

  static const char* value(const  ::stargazer::Id_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::stargazer::Id_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int64 id\n\
float64 th\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::stargazer::Id_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::stargazer::Id_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::stargazer::Id_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.id);
    stream.next(m.th);
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.z);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Id_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stargazer::Id_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::stargazer::Id_<ContainerAllocator> & v) 
  {
    s << indent << "id: ";
    Printer<int64_t>::stream(s, indent + "  ", v.id);
    s << indent << "th: ";
    Printer<double>::stream(s, indent + "  ", v.th);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
  }
};


} // namespace message_operations
} // namespace ros

#endif // STARGAZER_MESSAGE_ID_H

