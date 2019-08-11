#include "Willtopic.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Willtopic.h"
#include "cc_plugin/field/Flags.h"
#include "cc_plugin/field/WillTopic.h"

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
    using Field = mqttsn::message::WilltopicFields<>::Flags;
    auto props = cc_plugin::field::createProps_flags(Field::name());
    return props;
    
}

static QVariantMap createProps_willTopic()
{
    using Field = mqttsn::message::WilltopicFields<>::WillTopic;
    auto props = cc_plugin::field::createProps_willTopic(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_flags());
    props.append(createProps_willTopic());
    return props;
}

} // namespace

class WilltopicImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Willtopic<mqttsn::cc_plugin::Message>,
        WilltopicImpl
    >
{
public:
    WilltopicImpl() = default;
    WilltopicImpl(const WilltopicImpl&) = delete;
    WilltopicImpl(WilltopicImpl&&) = delete;
    virtual ~WilltopicImpl() = default;
    WilltopicImpl& operator=(const WilltopicImpl&) = default;
    WilltopicImpl& operator=(WilltopicImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Willtopic::Willtopic() : m_pImpl(new WilltopicImpl) {}
Willtopic::~Willtopic() = default;

Willtopic& Willtopic::operator=(const Willtopic& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willtopic& Willtopic::operator=(Willtopic&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willtopic::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Willtopic::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Willtopic::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Willtopic::resetImpl()
{
    m_pImpl->reset();
}

bool Willtopic::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Willtopic*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Willtopic::MsgIdParamType Willtopic::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Willtopic::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Willtopic::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Willtopic::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Willtopic::lengthImpl() const
{
    return m_pImpl->length();
}

bool Willtopic::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


