// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Disconnect message and its fields.

#pragma once

#include "mqttsn/field/DurationCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Disconnect message.
/// @see mqttsn::message::DisconnectFields
struct DisconnectFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref mqttsn::message::DisconnectFields::Duration field.
    struct DurationMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref mqttsn::message::DisconnectFields::DurationMembers::Duration field.
        using DurationCommon = mqttsn::field::DurationCommon;
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref mqttsn::message::DisconnectFields::Duration field.
    struct DurationCommon
    {
        /// @brief Name of the @ref mqttsn::message::DisconnectFields::Duration field.
        static const char* name()
        {
            return "Duration";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Disconnect message.
/// @see mqttsn::message::Disconnect
struct DisconnectCommon
{
    /// @brief Name of the @ref mqttsn::message::Disconnect message.
    static const char* name()
    {
        return "DISCONNECT";
    }
    
};

} // namespace message

} // namespace mqttsn


