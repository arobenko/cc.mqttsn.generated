// Generated by commsdsl2comms v3.6.2

#include "Flags.h"

#include "cc_plugin/field/Qos.h"
#include "comms_champion/property/field.h"
#include "mqttsn/field/Flags.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

namespace
{

struct FlagsMembers
{
    static QVariantMap createProps_topicIdType(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqttsn::field::FlagsMembers<>::TopicIdType;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("Normal", 0)
                .add("PredefinedTopicId", 1)
                .add("ShortTopicName", 2)
                .asMap();
        
    }
    
    static QVariantMap createProps_mid(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqttsn::field::FlagsMembers<>::Mid;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "CleanSession")
                .add(1U, "Will")
                .add(2U, "Retain")
                .asMap();
        
    }
    
    static QVariantMap createProps_qos(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqttsn::field::FlagsMembers<>::Qos;
        auto props = cc_plugin::field::createProps_qos(Field::name(), true);
        return props;
        
    }
    
    static QVariantMap createProps_high(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = mqttsn::field::FlagsMembers<>::High;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "Dup")
                .asMap();
        
    }
    
};

} // namespace


QVariantMap createProps_flags(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::Flags<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(FlagsMembers::createProps_topicIdType(serHidden))
            .add(FlagsMembers::createProps_mid(serHidden))
            .add(FlagsMembers::createProps_qos(serHidden))
            .add(FlagsMembers::createProps_high(serHidden))
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


