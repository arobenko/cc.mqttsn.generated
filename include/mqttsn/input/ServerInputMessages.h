/// @file
/// @brief Contains definition of all server input messages bundle.

#pragma once

#include <tuple>
#include "mqttsn/message/Connect.h"
#include "mqttsn/message/Disconnect.h"
#include "mqttsn/message/Gwinfo.h"
#include "mqttsn/message/Pingreq.h"
#include "mqttsn/message/Pingresp.h"
#include "mqttsn/message/Puback.h"
#include "mqttsn/message/Pubcomp.h"
#include "mqttsn/message/Publish.h"
#include "mqttsn/message/Pubrec.h"
#include "mqttsn/message/Pubrel.h"
#include "mqttsn/message/Regack.h"
#include "mqttsn/message/Register.h"
#include "mqttsn/message/Searchgw.h"
#include "mqttsn/message/Subscribe.h"
#include "mqttsn/message/Unsubscribe.h"
#include "mqttsn/message/Willmsg.h"
#include "mqttsn/message/Willmsgupd.h"
#include "mqttsn/message/Willtopic.h"
#include "mqttsn/message/Willtopicupd.h"
#include "mqttsn/options/DefaultOptions.h"

namespace mqttsn
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = mqttsn::options::DefaultOptions>
using ServerInputMessages =
    std::tuple<
        mqttsn::message::Searchgw<TBase, TOpt>,
        mqttsn::message::Gwinfo<TBase, TOpt>,
        mqttsn::message::Connect<TBase, TOpt>,
        mqttsn::message::Willtopic<TBase, TOpt>,
        mqttsn::message::Willmsg<TBase, TOpt>,
        mqttsn::message::Register<TBase, TOpt>,
        mqttsn::message::Regack<TBase, TOpt>,
        mqttsn::message::Publish<TBase, TOpt>,
        mqttsn::message::Puback<TBase, TOpt>,
        mqttsn::message::Pubcomp<TBase, TOpt>,
        mqttsn::message::Pubrec<TBase, TOpt>,
        mqttsn::message::Pubrel<TBase, TOpt>,
        mqttsn::message::Subscribe<TBase, TOpt>,
        mqttsn::message::Unsubscribe<TBase, TOpt>,
        mqttsn::message::Pingreq<TBase, TOpt>,
        mqttsn::message::Pingresp<TBase, TOpt>,
        mqttsn::message::Disconnect<TBase, TOpt>,
        mqttsn::message::Willtopicupd<TBase, TOpt>,
        mqttsn::message::Willmsgupd<TBase, TOpt>
    >;

} // namespace input

} // namespace mqttsn

