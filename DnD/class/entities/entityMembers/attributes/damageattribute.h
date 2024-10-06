#pragma once

#include "entities/entityMembers/attribute.h"
#include "entities/entityMembers/healtheffecttype.h"

// Урон (Damage) — количество урона, которое наносится при успешной атаке.
// Магическая сила (Spell Power) — влияет на силу магических заклинаний.

class DamageAttribute: public Attribute
{
public:
    DamageAttribute();

private:
    HealthEffectType m_effect;
};
