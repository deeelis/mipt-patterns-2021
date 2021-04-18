#include <iostream>
#include "Economy.h"
#include "../constants.h"

bool Economy::canAffordWarrior() {
    return _coins >= WARRIOR_COST;
}

bool Economy::canAffordArcher() {
    return _coins >= ARCHER_COST;
}

void Economy::buyWarrior() {
    _coins -= WARRIOR_COST;
}

void Economy::buyArcher() {
    _coins -= ARCHER_COST;
}

int Economy::getCoins() {
    return _coins;
}

void Economy::killedUnits(int killedUnitsCount) {
    _coins += killedUnitsCount * COINS_PER_KILL;
}


