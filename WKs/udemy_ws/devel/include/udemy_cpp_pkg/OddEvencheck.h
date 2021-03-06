// Generated by gencpp from file udemy_cpp_pkg/OddEvencheck.msg
// DO NOT EDIT!


#ifndef UDEMY_CPP_PKG_MESSAGE_ODDEVENCHECK_H
#define UDEMY_CPP_PKG_MESSAGE_ODDEVENCHECK_H

#include <ros/service_traits.h>


#include <udemy_cpp_pkg/OddEvencheckRequest.h>
#include <udemy_cpp_pkg/OddEvencheckResponse.h>


namespace udemy_cpp_pkg
{

struct OddEvencheck
{

typedef OddEvencheckRequest Request;
typedef OddEvencheckResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct OddEvencheck
} // namespace udemy_cpp_pkg


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::udemy_cpp_pkg::OddEvencheck > {
  static const char* value()
  {
    return "4ff0b0ab1ed04611e3a2b4090af9ee4f";
  }

  static const char* value(const ::udemy_cpp_pkg::OddEvencheck&) { return value(); }
};

template<>
struct DataType< ::udemy_cpp_pkg::OddEvencheck > {
  static const char* value()
  {
    return "udemy_cpp_pkg/OddEvencheck";
  }

  static const char* value(const ::udemy_cpp_pkg::OddEvencheck&) { return value(); }
};


// service_traits::MD5Sum< ::udemy_cpp_pkg::OddEvencheckRequest> should match
// service_traits::MD5Sum< ::udemy_cpp_pkg::OddEvencheck >
template<>
struct MD5Sum< ::udemy_cpp_pkg::OddEvencheckRequest>
{
  static const char* value()
  {
    return MD5Sum< ::udemy_cpp_pkg::OddEvencheck >::value();
  }
  static const char* value(const ::udemy_cpp_pkg::OddEvencheckRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::udemy_cpp_pkg::OddEvencheckRequest> should match
// service_traits::DataType< ::udemy_cpp_pkg::OddEvencheck >
template<>
struct DataType< ::udemy_cpp_pkg::OddEvencheckRequest>
{
  static const char* value()
  {
    return DataType< ::udemy_cpp_pkg::OddEvencheck >::value();
  }
  static const char* value(const ::udemy_cpp_pkg::OddEvencheckRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::udemy_cpp_pkg::OddEvencheckResponse> should match
// service_traits::MD5Sum< ::udemy_cpp_pkg::OddEvencheck >
template<>
struct MD5Sum< ::udemy_cpp_pkg::OddEvencheckResponse>
{
  static const char* value()
  {
    return MD5Sum< ::udemy_cpp_pkg::OddEvencheck >::value();
  }
  static const char* value(const ::udemy_cpp_pkg::OddEvencheckResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::udemy_cpp_pkg::OddEvencheckResponse> should match
// service_traits::DataType< ::udemy_cpp_pkg::OddEvencheck >
template<>
struct DataType< ::udemy_cpp_pkg::OddEvencheckResponse>
{
  static const char* value()
  {
    return DataType< ::udemy_cpp_pkg::OddEvencheck >::value();
  }
  static const char* value(const ::udemy_cpp_pkg::OddEvencheckResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UDEMY_CPP_PKG_MESSAGE_ODDEVENCHECK_H
