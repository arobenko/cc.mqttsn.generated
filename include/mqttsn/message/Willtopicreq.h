// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of <b>"WILLTOPICREQ"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/message/WilltopicreqCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Willtopicreq.
/// @tparam TOpt Extra options
/// @see @ref Willtopicreq
/// @headerfile "mqttsn/message/Willtopicreq.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct WilltopicreqFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"WILLTOPICREQ"</b> message class.
/// @details
///     See @ref WilltopicreqFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Willtopicreq.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Willtopicreq : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Willtopicreq,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willtopicreq>,
        comms::option::def::FieldsImpl<typename WilltopicreqFields<TOpt>::All>,
        comms::option::def::MsgType<Willtopicreq<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Willtopicreq,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willtopicreq>,
            comms::option::def::FieldsImpl<typename WilltopicreqFields<TOpt>::All>,
            comms::option::def::MsgType<Willtopicreq<TMsgBase, TOpt> >,
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
        return mqttsn::message::WilltopicreqCommon::name();
    }
    
    
};

} // namespace message

} // namespace mqttsn


