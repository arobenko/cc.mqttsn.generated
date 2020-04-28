// Generated by commsdsl2comms v3.4.0

#pragma once

#include "comms_champion/MessageBase.h"
#include "mqttsn/Message.h"

namespace mqttsn
{

namespace cc_plugin
{

class Message : public
    comms_champion::MessageBase<
        mqttsn::Message
    >
{
protected:
    virtual QString idAsStringImpl() const override;
    virtual const QVariantList& extraTransportFieldsPropertiesImpl() const override;
};

} // namespace cc_plugin

} // namespace mqttsn



