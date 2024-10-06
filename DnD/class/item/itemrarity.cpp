#include "itemrarity.h"

ItemRarity::ItemRarity()
{
}

LanguageString ItemRarity::name() const
{
    return m_name;
}

int ItemRarity::valueble() const
{
    return m_valueble;
}

std::unordered_map<Attribute, int> ItemRarity::statsCount() const
{
    return m_statsCount;
}

Image ItemRarity::image() const
{
    return m_image;
}

Color ItemRarity::color() const
{
    return m_color;
}
