// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains definition of <b>"PINGRESP"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/message/PingrespCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Pingresp.
/// @tparam TOpt Extra options
/// @see @ref Pingresp
/// @headerfile "mqttsn/message/Pingresp.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct PingrespFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"PINGRESP"</b> message class.
/// @details
///     See @ref PingrespFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Pingresp.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Pingresp : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Pingresp>,
        comms::option::def::FieldsImpl<typename PingrespFields<TOpt>::All>,
        comms::option::def::MsgType<Pingresp<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Pingresp>,
            comms::option::def::FieldsImpl<typename PingrespFields<TOpt>::All>,
            comms::option::def::MsgType<Pingresp<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 0U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return mqttsn::message::PingrespCommon::name();
    }
    
    
};

} // namespace message

} // namespace mqttsn


