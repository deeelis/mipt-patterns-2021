
#ifndef TP_PATTERNS_ECONOMY_H
#define TP_PATTERNS_ECONOMY_H


#include <cstdio>
#include "../constants.h"

class Economy {
    size_t _coins = START_COINS_COUNT;
public:
    bool canAffordWarrior();
    bool canAffordArcher();
    void buyWarrior();
    void buyArcher();
    int getCoins();
    void killedUnits(int killedUnitsCount);
};


#endif //TP_PATTERNS_ECONOMY_H
