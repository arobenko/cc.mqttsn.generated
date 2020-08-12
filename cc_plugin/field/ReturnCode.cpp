// Generated by commsdsl2comms v3.5.0

#include "ReturnCode.h"

#include "comms_champion/property/field.h"
#include "mqttsn/field/ReturnCode.h"


namespace cc = comms_champion;

namespace mqttsn
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_returnCode(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = mqttsn::field::ReturnCode<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("Accepted", 0)
            .add("Congestion", 1)
            .add("InvalidTopicId", 2)
            .add("NotSupported", 3)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace mqttsn


