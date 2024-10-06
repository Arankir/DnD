#pragma once

#include "entities/entityMembers/ability.h"
#include "entities/entityMembers/attribute.h"
#include "entities/entityMembers/attributeexample.h"
#include "entities/entityMembers/class.h"
#include "entities/entityMembers/equipmentsystem.h"
#include "entities/entityMembers/healtheffect.h"
#include "entities/entityMembers/inventory.h"
#include "entities/entityMembers/levelsystem.h"
#include "entities/entityMembers/race.h"
#include "entities/entityMembers/skill.h"
#include "general/image.h"

#include <unordered_set>
#include <vector>

class Entity
{
public:
    Entity();

    virtual void applyEffects(const std::vector<HealthEffect>& effects) = 0;

private:
    Image m_icon;
    Class m_class;
    Race m_race;
    std::unordered_map<AttributeUniqueName, AttributeExample> m_baseStats;
    LevelSystem m_level;
    Inventory m_inventory;
    EquipmentSystem m_equipment;
    std::unordered_set<Skill> m_skills;
    std::unordered_set<Ability> m_abilities;
};
