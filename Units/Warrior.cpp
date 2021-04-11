
#include <iostream>
#include "Warrior.h"

void Warrior::say() {
    std::cout << "I am a warrior" << std::endl;
}

void Warrior::attack(Unit *unit) {
    if (abs(unit->getPosition() - getPosition()) == WARRIOR_ATTACK_RADIOUS) {
        unit->defence(WARRIOR_ATTACK);
    }
}
