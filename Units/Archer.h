
#ifndef TP_PATTERNS_ARCHER_H
#define TP_PATTERNS_ARCHER_H


#include "Unit.h"

class Archer : public Unit {
public:
    Archer() : Unit(ARCHER_HEALTH) {}
    explicit Archer(Field* field) : Unit(field, ARCHER_HEALTH) {}

    void say() override;
    void attack(Unit* unit) override;
};


#endif //TP_PATTERNS_ARCHER_H
