// Generated by commsdsl2comms v3.5.0

/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace mqttsn
{

namespace options
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for fields.
    struct field
    {
        /// @brief Extra options for @ref
        ///     mqttsn::field::ClientId field.
        using ClientId = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     mqttsn::field::Data field.
        using Data = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     mqttsn::field::GwAdd field.
        using GwAdd = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     mqttsn::field::TopicName field.
        using TopicName = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     mqttsn::field::WillMsg field.
        using WillMsg = comms::option::app::EmptyOption;
        
        /// @brief Extra options for @ref
        ///     mqttsn::field::WillTopic field.
        using WillTopic = comms::option::app::EmptyOption;
        
    }; // struct field
    
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for
        ///     @ref mqttsn::message::Advertise message.
        using Advertise = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Connack message.
        using Connack = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Connect message.
        using Connect = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Searchgw message.
        using Searchgw = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Suback message.
        using Suback = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Subscribe message.
        using Subscribe = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Unsuback message.
        using Unsuback = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Unsubscribe message.
        using Unsubscribe = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsg message.
        using Willmsg = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsgreq message.
        using Willmsgreq = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsgresp message.
        using Willmsgresp = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willmsgupd message.
        using Willmsgupd = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopic message.
        using Willtopic = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopicreq message.
        using Willtopicreq = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopicresp message.
        using Willtopicresp = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref mqttsn::message::Willtopicupd message.
        using Willtopicupd = comms::option::app::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of
        ///     @ref mqttsn::frame::Frame frame.
        struct FrameLayers
        {
            /// @brief Extra options for @ref
            ///     mqttsn::frame::FrameLayers::Data layer.
            using Data = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     mqttsn::frame::FrameLayers::Id layer.
            using Id = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     mqttsn::frame::FrameLayers::Length
            ///     layer.
            using Length = comms::option::app::EmptyOption;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace mqttsn


