/// @file
/// @brief Contains definition of <b>"GWINFO"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "mqttsn/MsgId.h"
#include "mqttsn/field/FieldBase.h"
#include "mqttsn/field/GwAdd.h"
#include "mqttsn/field/GwId.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace message
{

/// @brief Fields of @ref Gwinfo.
/// @tparam TOpt Extra options
/// @see @ref Gwinfo
/// @headerfile "mqttsn/message/Gwinfo.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct GwinfoFields
{
    /// @brief Definition of <b>"GwId"</b> field.
    using GwId =
        mqttsn::field::GwId<
            TOpt
        >;
    
    /// @brief Definition of <b>"GwAdd"</b> field.
    using GwAdd =
        mqttsn::field::GwAdd<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        GwId,
        GwAdd
    >;
};

/// @brief Definition of <b>"GWINFO"</b> message class.
/// @details
///     See @ref GwinfoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "mqttsn/message/Gwinfo.h"
template <typename TMsgBase, typename TOpt = mqttsn::options::DefaultOptions>
class Gwinfo : public
    comms::MessageBase<
        TMsgBase,
        comms::option::StaticNumIdImpl<mqttsn::MsgId_Gwinfo>,
        comms::option::FieldsImpl<typename GwinfoFields<TOpt>::All>,
        comms::option::MsgType<Gwinfo<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::StaticNumIdImpl<mqttsn::MsgId_Gwinfo>,
            comms::option::FieldsImpl<typename GwinfoFields<TOpt>::All>,
            comms::option::MsgType<Gwinfo<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_gwId() for @ref GwinfoFields::GwId field.
    ///     @li @b field_gwAdd() for @ref GwinfoFields::GwAdd field.
    COMMS_MSG_FIELDS_ACCESS(
        gwId,
        gwAdd
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "GWINFO";
    }
    
    
};

} // namespace message

} // namespace mqttsn


