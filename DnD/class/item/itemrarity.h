#pragma once

#include "entities/entityMembers/attribute.h"
#include "general/color.h"
#include "general/image.h"

#include <string>
#include <unordered_map>

class ItemRarity {
public:
    ItemRarity();

    LanguageString name() const;
    int valueble() const;
    Color color() const;
    Image image() const;
    std::unordered_map<Attribute, int> statsCount() const;

private:
    LanguageString m_name;
    int m_valueble;
    Color m_color;
    Image m_image;

    std::unordered_map<Attribute, int> m_statsCount; // TODO значение от до
};
