#include "Willmsgresp.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Willmsgresp.h"
#include "cc_plugin/field/ReturnCode.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_returnCode()
{
    using Field = mqttsn::message::WillmsgrespFields<>::ReturnCode;
    auto props = cc_plugin::field::createProps_returnCode(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_returnCode());
    return props;
}

} // namespace

class WillmsgrespImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Willmsgresp<mqttsn::cc_plugin::Message>,
        WillmsgrespImpl
    >
{
public:
    WillmsgrespImpl() = default;
    WillmsgrespImpl(const WillmsgrespImpl&) = delete;
    WillmsgrespImpl(WillmsgrespImpl&&) = delete;
    virtual ~WillmsgrespImpl() = default;
    WillmsgrespImpl& operator=(const WillmsgrespImpl&) = default;
    WillmsgrespImpl& operator=(WillmsgrespImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Willmsgresp::Willmsgresp() : m_pImpl(new WillmsgrespImpl) {}
Willmsgresp::~Willmsgresp() = default;

Willmsgresp& Willmsgresp::operator=(const Willmsgresp& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Willmsgresp& Willmsgresp::operator=(Willmsgresp&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Willmsgresp::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Willmsgresp::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Willmsgresp::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Willmsgresp::resetImpl()
{
    m_pImpl->reset();
}

bool Willmsgresp::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Willmsgresp*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Willmsgresp::MsgIdParamType Willmsgresp::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Willmsgresp::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Willmsgresp::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Willmsgresp::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Willmsgresp::lengthImpl() const
{
    return m_pImpl->length();
}

bool Willmsgresp::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


