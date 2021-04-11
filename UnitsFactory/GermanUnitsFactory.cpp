
#include "GermanUnitsFactory.h"
#include "../Units/GermanWarrior.h"
#include "../Units/GermanArcher.h"

Warrior* GermanUnitsFactory::createWarrior() {
    return new GermanWarrior(_field);
}

Archer* GermanUnitsFactory::createArcher() {
    return new GermanArcher(_field);
}