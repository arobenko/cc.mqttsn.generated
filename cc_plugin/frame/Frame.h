// Generated by commsdsl2comms v3.6.0

#pragma once

#include "mqttsn/frame/Frame.h"
#include "cc_plugin/Message.h"
#include "cc_plugin/input/AllMessages.h"

namespace mqttsn
{

namespace cc_plugin
{

namespace frame
{

using Frame =
    mqttsn::frame::Frame<
        mqttsn::cc_plugin::Message,
        mqttsn::cc_plugin::input::AllMessages
    >;

} // namespace frame

} // namespace cc_plugin

} // namespace mqttsn


