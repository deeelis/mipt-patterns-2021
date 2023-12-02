
#include <iostream>
#include "GermanArcher.h"

void GermanArcher::say() {
    std::cout << "I am a german archer" << std::endl;
}

GermanArcher::GermanArcher() {
    _position = FIELD_SIZE - 1;
}

GermanArcher::GermanArcher(Field *field) : Archer(field) {
    _position = FIELD_SIZE - 1;
}
