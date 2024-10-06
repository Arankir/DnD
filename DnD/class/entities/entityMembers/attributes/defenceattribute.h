#pragma once

#include "entities/entityMembers/attribute.h"

// Класс брони (Armor Class, AC) — показывает, насколько трудно нанести урон персонажу, зависит от брони и ловкости.
// Сопротивление магии (Magic Resistance) — способность уменьшить или избежать урона от магических атак.

class DefenceAttribute: public Attribute
{
public:
    DefenceAttribute();
};
