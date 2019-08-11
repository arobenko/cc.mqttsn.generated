#include "Searchgw.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "mqttsn/message/Searchgw.h"
#include "cc_plugin/field/Radius.h"

namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_radius()
{
    using Field = mqttsn::message::SearchgwFields<>::Radius;
    auto props = cc_plugin::field::createProps_radius(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_radius());
    return props;
}

} // namespace

class SearchgwImpl : public
    comms_champion::ProtocolMessageBase<
        mqttsn::message::Searchgw<mqttsn::cc_plugin::Message>,
        SearchgwImpl
    >
{
public:
    SearchgwImpl() = default;
    SearchgwImpl(const SearchgwImpl&) = delete;
    SearchgwImpl(SearchgwImpl&&) = delete;
    virtual ~SearchgwImpl() = default;
    SearchgwImpl& operator=(const SearchgwImpl&) = default;
    SearchgwImpl& operator=(SearchgwImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

Searchgw::Searchgw() : m_pImpl(new SearchgwImpl) {}
Searchgw::~Searchgw() = default;

Searchgw& Searchgw::operator=(const Searchgw& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

Searchgw& Searchgw::operator=(Searchgw&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* Searchgw::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& Searchgw::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void Searchgw::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void Searchgw::resetImpl()
{
    m_pImpl->reset();
}

bool Searchgw::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const Searchgw*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

Searchgw::MsgIdParamType Searchgw::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus Searchgw::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus Searchgw::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool Searchgw::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t Searchgw::lengthImpl() const
{
    return m_pImpl->length();
}

bool Searchgw::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace mqttsn


