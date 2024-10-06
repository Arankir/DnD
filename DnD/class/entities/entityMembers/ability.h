#pragma once

#include "network/networksendable.h"

class Ability {
public:
    Ability();
};

namespace std {
template <>
struct hash<Ability> {
    std::size_t operator()(const Ability &lang) const noexcept {
        return 1; //TODO
    }
};
}
