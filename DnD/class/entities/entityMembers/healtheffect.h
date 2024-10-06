#pragma once

#include "healtheffecttype.h"

class HealthEffect
{
public:
    HealthEffect();

private:
    HealthEffectType m_type;
    long long value;
};
