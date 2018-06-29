// Generated by gencpp from file robot_state_keeper/RegisterStateRequest.msg
// DO NOT EDIT!


#ifndef ROBOT_STATE_KEEPER_MESSAGE_REGISTERSTATEREQUEST_H
#define ROBOT_STATE_KEEPER_MESSAGE_REGISTERSTATEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <robot_state_keeper/robot_state.h>

namespace robot_state_keeper
{
template <class ContainerAllocator>
struct RegisterStateRequest_
{
  typedef RegisterStateRequest_<ContainerAllocator> Type;

  RegisterStateRequest_()
    : state()  {
    }
  RegisterStateRequest_(const ContainerAllocator& _alloc)
    : state(_alloc)  {
  (void)_alloc;
    }



   typedef  ::robot_state_keeper::robot_state_<ContainerAllocator>  _state_type;
  _state_type state;




  typedef boost::shared_ptr< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RegisterStateRequest_

typedef ::robot_state_keeper::RegisterStateRequest_<std::allocator<void> > RegisterStateRequest;

typedef boost::shared_ptr< ::robot_state_keeper::RegisterStateRequest > RegisterStateRequestPtr;
typedef boost::shared_ptr< ::robot_state_keeper::RegisterStateRequest const> RegisterStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_state_keeper

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'robot_state_keeper': ['/home/paul/newcode/catkin_ws/src/robot_state_keeper/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d753131f2424b65c4c076a0da235401a";
  }

  static const char* value(const ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd753131f2424b65cULL;
  static const uint64_t static_value2 = 0x4c076a0da235401aULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_state_keeper/RegisterStateRequest";
  }

  static const char* value(const ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_state state\n\
\n\
\n\
================================================================================\n\
MSG: robot_state_keeper/robot_state\n\
uint32 enabled\n\
uint32 error_code\n\
string name\n\
string info\n\
\n\
";
  }

  static const char* value(const ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RegisterStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_state_keeper::RegisterStateRequest_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    s << std::endl;
    Printer< ::robot_state_keeper::robot_state_<ContainerAllocator> >::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_STATE_KEEPER_MESSAGE_REGISTERSTATEREQUEST_H
