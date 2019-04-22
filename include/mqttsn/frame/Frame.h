/// @file
/// @brief Contains definition of <b>"Frame"</b> frame class.

#pragma once

#include "comms/protocol/MsgDataLayer.h"
#include "comms/protocol/MsgIdLayer.h"
#include "mqttsn/field/MsgId.h"
#include "mqttsn/field/MsgLengthField.h"
#include "mqttsn/frame/layer/Length.h"
#include "mqttsn/input/AllMessages.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace frame
{

/// @brief Layers definition of @ref Frame frame class.
/// @tparam TOpt Protocol options.
/// @see @ref Frame
/// @headerfile "mqttsn/frame/Frame.h"
template <typename TOpt = mqttsn::options::DefaultOptions>
struct FrameLayers
{
    /// @brief Definition of layer "Data".
    using Data =
        comms::protocol::MsgDataLayer<
            typename TOpt::frame::FrameLayers::Data
        >;
    
    /// @brief Definition of layer "Id".
    template <typename TMessage, typename TAllMessages>
    using Id =
        comms::protocol::MsgIdLayer<
            mqttsn::field::MsgId<TOpt>,
            TMessage,
            TAllMessages,
            Data,
            typename TOpt::frame::FrameLayers::Id
        >;
    
    /// @brief Definition of layer "Length".
    template <typename TMessage, typename TAllMessages>
    using Length =
        mqttsn::frame::layer::Length<
            mqttsn::field::MsgLengthField<TOpt>,
            Id<TMessage, TAllMessages>,
            typename TOpt::frame::FrameLayers::Length
        >;
    
    /// @brief Final protocol stack definition.
    template<typename TMessage, typename TAllMessages>
    using Stack = Length<TMessage, TAllMessages>;
    
};

/// @brief Definition of <b>"Frame"</b> frame class.
/// @tparam TMessage Common interface class of all the messages
/// @tparam TAllMessages All supported input messages.
/// @tparam TOpt Frame definition options
/// @headerfile "mqttsn/frame/Frame.h"
template <
   typename TMessage,
   typename TAllMessages = mqttsn::input::AllMessages<TMessage>,
   typename TOpt = mqttsn::options::DefaultOptions
>
class Frame : public
    FrameLayers<TOpt>::template Stack<TMessage, TAllMessages>
{
    using Base =
        typename FrameLayers<TOpt>::template Stack<TMessage, TAllMessages>;
public:
    /// @brief Allow access to frame definition layers.
    /// @details See definition of @b COMMS_PROTOCOL_LAYERS_ACCESS macro
    ///     from COMMS library for details.
    ///
    ///     The generated functions are:
    ///     @li layer_data() for @ref FrameLayers::Data layer.
    ///     @li layer_id() for @ref FrameLayers::Id layer.
    ///     @li layer_length() for @ref FrameLayers::Length layer.
    COMMS_PROTOCOL_LAYERS_ACCESS(
        data,
        id,
        length
    );
};

} // namespace frame

} // namespace mqttsn


