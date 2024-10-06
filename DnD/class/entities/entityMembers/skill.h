#pragma once

#include "network/networksendable.h"

class Skill {
public:
    Skill();
};

namespace std {
template <>
struct hash<Skill> {
    std::size_t operator()(const Skill &lang) const noexcept {
        return 1; //TODO
    }
};
}
