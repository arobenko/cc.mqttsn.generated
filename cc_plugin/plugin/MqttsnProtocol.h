// Generated by commsdsl2comms v3.4.0

#pragma once

#include "comms_champion/Protocol.h"

namespace mqttsn
{

namespace cc_plugin
{

namespace plugin
{

class MqttsnProtocolImpl;
class MqttsnProtocol : public comms_champion::Protocol
{
public:
    MqttsnProtocol();
    virtual ~MqttsnProtocol();

protected:
    virtual const QString& nameImpl() const override;
    virtual MessagesList readImpl(const comms_champion::DataInfo& dataInfo, bool final) override;
    virtual comms_champion::DataInfoPtr writeImpl(comms_champion::Message& msg) override;
    virtual MessagesList createAllMessagesImpl() override;
    virtual comms_champion::MessagePtr createMessageImpl(const QString& idAsString, unsigned idx) override;
    virtual UpdateStatus updateMessageImpl(comms_champion::Message& msg) override;
    virtual comms_champion::MessagePtr cloneMessageImpl(const comms_champion::Message& msg) override;
    virtual comms_champion::MessagePtr createInvalidMessageImpl() override;
    virtual comms_champion::MessagePtr createRawDataMessageImpl() override;
    virtual comms_champion::MessagePtr createExtraInfoMessageImpl() override;

private:
    std::unique_ptr<MqttsnProtocolImpl> m_pImpl;
};

} // namespace plugin

} // namespace cc_plugin

} // namespace mqttsn


