// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Decimal.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* Decimal_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Decimal_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Decimal_2eproto() {
  protobuf_AddDesc_Decimal_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Decimal.proto");
  GOOGLE_CHECK(file != NULL);
  Decimal_descriptor_ = file->message_type(0);
  static const int Decimal_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Decimal, mantissa_msb_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Decimal, mantissa_lsb_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Decimal, exponent_and_sign_),
  };
  Decimal_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Decimal_descriptor_,
      Decimal::default_instance_,
      Decimal_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Decimal, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Decimal, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Decimal));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Decimal_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Decimal_descriptor_, &Decimal::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Decimal_2eproto() {
  delete Decimal::default_instance_;
  delete Decimal_reflection_;
}

void protobuf_AddDesc_Decimal_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rDecimal.proto\"P\n\007Decimal\022\024\n\014mantissa_m"
    "sb\030\001 \001(\004\022\024\n\014mantissa_lsb\030\002 \001(\r\022\031\n\021expone"
    "nt_and_sign\030\003 \002(\021", 97);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Decimal.proto", &protobuf_RegisterTypes);
  Decimal::default_instance_ = new Decimal();
  Decimal::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Decimal_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Decimal_2eproto {
  StaticDescriptorInitializer_Decimal_2eproto() {
    protobuf_AddDesc_Decimal_2eproto();
  }
} static_descriptor_initializer_Decimal_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Decimal::kMantissaMsbFieldNumber;
const int Decimal::kMantissaLsbFieldNumber;
const int Decimal::kExponentAndSignFieldNumber;
#endif  // !_MSC_VER

Decimal::Decimal()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Decimal::InitAsDefaultInstance() {
}

Decimal::Decimal(const Decimal& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Decimal::SharedCtor() {
  _cached_size_ = 0;
  mantissa_msb_ = GOOGLE_ULONGLONG(0);
  mantissa_lsb_ = 0u;
  exponent_and_sign_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Decimal::~Decimal() {
  SharedDtor();
}

void Decimal::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Decimal::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Decimal::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Decimal_descriptor_;
}

const Decimal& Decimal::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Decimal_2eproto();  return *default_instance_;
}

Decimal* Decimal::default_instance_ = NULL;

Decimal* Decimal::New() const {
  return new Decimal;
}

void Decimal::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    mantissa_msb_ = GOOGLE_ULONGLONG(0);
    mantissa_lsb_ = 0u;
    exponent_and_sign_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Decimal::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 mantissa_msb = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &mantissa_msb_)));
          _set_bit(0);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_mantissa_lsb;
        break;
      }
      
      // optional uint32 mantissa_lsb = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_mantissa_lsb:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &mantissa_lsb_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_exponent_and_sign;
        break;
      }
      
      // required sint32 exponent_and_sign = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_exponent_and_sign:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &exponent_and_sign_)));
          _set_bit(2);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Decimal::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint64 mantissa_msb = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->mantissa_msb(), output);
  }
  
  // optional uint32 mantissa_lsb = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->mantissa_lsb(), output);
  }
  
  // required sint32 exponent_and_sign = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(3, this->exponent_and_sign(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Decimal::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint64 mantissa_msb = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->mantissa_msb(), target);
  }
  
  // optional uint32 mantissa_lsb = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->mantissa_lsb(), target);
  }
  
  // required sint32 exponent_and_sign = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(3, this->exponent_and_sign(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Decimal::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint64 mantissa_msb = 1;
    if (has_mantissa_msb()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->mantissa_msb());
    }
    
    // optional uint32 mantissa_lsb = 2;
    if (has_mantissa_lsb()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->mantissa_lsb());
    }
    
    // required sint32 exponent_and_sign = 3;
    if (has_exponent_and_sign()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->exponent_and_sign());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Decimal::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Decimal* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Decimal*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Decimal::MergeFrom(const Decimal& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_mantissa_msb(from.mantissa_msb());
    }
    if (from._has_bit(1)) {
      set_mantissa_lsb(from.mantissa_lsb());
    }
    if (from._has_bit(2)) {
      set_exponent_and_sign(from.exponent_and_sign());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Decimal::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Decimal::CopyFrom(const Decimal& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Decimal::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000004) != 0x00000004) return false;
  
  return true;
}

void Decimal::Swap(Decimal* other) {
  if (other != this) {
    std::swap(mantissa_msb_, other->mantissa_msb_);
    std::swap(mantissa_lsb_, other->mantissa_lsb_);
    std::swap(exponent_and_sign_, other->exponent_and_sign_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Decimal::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Decimal_descriptor_;
  metadata.reflection = Decimal_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)