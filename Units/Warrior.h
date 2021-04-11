
#ifndef TP_PATTERNS_WARRIOR_H
#define TP_PATTERNS_WARRIOR_H


#include "Unit.h"

class Warrior : public Unit {
public:
  Warrior() : Unit(WARRIOR_HEALTH) {}
    explicit Warrior(Field* field) : Unit(field, WARRIOR_HEALTH) {}

    void say() override;
    void attack(Unit* unit) override;
};


#endif //TP_PATTERNS_WARRIOR_H
