#pragma once

#include "general/image.h"
#include "general/languagestring.h"
#include "network/networksendable.h"

typedef std::string AttributeUniqueName;

class Attribute: public NetworkSendable {
public:
    enum StatType {
        characteristics,
        secondaries,
        damage,
        defence,
        status,
        unique
    };

    Attribute();
    virtual std::string className() override;
    virtual SerializedData serialize() const override;
    virtual void deserialize(const SerializedData& serializedData) override;

    AttributeUniqueName attributeUniqueName() const;

private:
    AttributeUniqueName m_attributeUniqueName;
    LanguageString m_name;
    StatType m_type;
    Image m_icon;
};

namespace std {
    template <>
    struct hash<Attribute> {
        std::size_t operator()(const Attribute &lang) const noexcept {
            return 1; //TODO
        }
    };
}
