/// @file
/// @brief Contains definition of <b>"CONNECT"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/ClientId.h"
#include "mqttsn/field/Duration.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/Flags.h"
#include "mqttsn/field/ProtocolId.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Connect.
/// @tparam TOpt Extra options
/// @see @ref Connect
/// @headerfile "mqttsn/message/Connect.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct ConnectFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    using Flags =
        mqttsn::field::Flags<
            TOpt
        >;
    
    /// @brief Definition of <b>"ProtocolId"</b> field.
    using ProtocolId =
        mqttsn::field::ProtocolId<
            TOpt
        >;
    
    /// @brief Definition of <b>"Duration"</b> field.
    using Duration =
        mqttsn::field::Duration<
            TOpt
        >;
    
    /// @brief Definition of <b>"ClientId"</b> field.
    using ClientId =
        mqttsn::field::ClientId<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags,
        ProtocolId,
        Duration,
        ClientId
    >;
};

/// @brief Definition of <b>"CONNECT"</b> message class.
/// @details
///     See @ref ConnectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Connect.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Connect : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Connect,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Connect>,
        comms::option::def::FieldsImpl<typename ConnectFields<TOpt>::All>,
        comms::option::def::MsgType<Connect<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Connect,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Connect>,
            comms::option::def::FieldsImpl<typename ConnectFields<TOpt>::All>,
            comms::option::def::MsgType<Connect<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_flags type and @b field_flags() fuction
    ///         for @ref ConnectFields::Flags field.
    ///     @li @b Field_protocolId type and @b field_protocolId() fuction
    ///         for @ref ConnectFields::ProtocolId field.
    ///     @li @b Field_duration type and @b field_duration() fuction
    ///         for @ref ConnectFields::Duration field.
    ///     @li @b Field_clientId type and @b field_clientId() fuction
    ///         for @ref ConnectFields::ClientId field.
    COMMS_MSG_FIELDS_NAMES(
        flags,
        protocolId,
        duration,
        clientId
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CONNECT";
    }
    
    
};

} // namespace message

} // namespace mqttsn


