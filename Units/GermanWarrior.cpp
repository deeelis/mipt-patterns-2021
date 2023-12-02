
#include "GermanWarrior.h"
#include <iostream>

void GermanWarrior::say() {
    std::cout << "I am a german warrior." << std::endl;
}

GermanWarrior::GermanWarrior() {
    _position = FIELD_SIZE - 1;
}

GermanWarrior::GermanWarrior(Field *field) : Warrior(field) {
    _position = FIELD_SIZE - 1;
}
