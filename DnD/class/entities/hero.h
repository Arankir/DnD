#pragma once

#include "entities/entityMembers/ability.h"
#include "entities/entityMembers/attribute.h"
#include "entities/entityMembers/class.h"
#include "entities/entityMembers/equipmentsystem.h"
#include "entities/entityMembers/inventory.h"
#include "entities/entityMembers/levelsystem.h"
#include "entities/entityMembers/race.h"
#include "entities/entityMembers/skill.h"
#include "general/image.h"

#include <string>
#include <unordered_set>

class Hero {
public:
    Hero();

private:
    long long m_hp;
    std::string m_name;
    Image m_avatar;
    Image m_icon;
    std::string m_lore;
    Class m_class;
    Race m_race;
    std::unordered_map<Attribute, long long> m_baseStats;
    LevelSystem m_level;
    Inventory m_inventory;
    EquipmentSystem m_equipment;
    std::unordered_set<Skill> m_skills;
    std::unordered_set<Ability> m_abilities;
};
