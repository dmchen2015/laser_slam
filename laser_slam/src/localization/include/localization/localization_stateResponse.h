// Generated by gencpp from file localization/localization_stateResponse.msg
// DO NOT EDIT!


#ifndef LOCALIZATION_MESSAGE_LOCALIZATION_STATERESPONSE_H
#define LOCALIZATION_MESSAGE_LOCALIZATION_STATERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace localization
{
template <class ContainerAllocator>
struct localization_stateResponse_
{
  typedef localization_stateResponse_<ContainerAllocator> Type;

  localization_stateResponse_()
    : state()  {
    }
  localization_stateResponse_(const ContainerAllocator& _alloc)
    : state(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  _state_type state;




  typedef boost::shared_ptr< ::localization::localization_stateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::localization::localization_stateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct localization_stateResponse_

typedef ::localization::localization_stateResponse_<std::allocator<void> > localization_stateResponse;

typedef boost::shared_ptr< ::localization::localization_stateResponse > localization_stateResponsePtr;
typedef boost::shared_ptr< ::localization::localization_stateResponse const> localization_stateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::localization::localization_stateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::localization::localization_stateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace localization

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::localization::localization_stateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::localization::localization_stateResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::localization::localization_stateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::localization::localization_stateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::localization::localization_stateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::localization::localization_stateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::localization::localization_stateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "af6d3a99f0fbeb66d3248fa4b3e675fb";
  }

  static const char* value(const ::localization::localization_stateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaf6d3a99f0fbeb66ULL;
  static const uint64_t static_value2 = 0xd3248fa4b3e675fbULL;
};

template<class ContainerAllocator>
struct DataType< ::localization::localization_stateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "localization/localization_stateResponse";
  }

  static const char* value(const ::localization::localization_stateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::localization::localization_stateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string state\n\
";
  }

  static const char* value(const ::localization::localization_stateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::localization::localization_stateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct localization_stateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::localization::localization_stateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::localization::localization_stateResponse_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LOCALIZATION_MESSAGE_LOCALIZATION_STATERESPONSE_H