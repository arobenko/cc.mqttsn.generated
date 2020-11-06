// Generated by commsdsl2comms v3.5.3

/// @file
/// @brief Contains definition of <b>"PUBLISH"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/Data.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/Flags.h"
#include "mqttsn/field/MessageId.h"
#include "mqttsn/field/TopicId.h"
#include "mqttsn/message/PublishCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Publish.
/// @tparam TOpt Extra options
/// @see @ref Publish
/// @headerfile "mqttsn/message/Publish.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct PublishFields
{
    /// @brief Definition of <b>"Flags"</b> field.
    using Flags =
        mqttsn::field::Flags<
            TOpt
        >;
    
    /// @brief Definition of <b>"TopicId"</b> field.
    using TopicId =
        mqttsn::field::TopicId<
            TOpt
        >;
    
    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        mqttsn::field::MessageId<
            TOpt
        >;
    
    /// @brief Definition of <b>"Data"</b> field.
    using Data =
        mqttsn::field::Data<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags,
        TopicId,
        MsgId,
        Data
    >;
};

/// @brief Definition of <b>"PUBLISH"</b> message class.
/// @details
///     See @ref PublishFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Publish.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Publish : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Publish>,
        comms::option::def::FieldsImpl<typename PublishFields<TOpt>::All>,
        comms::option::def::MsgType<Publish<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Publish>,
            comms::option::def::FieldsImpl<typename PublishFields<TOpt>::All>,
            comms::option::def::MsgType<Publish<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_flags type and @b field_flags() access fuction
    ///         for @ref PublishFields::Flags field.
    ///     @li @b Field_topicId type and @b field_topicId() access fuction
    ///         for @ref PublishFields::TopicId field.
    ///     @li @b Field_msgId type and @b field_msgId() access fuction
    ///         for @ref PublishFields::MsgId field.
    ///     @li @b Field_data type and @b field_data() access fuction
    ///         for @ref PublishFields::Data field.
    COMMS_MSG_FIELDS_NAMES(
        flags,
        topicId,
        msgId,
        data
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 5U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return mqttsn::message::PublishCommon::name();
    }
    
    
};

} // namespace message

} // namespace mqttsn


