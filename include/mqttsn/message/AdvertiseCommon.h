// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::message::Advertise message and its fields.

#pragma once

#include "mqttsn/field/DurationCommon.h"
#include "mqttsn/field/GwIdCommon.h"

namespace mqttsn
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref mqttsn::message::Advertise message.
/// @see mqttsn::message::AdvertiseFields
struct AdvertiseFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::AdvertiseFields::GwId field.
    using GwIdCommon = mqttsn::field::GwIdCommon;
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::message::AdvertiseFields::Duration field.
    using DurationCommon = mqttsn::field::DurationCommon;
    
};

/// @brief Common types and functions of 
///     @ref mqttsn::message::Advertise message.
/// @see mqttsn::message::Advertise
struct AdvertiseCommon
{
    /// @brief Name of the @ref mqttsn::message::Advertise message.
    static const char* name()
    {
        return "ADVERTISE";
    }
    
};

} // namespace message

} // namespace mqttsn


