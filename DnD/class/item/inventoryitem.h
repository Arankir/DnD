#pragma once

#include "entities/entityMembers/attribute.h"
#include "general/image.h"
#include "general/languagestring.h"
#include "item/itemrarity.h"

class InventoryItem {
public:
    InventoryItem();

private:
    int m_columns;
    int m_rows;

    Image m_image;
    ItemRarity m_rarity;
    LanguageString m_title;
    LanguageString m_description;
    std::unordered_map<Attribute, long long> m_stats;
};
