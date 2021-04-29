// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Publish message and its fields.

#pragma once

#include "mqttsn/field/DataCommon.h"
#include "mqttsn/field/FlagsCommon.h"
#include "mqttsn/field/MessageIdCommon.h"
#include "mqttsn/field/TopicIdCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Publish message.
/// @see mqttsn::message::PublishFields
struct PublishFieldsCommon
{
    /// @brief Common types and functions for members of
    ///     @ref mqttsn::message::PublishFields::Flags field.
    using FlagsMembersCommon = mqttsn::field::FlagsMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::PublishFields::Flags field.
    using FlagsCommon = mqttsn::field::FlagsCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::PublishFields::TopicId field.
    using TopicIdCommon = mqttsn::field::TopicIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::PublishFields::MsgId field.
    using MsgIdCommon = mqttsn::field::MessageIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::PublishFields::Data field.
    using DataCommon = mqttsn::field::DataCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Publish message.
/// @see mqttsn::message::Publish
struct PublishCommon
{
    /// @brief Name of the @ref mqttsn::message::Publish message.
    static const char* name()
    {
        return "PUBLISH";
    }
    
};

} // namespace message

} // namespace mqttsn


