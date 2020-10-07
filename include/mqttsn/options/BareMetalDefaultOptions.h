// Generated by commsdsl2comms v3.5.2

/// @file
/// @brief Contains definition of protocol default options for bare-metal application
///    where usage of dynamic memory allocation is disabled.

#pragma once

#ifndef DEFAULT_SEQ_FIXED_STORAGE_SIZE
/// @brief Define default fixed size for various sequence fields
/// @details May be defined during compile time to change the default value.
#define DEFAULT_SEQ_FIXED_STORAGE_SIZE 32
#endif

#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace options
{

/// @brief Default options for bare-metal application where usage of dynamic
///    memory allocation is diabled.
/// @tparam TBase Options to use as a basis.
template <typename TBase = mqttsn::options::DefaultOptions>
struct BareMetalDefaultOptionsT : public TBase
{
    /// @brief Extra options for fields.
    struct field : public TBase::field
    {
        /// @brief Extra options for @ref
        ///     mqttsn::field::ClientId field.
        using ClientId = 
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::ClientId
            >;
        /// @brief Extra options for @ref
        ///     mqttsn::field::Data field.
        using Data = 
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::Data
            >;
        /// @brief Extra options for @ref
        ///     mqttsn::field::GwAdd field.
        using GwAdd = 
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::GwAdd
            >;
        /// @brief Extra options for @ref
        ///     mqttsn::field::TopicName field.
        using TopicName = 
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::TopicName
            >;
        /// @brief Extra options for @ref
        ///     mqttsn::field::WillMsg field.
        using WillMsg = 
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::WillMsg
            >;
        /// @brief Extra options for @ref
        ///     mqttsn::field::WillTopic field.
        using WillTopic = 
            std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE>,
                typename TBase::field::WillTopic
            >;
    }; // struct field
    
    /// @brief Extra options for messages.
    struct message : public TBase::message
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
    struct frame : public TBase::frame
    {
        /// @brief Extra options for Layers of
        ///     @ref mqttsn::frame::Frame frame.
        struct FrameLayers : public TBase::frame::FrameLayers
        {
            /// @brief Extra options for @ref
            ///     mqttsn::frame::FrameLayers::Data layer.
            using Data = std::tuple<
                comms::option::app::FixedSizeStorage<DEFAULT_SEQ_FIXED_STORAGE_SIZE * 8>,
                typename TBase::frame::FrameLayers::Data
            >;
            
            /// @brief Extra options for @ref
            ///     mqttsn::frame::FrameLayers::Id layer.
            using Id = std::tuple<
                comms::option::app::InPlaceAllocation,
                typename TBase::frame::FrameLayers::Id
            >;
            
        }; // struct FrameLayers
        
    }; // struct frame
    
    
};

/// @brief Alias to @ref BareMetalDefaultOptionsT with default template parameter.
using BareMetalDefaultOptions = BareMetalDefaultOptionsT<>;

} // namespace options

} // namespace mqttsn


