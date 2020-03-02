// Generated by commsdsl2comms v3.3.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref mqttsn::field::Flags field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "mqttsn/field/QoSCommon.h"

namespace mqttsn
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref mqttsn::field::Flags field.
struct FlagsMembersCommon
{
    /// @brief Common types and functions for
    ///     @ref mqttsn::field::FlagsMembers::TopicIdType field.
    struct TopicIdTypeCommon
    {
        /// @brief Values enumerator for
        ///     @ref mqttsn::field::FlagsMembers::TopicIdType field.
        enum class ValueType : std::uint8_t
        {
            Normal = 0, ///< value @b Normal
            PredefinedTopicId = 1, ///< value @b PredefinedTopicId
            ShortTopicName = 2, ///< value @b ShortTopicName
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref mqttsn::field::FlagsMembers::TopicIdType field.
        static const char* name()
        {
            return "TopicIdType";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Normal",
                "PredefinedTopicId",
                "ShortTopicName"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref mqttsn::field::FlagsMembers::TopicIdType field.
    using TopicIdTypeVal = TopicIdTypeCommon::ValueType;
    
    /// @brief Common functions for
    ///     @ref mqttsn::field::FlagsMembers::Mid field.
    struct MidCommon
    {
        /// @brief Name of the @ref mqttsn::field::FlagsMembers::Mid field.
        static const char* name()
        {
            return "";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref mqttsn::field::FlagsMembers::Mid field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "CleanSession",
                "Will",
                "Retain"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref mqttsn::field::FlagsMembers::QoS field.
    using QoSCommon = mqttsn::field::QoSCommon;
    
    /// @brief Common functions for
    ///     @ref mqttsn::field::FlagsMembers::High field.
    struct HighCommon
    {
        /// @brief Name of the @ref mqttsn::field::FlagsMembers::High field.
        static const char* name()
        {
            return "";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref mqttsn::field::FlagsMembers::High field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "Dup"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Scope for all the common definitions of the
///     @ref mqttsn::field::Flags field.
struct FlagsCommon
{
    /// @brief Name of the @ref mqttsn::field::Flags field.
    static const char* name()
    {
        return "Flags";
    }
    
};


} // namespace field

} // namespace mqttsn


