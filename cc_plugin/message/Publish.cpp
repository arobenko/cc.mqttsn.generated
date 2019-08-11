#include "Publish.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Publish.h"
#include "cc_plugin/field/Data.h"
#include "cc_plugin/field/Flags.h"
#include "cc_plugin/field/MessageId.h"
#include "cc_plugin/field/TopicId.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_flags()
{
    using Field = mqttsn::message::PublishFields<>::Flags;
    auto props = cc_plugin::field::createProps_flags(Field::name());
    return props;
    
}

static QVariantMap createProps_topicId()
{
    using Field = mqttsn::message::PublishFields<>::TopicId;
    auto props = cc_plugin::field::createProps_topicId(Field::name());
    return props;
    
}

static QVariantMap createProps_msgId()
{
    using Field = mqttsn::message::PublishFields<>::MsgId;
    auto props = cc_plugin::field::createProps_messageId(Field::name());
    return props;
    
}

static QVariantMap createProps_data()
{
    using Field = mqttsn::message::PublishFields<>::Data;
    auto props = cc_plugin::field::createProps_data(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    props.append(createProps_topicId());
    props.append(createProps_msgId());
    props.append(createProps_data());
    return props;
}

} // namespace

class PublishImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Publish<mqttsn::cc_plugin::Message>,
        PublishImpl
    >
{
public:
    PublishImpl() = default;
    PublishImpl(const PublishImpl&) = delete;
    PublishImpl(PublishImpl&&) = delete;
    virtual ~PublishImpl() = default;
    PublishImpl& operator=(const PublishImpl&) = default;
    PublishImpl& operator=(PublishImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Publish::Publish() : m_pImpl(new PublishImpl) {}
Publish::~Publish() = default;

Publish& Publish::operator=(const Publish& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Publish& Publish::operator=(Publish&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Publish::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Publish::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Publish::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Publish::resetImpl()
{
    m_pImpl->reset();
}

bool Publish::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Publish*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Publish::MsgIdParamType Publish::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Publish::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Publish::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Publish::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Publish::lengthImpl() const
{
    return m_pImpl->length();
}

bool Publish::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


