/// @file
/// @brief Contains definition of <b>"ADVERTISE"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/Duration.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/GwId.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Advertise.
/// @tparam TOpt Extra options
/// @see @ref Advertise
/// @headerfile "mqttsn/message/Advertise.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct AdvertiseFields
{
    /// @brief Definition of <b>"GwId"</b> field.
    using GwId =
        mqttsn::field::GwId<
            TOpt
        >;
    
    /// @brief Definition of <b>"Duration"</b> field.
    using Duration =
        mqttsn::field::Duration<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        GwId,
        Duration
    >;
};

/// @brief Definition of <b>"ADVERTISE"</b> message class.
/// @details
///     See @ref AdvertiseFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Advertise.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Advertise : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Advertise,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Advertise>,
        comms::option::def::FieldsImpl<typename AdvertiseFields<TOpt>::All>,
        comms::option::def::MsgType<Advertise<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Advertise,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Advertise>,
            comms::option::def::FieldsImpl<typename AdvertiseFields<TOpt>::All>,
            comms::option::def::MsgType<Advertise<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_gwId type and @b field_gwId() fuction
    ///         for @ref AdvertiseFields::GwId field.
    ///     @li @b Field_duration type and @b field_duration() fuction
    ///         for @ref AdvertiseFields::Duration field.
    COMMS_MSG_FIELDS_NAMES(
        gwId,
        duration
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 3U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 3U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "ADVERTISE";
    }
    
    
};

} // namespace message

} // namespace mqttsn


