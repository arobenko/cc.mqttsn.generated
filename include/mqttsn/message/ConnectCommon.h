// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Connect message and its fields.

#pragma once

#include "mqttsn/field/ClientIdCommon.h"
#include "mqttsn/field/DurationCommon.h"
#include "mqttsn/field/FlagsCommon.h"
#include "mqttsn/field/ProtocolIdCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Connect message.
/// @see mqttsn::message::ConnectFields
struct ConnectFieldsCommon
{
    /// @brief Common types and functions for members of
    ///     @ref mqttsn::message::ConnectFields::Flags field.
    using FlagsMembersCommon = mqttsn::field::FlagsMembersCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::ConnectFields::Flags field.
    using FlagsCommon = mqttsn::field::FlagsCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::ConnectFields::ProtocolId field.
    using ProtocolIdCommon = mqttsn::field::ProtocolIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::ConnectFields::Duration field.
    using DurationCommon = mqttsn::field::DurationCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::ConnectFields::ClientId field.
    using ClientIdCommon = mqttsn::field::ClientIdCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Connect message.
/// @see mqttsn::message::Connect
struct ConnectCommon
{
    /// @brief Name of the @ref mqttsn::message::Connect message.
    static const char* name()
    {
        return "CONNECT";
    }
    
};

} // namespace message

} // namespace mqttsn


