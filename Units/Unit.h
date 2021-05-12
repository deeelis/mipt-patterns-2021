
#ifndef TP_PATTERNS_UNIT_H
#define TP_PATTERNS_UNIT_H


#include "../UnitGroups/UnitsGroup.h"
#include "../constants.h"
#include "../Game/Field.h"

class Field;

class Unit : public UnitsGroup {
protected:
    Field* _field;
    int _position = 0;
    int _health = 0;
public:
    Unit() = default;
    Unit(int health) : _health(health) {}
    Unit(Field* field, int health) : _field(field), _health(health) {}

    virtual void say() = 0;
    void moveRight() override;
    void moveLeft() override;
    void setDefaultPosition(bool isRussianUnit);
    virtual void execute() override {}
    virtual void attack(UnitsGroup* unit) = 0;
    virtual void defence(int attack);
    int getPosition();
    void print();
    bool isAlive();
};


#endif //TP_PATTERNS_UNIT_H
