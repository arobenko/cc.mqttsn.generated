// Generated by commsdsl2comms v3.3.1

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::field::MessageId field.

#pragma once

#include <cstdint>

namespace mqttsn
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqttsn::field::MessageId field.
struct MessageIdCommon
{
    /// @brief Re-definition of the value type used by
    ///     mqttsn::field::MessageId field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref mqttsn::field::MessageId field.
    static const char* name()
    {
        return "MsgId";
    }
    
};

} // namespace field

} // namespace mqttsn


