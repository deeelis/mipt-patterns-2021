
#ifndef TP_PATTERNS_RUSSIANUNITSFACTORY_H
#define TP_PATTERNS_RUSSIANUNITSFACTORY_H


#include "UnitsFactory.h"

class RussianUnitsFactory : public UnitsFactory {
public:
    RussianUnitsFactory() = default;
    explicit RussianUnitsFactory(Field* field) : UnitsFactory(field) {}

    Warrior* createWarrior() override;
    Archer* createArcher() override;
};


#endif //TP_PATTERNS_RUSSIANUNITSFACTORY_H
