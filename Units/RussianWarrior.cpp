
#include "RussianWarrior.h"
#include <iostream>

void RussianWarrior::say() {
    std::cout << "I am a russian warrior!" << std::endl;
}

RussianWarrior::RussianWarrior() {
    setDefaultPosition(true);
}
