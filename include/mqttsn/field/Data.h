// Generated by commsdsl2comms v3.4.2

/// @file
/// @brief Contains definition of <b>"Data"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "mqttsn/field/DataCommon.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace field
{

/// @brief Definition of <b>"Data"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = mqttsn::options::DefaultOptions, typename... TExtraOpts>
struct Data : public
    comms::field::ArrayList<
        mqttsn::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        typename TOpt::field::Data
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return mqttsn::field::DataCommon::name();
    }
    
};

} // namespace field

} // namespace mqttsn


