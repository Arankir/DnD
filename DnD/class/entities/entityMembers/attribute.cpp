#include "attribute.h"

Attribute::Attribute()
{
}

std::string Attribute::className() {
    return "Attribute";
}

SerializedData Attribute::serialize() const
{
    //TODO
    return "";
}

void Attribute::deserialize(const SerializedData &a_serializedData)
{
    //TODO;
}

AttributeUniqueName Attribute::attributeUniqueName() const
{
    return m_attributeUniqueName;
}
