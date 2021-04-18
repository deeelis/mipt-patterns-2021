
#ifndef TP_PATTERNS_UNITSFACTORY_H
#define TP_PATTERNS_UNITSFACTORY_H


#include "../Units/Warrior.h"
#include "../Units/Archer.h"

class UnitsFactory {
protected:
    Field* _field;
public:
    UnitsFactory() {}
    UnitsFactory(Field* field) : _field(field) {}

    virtual Warrior* createWarrior() = 0;
    virtual Archer* createArcher() = 0;
};


#endif //TP_PATTERNS_UNITSFACTORY_H
