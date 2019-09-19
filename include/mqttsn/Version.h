/// @file
/// @brief Contains protocol version definition.

#pragma once

#include "comms/version.h"

/// @brief Version of the protocol specification.
#define MQTTSN_SPEC_VERSION (0U)

/// @brief Major version of the protocol library.
#define MQTTSN_MAJOR_VERSION (0U)

/// @brief Minor version of the protocol library.
#define MQTTSN_MINOR_VERSION (11U)

/// @brief Patch version of the protocol library.
#define MQTTSN_PATCH_VERSION (0U)

/// @brief Full version of the protocol library as single number.
#define MQTTSN_VERSION (COMMS_MAKE_VERSION(MQTTSN_MAJOR_VERSION, MQTTSN_MINOR_VERSION, MQTTSN_PATCH_VERSION))


namespace mqttsn
{

/// @brief Version of the protocol specification.
inline constexpr unsigned specVersion()
{
    return MQTTSN_SPEC_VERSION;
}

/// @brief Major version of the protocol library
inline constexpr unsigned versionMajor()
{
    return MQTTSN_MAJOR_VERSION;
}

/// @brief Minor version of the protocol library
inline constexpr unsigned versionMinor()
{
    return MQTTSN_MINOR_VERSION;
}

/// @brief Patch version of the protocol library
inline constexpr unsigned versionPatch()
{
    return MQTTSN_PATCH_VERSION;
}

/// @brief Full version of the protocol library as single number
inline constexpr unsigned version()
{
    return MQTTSN_VERSION;
}


} // namespace mqttsn


// Generated compile time check for minimal supported version of the COMMS library
static_assert(COMMS_MAKE_VERSION(2, 1, 0) <= comms::version(),
    "The version of COMMS library is too old");

