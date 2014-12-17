// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: logcatInfo.proto

#ifndef PROTOBUF_logcatInfo_2eproto__INCLUDED
#define PROTOBUF_logcatInfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace eolwral {
namespace osmonitor {
namespace core {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_logcatInfo_2eproto();
void protobuf_AssignDesc_logcatInfo_2eproto();
void protobuf_ShutdownFile_logcatInfo_2eproto();

class logcatInfo;

enum logcatInfo_logPriority {
  logcatInfo_logPriority_UNKNOWN = 0,
  logcatInfo_logPriority_DEFAULT = 1,
  logcatInfo_logPriority_VERBOSE = 2,
  logcatInfo_logPriority_DEBUG = 3,
  logcatInfo_logPriority_INFO = 4,
  logcatInfo_logPriority_WARN = 5,
  logcatInfo_logPriority_ERROR = 6,
  logcatInfo_logPriority_FATAL = 7,
  logcatInfo_logPriority_SILENT = 8
};
bool logcatInfo_logPriority_IsValid(int value);
const logcatInfo_logPriority logcatInfo_logPriority_logPriority_MIN = logcatInfo_logPriority_UNKNOWN;
const logcatInfo_logPriority logcatInfo_logPriority_logPriority_MAX = logcatInfo_logPriority_SILENT;
const int logcatInfo_logPriority_logPriority_ARRAYSIZE = logcatInfo_logPriority_logPriority_MAX + 1;

const ::google::protobuf::EnumDescriptor* logcatInfo_logPriority_descriptor();
inline const ::std::string& logcatInfo_logPriority_Name(logcatInfo_logPriority value) {
  return ::google::protobuf::internal::NameOfEnum(
    logcatInfo_logPriority_descriptor(), value);
}
inline bool logcatInfo_logPriority_Parse(
    const ::std::string& name, logcatInfo_logPriority* value) {
  return ::google::protobuf::internal::ParseNamedEnum<logcatInfo_logPriority>(
    logcatInfo_logPriority_descriptor(), name, value);
}
// ===================================================================

class logcatInfo : public ::google::protobuf::Message {
 public:
  logcatInfo();
  virtual ~logcatInfo();

  logcatInfo(const logcatInfo& from);

  inline logcatInfo& operator=(const logcatInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const logcatInfo& default_instance();

  void Swap(logcatInfo* other);

  // implements Message ----------------------------------------------

  logcatInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const logcatInfo& from);
  void MergeFrom(const logcatInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef logcatInfo_logPriority logPriority;
  static const logPriority UNKNOWN = logcatInfo_logPriority_UNKNOWN;
  static const logPriority DEFAULT = logcatInfo_logPriority_DEFAULT;
  static const logPriority VERBOSE = logcatInfo_logPriority_VERBOSE;
  static const logPriority DEBUG = logcatInfo_logPriority_DEBUG;
  static const logPriority INFO = logcatInfo_logPriority_INFO;
  static const logPriority WARN = logcatInfo_logPriority_WARN;
  static const logPriority ERROR = logcatInfo_logPriority_ERROR;
  static const logPriority FATAL = logcatInfo_logPriority_FATAL;
  static const logPriority SILENT = logcatInfo_logPriority_SILENT;
  static inline bool logPriority_IsValid(int value) {
    return logcatInfo_logPriority_IsValid(value);
  }
  static const logPriority logPriority_MIN =
    logcatInfo_logPriority_logPriority_MIN;
  static const logPriority logPriority_MAX =
    logcatInfo_logPriority_logPriority_MAX;
  static const int logPriority_ARRAYSIZE =
    logcatInfo_logPriority_logPriority_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  logPriority_descriptor() {
    return logcatInfo_logPriority_descriptor();
  }
  static inline const ::std::string& logPriority_Name(logPriority value) {
    return logcatInfo_logPriority_Name(value);
  }
  static inline bool logPriority_Parse(const ::std::string& name,
      logPriority* value) {
    return logcatInfo_logPriority_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .com.eolwral.osmonitor.core.logcatInfo.logPriority priority = 1 [default = UNKNOWN];
  inline bool has_priority() const;
  inline void clear_priority();
  static const int kPriorityFieldNumber = 1;
  inline ::com::eolwral::osmonitor::core::logcatInfo_logPriority priority() const;
  inline void set_priority(::com::eolwral::osmonitor::core::logcatInfo_logPriority value);

  // required uint64 seconds = 2;
  inline bool has_seconds() const;
  inline void clear_seconds();
  static const int kSecondsFieldNumber = 2;
  inline ::google::protobuf::uint64 seconds() const;
  inline void set_seconds(::google::protobuf::uint64 value);

  // required uint64 nanoSeconds = 3;
  inline bool has_nanoseconds() const;
  inline void clear_nanoseconds();
  static const int kNanoSecondsFieldNumber = 3;
  inline ::google::protobuf::uint64 nanoseconds() const;
  inline void set_nanoseconds(::google::protobuf::uint64 value);

  // required uint32 pid = 4;
  inline bool has_pid() const;
  inline void clear_pid();
  static const int kPidFieldNumber = 4;
  inline ::google::protobuf::uint32 pid() const;
  inline void set_pid(::google::protobuf::uint32 value);

  // required uint32 tid = 5;
  inline bool has_tid() const;
  inline void clear_tid();
  static const int kTidFieldNumber = 5;
  inline ::google::protobuf::uint32 tid() const;
  inline void set_tid(::google::protobuf::uint32 value);

  // required string tag = 6;
  inline bool has_tag() const;
  inline void clear_tag();
  static const int kTagFieldNumber = 6;
  inline const ::std::string& tag() const;
  inline void set_tag(const ::std::string& value);
  inline void set_tag(const char* value);
  inline void set_tag(const char* value, size_t size);
  inline ::std::string* mutable_tag();
  inline ::std::string* release_tag();
  inline void set_allocated_tag(::std::string* tag);

  // required string message = 7;
  inline bool has_message() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 7;
  inline const ::std::string& message() const;
  inline void set_message(const ::std::string& value);
  inline void set_message(const char* value);
  inline void set_message(const char* value, size_t size);
  inline ::std::string* mutable_message();
  inline ::std::string* release_message();
  inline void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:com.eolwral.osmonitor.core.logcatInfo)
 private:
  inline void set_has_priority();
  inline void clear_has_priority();
  inline void set_has_seconds();
  inline void clear_has_seconds();
  inline void set_has_nanoseconds();
  inline void clear_has_nanoseconds();
  inline void set_has_pid();
  inline void clear_has_pid();
  inline void set_has_tid();
  inline void clear_has_tid();
  inline void set_has_tag();
  inline void clear_has_tag();
  inline void set_has_message();
  inline void clear_has_message();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 seconds_;
  int priority_;
  ::google::protobuf::uint32 pid_;
  ::google::protobuf::uint64 nanoseconds_;
  ::std::string* tag_;
  ::std::string* message_;
  ::google::protobuf::uint32 tid_;
  friend void  protobuf_AddDesc_logcatInfo_2eproto();
  friend void protobuf_AssignDesc_logcatInfo_2eproto();
  friend void protobuf_ShutdownFile_logcatInfo_2eproto();

  void InitAsDefaultInstance();
  static logcatInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// logcatInfo

// required .com.eolwral.osmonitor.core.logcatInfo.logPriority priority = 1 [default = UNKNOWN];
inline bool logcatInfo::has_priority() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void logcatInfo::set_has_priority() {
  _has_bits_[0] |= 0x00000001u;
}
inline void logcatInfo::clear_has_priority() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void logcatInfo::clear_priority() {
  priority_ = 0;
  clear_has_priority();
}
inline ::com::eolwral::osmonitor::core::logcatInfo_logPriority logcatInfo::priority() const {
  // @@protoc_insertion_point(field_get:com.eolwral.osmonitor.core.logcatInfo.priority)
  return static_cast< ::com::eolwral::osmonitor::core::logcatInfo_logPriority >(priority_);
}
inline void logcatInfo::set_priority(::com::eolwral::osmonitor::core::logcatInfo_logPriority value) {
  assert(::com::eolwral::osmonitor::core::logcatInfo_logPriority_IsValid(value));
  set_has_priority();
  priority_ = value;
  // @@protoc_insertion_point(field_set:com.eolwral.osmonitor.core.logcatInfo.priority)
}

// required uint64 seconds = 2;
inline bool logcatInfo::has_seconds() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void logcatInfo::set_has_seconds() {
  _has_bits_[0] |= 0x00000002u;
}
inline void logcatInfo::clear_has_seconds() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void logcatInfo::clear_seconds() {
  seconds_ = GOOGLE_ULONGLONG(0);
  clear_has_seconds();
}
inline ::google::protobuf::uint64 logcatInfo::seconds() const {
  // @@protoc_insertion_point(field_get:com.eolwral.osmonitor.core.logcatInfo.seconds)
  return seconds_;
}
inline void logcatInfo::set_seconds(::google::protobuf::uint64 value) {
  set_has_seconds();
  seconds_ = value;
  // @@protoc_insertion_point(field_set:com.eolwral.osmonitor.core.logcatInfo.seconds)
}

// required uint64 nanoSeconds = 3;
inline bool logcatInfo::has_nanoseconds() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void logcatInfo::set_has_nanoseconds() {
  _has_bits_[0] |= 0x00000004u;
}
inline void logcatInfo::clear_has_nanoseconds() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void logcatInfo::clear_nanoseconds() {
  nanoseconds_ = GOOGLE_ULONGLONG(0);
  clear_has_nanoseconds();
}
inline ::google::protobuf::uint64 logcatInfo::nanoseconds() const {
  // @@protoc_insertion_point(field_get:com.eolwral.osmonitor.core.logcatInfo.nanoSeconds)
  return nanoseconds_;
}
inline void logcatInfo::set_nanoseconds(::google::protobuf::uint64 value) {
  set_has_nanoseconds();
  nanoseconds_ = value;
  // @@protoc_insertion_point(field_set:com.eolwral.osmonitor.core.logcatInfo.nanoSeconds)
}

// required uint32 pid = 4;
inline bool logcatInfo::has_pid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void logcatInfo::set_has_pid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void logcatInfo::clear_has_pid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void logcatInfo::clear_pid() {
  pid_ = 0u;
  clear_has_pid();
}
inline ::google::protobuf::uint32 logcatInfo::pid() const {
  // @@protoc_insertion_point(field_get:com.eolwral.osmonitor.core.logcatInfo.pid)
  return pid_;
}
inline void logcatInfo::set_pid(::google::protobuf::uint32 value) {
  set_has_pid();
  pid_ = value;
  // @@protoc_insertion_point(field_set:com.eolwral.osmonitor.core.logcatInfo.pid)
}

// required uint32 tid = 5;
inline bool logcatInfo::has_tid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void logcatInfo::set_has_tid() {
  _has_bits_[0] |= 0x00000010u;
}
inline void logcatInfo::clear_has_tid() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void logcatInfo::clear_tid() {
  tid_ = 0u;
  clear_has_tid();
}
inline ::google::protobuf::uint32 logcatInfo::tid() const {
  // @@protoc_insertion_point(field_get:com.eolwral.osmonitor.core.logcatInfo.tid)
  return tid_;
}
inline void logcatInfo::set_tid(::google::protobuf::uint32 value) {
  set_has_tid();
  tid_ = value;
  // @@protoc_insertion_point(field_set:com.eolwral.osmonitor.core.logcatInfo.tid)
}

// required string tag = 6;
inline bool logcatInfo::has_tag() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void logcatInfo::set_has_tag() {
  _has_bits_[0] |= 0x00000020u;
}
inline void logcatInfo::clear_has_tag() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void logcatInfo::clear_tag() {
  if (tag_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tag_->clear();
  }
  clear_has_tag();
}
inline const ::std::string& logcatInfo::tag() const {
  // @@protoc_insertion_point(field_get:com.eolwral.osmonitor.core.logcatInfo.tag)
  return *tag_;
}
inline void logcatInfo::set_tag(const ::std::string& value) {
  set_has_tag();
  if (tag_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tag_ = new ::std::string;
  }
  tag_->assign(value);
  // @@protoc_insertion_point(field_set:com.eolwral.osmonitor.core.logcatInfo.tag)
}
inline void logcatInfo::set_tag(const char* value) {
  set_has_tag();
  if (tag_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tag_ = new ::std::string;
  }
  tag_->assign(value);
  // @@protoc_insertion_point(field_set_char:com.eolwral.osmonitor.core.logcatInfo.tag)
}
inline void logcatInfo::set_tag(const char* value, size_t size) {
  set_has_tag();
  if (tag_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tag_ = new ::std::string;
  }
  tag_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:com.eolwral.osmonitor.core.logcatInfo.tag)
}
inline ::std::string* logcatInfo::mutable_tag() {
  set_has_tag();
  if (tag_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tag_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:com.eolwral.osmonitor.core.logcatInfo.tag)
  return tag_;
}
inline ::std::string* logcatInfo::release_tag() {
  clear_has_tag();
  if (tag_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = tag_;
    tag_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void logcatInfo::set_allocated_tag(::std::string* tag) {
  if (tag_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete tag_;
  }
  if (tag) {
    set_has_tag();
    tag_ = tag;
  } else {
    clear_has_tag();
    tag_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:com.eolwral.osmonitor.core.logcatInfo.tag)
}

// required string message = 7;
inline bool logcatInfo::has_message() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void logcatInfo::set_has_message() {
  _has_bits_[0] |= 0x00000040u;
}
inline void logcatInfo::clear_has_message() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void logcatInfo::clear_message() {
  if (message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& logcatInfo::message() const {
  // @@protoc_insertion_point(field_get:com.eolwral.osmonitor.core.logcatInfo.message)
  return *message_;
}
inline void logcatInfo::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(value);
  // @@protoc_insertion_point(field_set:com.eolwral.osmonitor.core.logcatInfo.message)
}
inline void logcatInfo::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(value);
  // @@protoc_insertion_point(field_set_char:com.eolwral.osmonitor.core.logcatInfo.message)
}
inline void logcatInfo::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:com.eolwral.osmonitor.core.logcatInfo.message)
}
inline ::std::string* logcatInfo::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    message_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:com.eolwral.osmonitor.core.logcatInfo.message)
  return message_;
}
inline ::std::string* logcatInfo::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void logcatInfo::set_allocated_message(::std::string* message) {
  if (message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete message_;
  }
  if (message) {
    set_has_message();
    message_ = message;
  } else {
    clear_has_message();
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:com.eolwral.osmonitor.core.logcatInfo.message)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace core
}  // namespace osmonitor
}  // namespace eolwral
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::com::eolwral::osmonitor::core::logcatInfo_logPriority> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::com::eolwral::osmonitor::core::logcatInfo_logPriority>() {
  return ::com::eolwral::osmonitor::core::logcatInfo_logPriority_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_logcatInfo_2eproto__INCLUDED
