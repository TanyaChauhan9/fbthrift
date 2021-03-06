/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module0_types.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct first;
struct second;
struct s;
struct id;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_first
#define APACHE_THRIFT_ACCESSOR_first
APACHE_THRIFT_DEFINE_ACCESSOR(first);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_second
#define APACHE_THRIFT_ACCESSOR_second
APACHE_THRIFT_DEFINE_ACCESSOR(second);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_s
#define APACHE_THRIFT_ACCESSOR_s
APACHE_THRIFT_DEFINE_ACCESSOR(s);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_id
#define APACHE_THRIFT_ACCESSOR_id
APACHE_THRIFT_DEFINE_ACCESSOR(id);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace module2 {
class Struct;
class BigStruct;
} // module2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace module2 {
class Struct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  //  using signed/unsigned as true/false for quicker parsing
  using __fbthrift_cpp2_gen_json = unsigned;
  using __fbthrift_cpp2_gen_nimble = unsigned;

 public:
  using __fbthrift_cpp2_type = Struct;

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  Struct() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Struct(apache::thrift::FragileConstructor,  ::module0::Struct first__arg,  ::module1::Struct second__arg);

  Struct(Struct&&) = default;

  Struct(const Struct&) = default;


  Struct& operator=(Struct&&) = default;

  Struct& operator=(const Struct&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
 public:
   ::module0::Struct first;
 public:
   ::module1::Struct second;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool first;
    bool second;
  } __isset = {};
  bool operator==(const Struct& rhs) const;
#ifndef SWIG
  friend bool operator!=(const Struct& __x, const Struct& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const Struct& rhs) const;
#ifndef SWIG
  friend bool operator>(const Struct& __x, const Struct& __y) {
    return __y < __x;
  }
  friend bool operator<=(const Struct& __x, const Struct& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const Struct& __x, const Struct& __y) {
    return !(__x < __y);
  }
#endif

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T =  ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> first_ref() const& {
    return {this->first, __isset.first};
  }

  template <typename..., typename T =  ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> first_ref() const&& {
    return {std::move(this->first), __isset.first};
  }

  template <typename..., typename T =  ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> first_ref() & {
    return {this->first, __isset.first};
  }

  template <typename..., typename T =  ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> first_ref() && {
    return {std::move(this->first), __isset.first};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T =  ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> second_ref() const& {
    return {this->second, __isset.second};
  }

  template <typename..., typename T =  ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> second_ref() const&& {
    return {std::move(this->second), __isset.second};
  }

  template <typename..., typename T =  ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> second_ref() & {
    return {this->second, __isset.second};
  }

  template <typename..., typename T =  ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> second_ref() && {
    return {std::move(this->second), __isset.second};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END
  const  ::module0::Struct& get_first() const&;
   ::module0::Struct get_first() &&;

  template <typename T_Struct_first_struct_setter =  ::module0::Struct>
   ::module0::Struct& set_first(T_Struct_first_struct_setter&& first_) {
    first = std::forward<T_Struct_first_struct_setter>(first_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.first = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return first;
  }
  const  ::module1::Struct& get_second() const&;
   ::module1::Struct get_second() &&;

  template <typename T_Struct_second_struct_setter =  ::module1::Struct>
   ::module1::Struct& set_second(T_Struct_second_struct_setter&& second_) {
    second = std::forward<T_Struct_second_struct_setter>(second_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.second = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return second;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< Struct >;
};

void swap(Struct& a, Struct& b);

template <class Protocol_>
uint32_t Struct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // module2
namespace module2 {
class BigStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  //  using signed/unsigned as true/false for quicker parsing
  using __fbthrift_cpp2_gen_json = unsigned;
  using __fbthrift_cpp2_gen_nimble = unsigned;

 public:
  using __fbthrift_cpp2_type = BigStruct;

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  BigStruct() :
      id(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  BigStruct(apache::thrift::FragileConstructor,  ::module2::Struct s__arg, int32_t id__arg);

  BigStruct(BigStruct&&) = default;

  BigStruct(const BigStruct&) = default;


  BigStruct& operator=(BigStruct&&) = default;

  BigStruct& operator=(const BigStruct&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
 public:
   ::module2::Struct s;
 public:
  int32_t id;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool s;
    bool id;
  } __isset = {};
  bool operator==(const BigStruct& rhs) const;
#ifndef SWIG
  friend bool operator!=(const BigStruct& __x, const BigStruct& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const BigStruct& rhs) const;
#ifndef SWIG
  friend bool operator>(const BigStruct& __x, const BigStruct& __y) {
    return __y < __x;
  }
  friend bool operator<=(const BigStruct& __x, const BigStruct& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const BigStruct& __x, const BigStruct& __y) {
    return !(__x < __y);
  }
#endif

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T =  ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> s_ref() const& {
    return {this->s, __isset.s};
  }

  template <typename..., typename T =  ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> s_ref() const&& {
    return {std::move(this->s), __isset.s};
  }

  template <typename..., typename T =  ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> s_ref() & {
    return {this->s, __isset.s};
  }

  template <typename..., typename T =  ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> s_ref() && {
    return {std::move(this->s), __isset.s};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> id_ref() const& {
    return {this->id, __isset.id};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> id_ref() const&& {
    return {std::move(this->id), __isset.id};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> id_ref() & {
    return {this->id, __isset.id};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> id_ref() && {
    return {std::move(this->id), __isset.id};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END
  const  ::module2::Struct& get_s() const&;
   ::module2::Struct get_s() &&;

  template <typename T_BigStruct_s_struct_setter =  ::module2::Struct>
   ::module2::Struct& set_s(T_BigStruct_s_struct_setter&& s_) {
    s = std::forward<T_BigStruct_s_struct_setter>(s_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.s = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return s;
  }

  int32_t get_id() const {
    return id;
  }

  int32_t& set_id(int32_t id_) {
    id = id_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.id = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return id;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< BigStruct >;
};

void swap(BigStruct& a, BigStruct& b);

template <class Protocol_>
uint32_t BigStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // module2
