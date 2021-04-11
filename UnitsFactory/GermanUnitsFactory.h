
#ifndef TP_PATTERNS_GERMANUNITSFACTORY_H
#define TP_PATTERNS_GERMANUNITSFACTORY_H


#include "UnitsFactory.h"

class GermanUnitsFactory : public UnitsFactory {
public:
    GermanUnitsFactory() = default;
    explicit GermanUnitsFactory(Field* field) : UnitsFactory(field) {}

    Warrior* createWarrior() override;
    Archer* createArcher() override;
};


#endif //TP_PATTERNS_GERMANUNITSFACTORY_H
