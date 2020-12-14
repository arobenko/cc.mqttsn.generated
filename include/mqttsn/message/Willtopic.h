// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of <b>"WILLTOPIC"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/Flags.h"
#include "mqttsn/field/WillTopic.h"
#include "mqttsn/message/WilltopicCommon.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Willtopic.
/// @tparam TOpt Extra options
/// @see @ref Willtopic
/// @headerfile "mqttsn/message/Willtopic.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct WilltopicFields
{
    /// @brief Scope for all the member fields of
    ///     @ref Flags optional.
    struct FlagsMembers
    {
        /// @brief Definition of <b>"FlagsField"</b> field.
        struct FlagsField : public
            mqttsn::field::Flags<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return mqttsn::message::WilltopicFieldsCommon::FlagsMembersCommon::FlagsFieldCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"Flags"</b> field.
    struct Flags : public
        comms::field::Optional<
            typename FlagsMembers::FlagsField
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return mqttsn::message::WilltopicFieldsCommon::FlagsCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"WillTopic"</b> field.
    using WillTopic =
        mqttsn::field::WillTopic<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags,
        WillTopic
    >;
};

/// @brief Definition of <b>"WILLTOPIC"</b> message class.
/// @details
///     See @ref WilltopicFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Willtopic.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Willtopic : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::Willtopic,
        comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willtopic>,
        comms::option::def::FieldsImpl<typename WilltopicFields<TOpt>::All>,
        comms::option::def::MsgType<Willtopic<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::Willtopic,
            comms::option::def::StaticNumIdImpl<mqttsn::MsgId_Willtopic>,
            comms::option::def::FieldsImpl<typename WilltopicFields<TOpt>::All>,
            comms::option::def::MsgType<Willtopic<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_flags type and @b field_flags() access fuction
    ///         for @ref WilltopicFields::Flags field.
    ///     @li @b Field_willTopic type and @b field_willTopic() access fuction
    ///         for @ref WilltopicFields::WillTopic field.
    COMMS_MSG_FIELDS_NAMES(
        flags,
        willTopic
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return mqttsn::message::WilltopicCommon::name();
    }
    
    /// @brief Custom read functionality
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::doRead(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
            
        bool hasMissingFlags = field_flags().isMissing();
        bool hasEmptyTopic = field_willTopic().value().empty();
        if (hasMissingFlags != hasEmptyTopic) {
            return comms::ErrorStatus::InvalidMsgData;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        
        bool hasEmptyTopic = field_willTopic().value().empty();
        if ((hasEmptyTopic && field_flags().isMissing()) ||
            ((!hasEmptyTopic) && field_flags().doesExist())) {
            return updated;
        }
        
        if (hasEmptyTopic) {
            field_flags().setMissing();
            return true;
        }
        
        field_flags().setExists();
        return true;
    }
    
    
};

} // namespace message

} // namespace mqttsn


