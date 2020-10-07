// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Pubrec message and its fields.

#pragma once

#include "mqttsn/field/MessageIdCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Pubrec message.
/// @see mqttsn::message::PubrecFields
struct PubrecFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::PubrecFields::MsgId field.
    using MsgIdCommon = mqttsn::field::MessageIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Pubrec message.
/// @see mqttsn::message::Pubrec
struct PubrecCommon
{
    /// @brief Name of the @ref mqttsn::message::Pubrec message.
    static const char* name()
    {
        return "PUBREC";
    }
    
};

} // namespace message

} // namespace mqttsn


