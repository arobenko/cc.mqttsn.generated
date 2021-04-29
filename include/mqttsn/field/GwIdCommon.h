// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::field::GwId field.

#pragma once

#include <cstdint>

namespace mqttsn
{

namespace field
{

/// @brief Common types and functions for
///     @ref mqttsn::field::GwId field.
struct GwIdCommon
{
    /// @brief Re-definition of the value type used by
    ///     mqttsn::field::GwId field.
    using ValueType = std::uint8_t;

    /// @brief Name of the @ref mqttsn::field::GwId field.
    static const char* name()
    {
        return "GwId";
    }
    
};

} // namespace field

} // namespace mqttsn


