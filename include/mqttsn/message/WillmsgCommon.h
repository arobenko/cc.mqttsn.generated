// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Willmsg message and its fields.

#pragma once

#include "mqttsn/field/WillMsgCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Willmsg message.
/// @see mqttsn::message::WillmsgFields
struct WillmsgFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::WillmsgFields::WillMsg field.
    using WillMsgCommon = mqttsn::field::WillMsgCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Willmsg message.
/// @see mqttsn::message::Willmsg
struct WillmsgCommon
{
    /// @brief Name of the @ref mqttsn::message::Willmsg message.
    static const char* name()
    {
        return "WILLMSG";
    }
    
};

} // namespace message

} // namespace mqttsn


