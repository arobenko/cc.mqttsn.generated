#include "QoS.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/QoS.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_qoS(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::QoS<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("AtMostOnceDelivery", 0)
            .add("AtLeastOnceDelivery", 1)
            .add("ExactlyOnceDelivery", 2)
            .add("NoGwPublish", 3)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn

