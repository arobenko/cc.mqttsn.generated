// Generated by commsdsl2comms v3.6.2

#include "Unsubscribe.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Unsubscribe.h"
#include "cc_plugin/field/Flags.h"
#include "cc_plugin/field/MessageId.h"
#include "cc_plugin/field/TopicId.h"
#include "cc_plugin/field/TopicName.h"

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
    using Field = mqttsn::message::UnsubscribeFields<>::Flags;
    auto props = cc_plugin::field::createProps_flags(Field::name());
    return props;
    
}

static QVariantMap createProps_msgId()
{
    using Field = mqttsn::message::UnsubscribeFields<>::MsgId;
    auto props = cc_plugin::field::createProps_messageId(Field::name());
    return props;
    
}

struct TopicIdMembers
{
    static QVariantMap createProps_topicId()
    {
        using Field = mqttsn::message::UnsubscribeFields<>::TopicIdMembers::TopicId;
        auto props = cc_plugin::field::createProps_topicId(Field::name());
        return props;
        
    }
    
};

static QVariantMap createProps_topicId()
{
    using Field = mqttsn::message::UnsubscribeFields<>::TopicId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(TopicIdMembers::createProps_topicId())
            .asMap();
    
}

struct TopicNameMembers
{
    static QVariantMap createProps_topicName()
    {
        using Field = mqttsn::message::UnsubscribeFields<>::TopicNameMembers::TopicName;
        auto props = cc_plugin::field::createProps_topicName(Field::name());
        return props;
        
    }
    
};

static QVariantMap createProps_topicName()
{
    using Field = mqttsn::message::UnsubscribeFields<>::TopicName;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(TopicNameMembers::createProps_topicName())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    props.append(createProps_msgId());
    props.append(createProps_topicId());
    props.append(createProps_topicName());
    return props;
}

} // namespace

class UnsubscribeImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Unsubscribe<mqttsn::cc_plugin::Message>,
        UnsubscribeImpl
    >
{
public:
    UnsubscribeImpl() = default;
    UnsubscribeImpl(const UnsubscribeImpl&) = delete;
    UnsubscribeImpl(UnsubscribeImpl&&) = delete;
    virtual ~UnsubscribeImpl() = default;
    UnsubscribeImpl& operator=(const UnsubscribeImpl&) = default;
    UnsubscribeImpl& operator=(UnsubscribeImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Unsubscribe::Unsubscribe() : m_pImpl(new UnsubscribeImpl) {}
Unsubscribe::~Unsubscribe() = default;

Unsubscribe& Unsubscribe::operator=(const Unsubscribe& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Unsubscribe& Unsubscribe::operator=(Unsubscribe&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Unsubscribe::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Unsubscribe::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Unsubscribe::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Unsubscribe::resetImpl()
{
    m_pImpl->reset();
}

bool Unsubscribe::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Unsubscribe*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Unsubscribe::MsgIdParamType Unsubscribe::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Unsubscribe::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Unsubscribe::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Unsubscribe::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Unsubscribe::lengthImpl() const
{
    return m_pImpl->length();
}

bool Unsubscribe::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


