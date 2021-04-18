
#include "RussianUnitsFactory.h"
#include "../Units/RussianWarrior.h"
#include "../Units/RussianArcher.h"

Warrior* RussianUnitsFactory::createWarrior() {
    return new RussianWarrior(_field);
}

Archer* RussianUnitsFactory::createArcher() {
    return new RussianArcher(_field);
}
