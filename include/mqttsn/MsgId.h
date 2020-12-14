// Generated by commsdsl2comms v3.6.0

/// @file
/// @brief Contains definition of message ids enumeration.

#pragma once

#include <cstdint>
#include "mqttsn/Version.h"

namespace mqttsn
{

/// @brief Message ids enumeration.
enum MsgId : std::uint8_t
{
    MsgId_Advertise = 0x00U, ///< message id of <b>ADVERTISE</b> message.
    MsgId_Searchgw = 0x01U, ///< message id of <b>SEARCHGW</b> message.
    MsgId_Gwinfo = 0x02U, ///< message id of <b>GWINFO</b> message.
    MsgId_Connect = 0x04U, ///< message id of <b>CONNECT</b> message.
    MsgId_Connack = 0x05U, ///< message id of <b>CONNACK</b> message.
    MsgId_Willtopicreq = 0x06U, ///< message id of <b>WILLTOPICREQ</b> message.
    MsgId_Willtopic = 0x07U, ///< message id of <b>WILLTOPIC</b> message.
    MsgId_Willmsgreq = 0x08U, ///< message id of <b>WILLMSGREQ</b> message.
    MsgId_Willmsg = 0x09U, ///< message id of <b>WILLMSG</b> message.
    MsgId_Register = 0x0AU, ///< message id of <b>REGISTER</b> message.
    MsgId_Regack = 0x0BU, ///< message id of <b>REGACK</b> message.
    MsgId_Publish = 0x0CU, ///< message id of <b>PUBLISH</b> message.
    MsgId_Puback = 0x0DU, ///< message id of <b>PUBACK</b> message.
    MsgId_Pubcomp = 0x0EU, ///< message id of <b>PUBCOMP</b> message.
    MsgId_Pubrec = 0x0FU, ///< message id of <b>PUBREC</b> message.
    MsgId_Pubrel = 0x10U, ///< message id of <b>PUBREL</b> message.
    MsgId_Subscribe = 0x12U, ///< message id of <b>SUBSCRIBE</b> message.
    MsgId_Suback = 0x13U, ///< message id of <b>SUBACK</b> message.
    MsgId_Unsubscribe = 0x14U, ///< message id of <b>UNSUBSCRIBE</b> message.
    MsgId_Unsuback = 0x15U, ///< message id of <b>UNSUBACK</b> message.
    MsgId_Pingreq = 0x16U, ///< message id of <b>PINGREQ</b> message.
    MsgId_Pingresp = 0x17U, ///< message id of <b>PINGRESP</b> message.
    MsgId_Disconnect = 0x18U, ///< message id of <b>DISCONNECT</b> message.
    MsgId_Willtopicupd = 0x1AU, ///< message id of <b>WILLTOPICUPD</b> message.
    MsgId_Willtopicresp = 0x1BU, ///< message id of <b>WILLTOPICRESP</b> message.
    MsgId_Willmsgupd = 0x1CU, ///< message id of <b>WILLMSGUPD</b> message.
    MsgId_Willmsgresp = 0x1DU, ///< message id of <b>WILLMSGRESP</b> message.
    
    // --- Extra values generated for convenience ---
    MsgId_FirstValue = 0x00U, ///< First defined value.
    MsgId_LastValue = 0x1DU, ///< Last defined value.
    MsgId_ValuesLimit = 0x1EU, ///< Upper limit for defined values.
    
};

} // namespace mqttsn


