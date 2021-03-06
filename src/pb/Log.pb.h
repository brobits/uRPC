// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Log.proto

#ifndef PROTOBUF_Log_2eproto__INCLUDED
#define PROTOBUF_Log_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace urpc {
namespace pb {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Log_2eproto();
void protobuf_AssignDesc_Log_2eproto();
void protobuf_ShutdownFile_Log_2eproto();

class Log;

enum Log_Level {
  Log_Level_Fatal = 0,
  Log_Level_Error = 1,
  Log_Level_Warn = 2,
  Log_Level_Info = 3,
  Log_Level_Debug = 4,
  Log_Level_Trace = 5
};
bool Log_Level_IsValid(int value);
const Log_Level Log_Level_Level_MIN = Log_Level_Fatal;
const Log_Level Log_Level_Level_MAX = Log_Level_Trace;
const int Log_Level_Level_ARRAYSIZE = Log_Level_Level_MAX + 1;

const ::google::protobuf::EnumDescriptor* Log_Level_descriptor();
inline const ::std::string& Log_Level_Name(Log_Level value) {
  return ::google::protobuf::internal::NameOfEnum(
    Log_Level_descriptor(), value);
}
inline bool Log_Level_Parse(
    const ::std::string& name, Log_Level* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Log_Level>(
    Log_Level_descriptor(), name, value);
}
// ===================================================================

class Log : public ::google::protobuf::Message {
 public:
  Log();
  virtual ~Log();
  
  Log(const Log& from);
  
  inline Log& operator=(const Log& from) {
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
  static const Log& default_instance();
  
  void Swap(Log* other);
  
  // implements Message ----------------------------------------------
  
  Log* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Log& from);
  void MergeFrom(const Log& from);
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
  
  typedef Log_Level Level;
  static const Level Fatal = Log_Level_Fatal;
  static const Level Error = Log_Level_Error;
  static const Level Warn = Log_Level_Warn;
  static const Level Info = Log_Level_Info;
  static const Level Debug = Log_Level_Debug;
  static const Level Trace = Log_Level_Trace;
  static inline bool Level_IsValid(int value) {
    return Log_Level_IsValid(value);
  }
  static const Level Level_MIN =
    Log_Level_Level_MIN;
  static const Level Level_MAX =
    Log_Level_Level_MAX;
  static const int Level_ARRAYSIZE =
    Log_Level_Level_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Level_descriptor() {
    return Log_Level_descriptor();
  }
  static inline const ::std::string& Level_Name(Level value) {
    return Log_Level_Name(value);
  }
  static inline bool Level_Parse(const ::std::string& name,
      Level* value) {
    return Log_Level_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // optional string message = 1;
  inline bool has_message() const;
  inline void clear_message();
  static const int kMessageFieldNumber = 1;
  inline const ::std::string& message() const;
  inline void set_message(const ::std::string& value);
  inline void set_message(const char* value);
  inline void set_message(const char* value, size_t size);
  inline ::std::string* mutable_message();
  inline ::std::string* release_message();
  
  // optional .urpc.pb.Log.Level level = 2;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 2;
  inline ::urpc::pb::Log_Level level() const;
  inline void set_level(::urpc::pb::Log_Level value);
  
  // optional int32 number = 3;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 3;
  inline ::google::protobuf::int32 number() const;
  inline void set_number(::google::protobuf::int32 value);
  
  // optional int64 time = 4;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 4;
  inline ::google::protobuf::int64 time() const;
  inline void set_time(::google::protobuf::int64 value);
  
  // @@protoc_insertion_point(class_scope:urpc.pb.Log)
 private:
  inline void set_has_message();
  inline void clear_has_message();
  inline void set_has_level();
  inline void clear_has_level();
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_time();
  inline void clear_has_time();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* message_;
  int level_;
  ::google::protobuf::int32 number_;
  ::google::protobuf::int64 time_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  friend void  protobuf_AddDesc_Log_2eproto();
  friend void protobuf_AssignDesc_Log_2eproto();
  friend void protobuf_ShutdownFile_Log_2eproto();
  
  void InitAsDefaultInstance();
  static Log* default_instance_;
};
// ===================================================================


// ===================================================================

// Log

// optional string message = 1;
inline bool Log::has_message() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Log::set_has_message() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Log::clear_has_message() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Log::clear_message() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    message_->clear();
  }
  clear_has_message();
}
inline const ::std::string& Log::message() const {
  return *message_;
}
inline void Log::set_message(const ::std::string& value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void Log::set_message(const char* value) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(value);
}
inline void Log::set_message(const char* value, size_t size) {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  message_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Log::mutable_message() {
  set_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    message_ = new ::std::string;
  }
  return message_;
}
inline ::std::string* Log::release_message() {
  clear_has_message();
  if (message_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = message_;
    message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional .urpc.pb.Log.Level level = 2;
inline bool Log::has_level() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Log::set_has_level() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Log::clear_has_level() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Log::clear_level() {
  level_ = 0;
  clear_has_level();
}
inline ::urpc::pb::Log_Level Log::level() const {
  return static_cast< ::urpc::pb::Log_Level >(level_);
}
inline void Log::set_level(::urpc::pb::Log_Level value) {
  GOOGLE_DCHECK(::urpc::pb::Log_Level_IsValid(value));
  set_has_level();
  level_ = value;
}

// optional int32 number = 3;
inline bool Log::has_number() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Log::set_has_number() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Log::clear_has_number() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Log::clear_number() {
  number_ = 0;
  clear_has_number();
}
inline ::google::protobuf::int32 Log::number() const {
  return number_;
}
inline void Log::set_number(::google::protobuf::int32 value) {
  set_has_number();
  number_ = value;
}

// optional int64 time = 4;
inline bool Log::has_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Log::set_has_time() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Log::clear_has_time() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Log::clear_time() {
  time_ = GOOGLE_LONGLONG(0);
  clear_has_time();
}
inline ::google::protobuf::int64 Log::time() const {
  return time_;
}
inline void Log::set_time(::google::protobuf::int64 value) {
  set_has_time();
  time_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace urpc

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::urpc::pb::Log_Level>() {
  return ::urpc::pb::Log_Level_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Log_2eproto__INCLUDED
