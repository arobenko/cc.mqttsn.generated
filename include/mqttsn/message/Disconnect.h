/// @file
/// @brief Contains definition of <b>"DISCONNECT"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/Duration.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Disconnect.
/// @tparam TOpt Extra options
/// @see @ref Disconnect
/// @headerfile "mqttsn/message/Disconnect.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct DisconnectFields
{
    /// @brief Scope for all the member fields of @ref Duration optional.
    struct DurationMembers
    {
        /// @brief Definition of <b>"Duration"</b> field.
        using Duration =
            mqttsn::field::Duration<
                TOpt
            >;
        
    };
    
    /// @brief Definition of <b>"Duration"</b> field.
    struct Duration : public
        comms::field::Optional<
            typename DurationMembers::Duration,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Duration";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Duration
    >;
};

/// @brief Definition of <b>"DISCONNECT"</b> message class.
/// @details
///     See @ref DisconnectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Disconnect.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Disconnect : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Disconnect>,
        comms::option::def::FieldsImpl<typename DisconnectFields<TOpt>::All>,
        comms::option::def::MsgType<Disconnect<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Disconnect>,
            comms::option::def::FieldsImpl<typename DisconnectFields<TOpt>::All>,
            comms::option::def::MsgType<Disconnect<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_duration type and @b field_duration() fuction
    ///         for @ref DisconnectFields::Duration field.
    COMMS_MSG_FIELDS_NAMES(
        duration
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 2U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "DISCONNECT";
    }
    
    
};

} // namespace message

} // namespace mqttsn


