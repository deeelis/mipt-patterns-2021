
#ifndef TP_PATTERNS_ARMY_H
#define TP_PATTERNS_ARMY_H


#include <vector>
#include "UnitsGroup.h"
#include "Economy.h"
#include "../Units/Unit.h"
#include <algorithm>

class Unit;
class Archer;
class Warrior;

class Army : public UnitsGroup {
    std::vector<UnitsGroup*> _children;
    Economy _economy;

    void _addUnit(Unit* unit);
public:
    void addWarrior(Warrior* unit);
    void addArcher(Archer* unit);
    void remove(Unit* group);
    void moveRight() override;
    void moveLeft() override;
    std::vector<UnitsGroup*> getChildren();
    void execute() override;
    void attack(Army* enemyArmy);
    void print();
    void update();
    int getUnitsCount();
    bool isEmpty();
};

#endif //TP_PATTERNS_ARMY_H
