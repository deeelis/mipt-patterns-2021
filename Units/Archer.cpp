
#include <iostream>
#include "Archer.h"

void Archer::say() {
    std::cout << "I am an archer" << std::endl;
}

void Archer::attack(Unit *unit) {
    if (abs(unit->getPosition() - getPosition()) <= ARCHER_ATTACK_RADIOUS) {
        unit->defence(ARCHER_ATTACK);
    }
}
