
#ifndef TP_PATTERNS_UNITSGROUP_H
#define TP_PATTERNS_UNITSGROUP_H

class UnitsGroup {
public:
    virtual void execute() = 0;
    virtual void moveRight() = 0;
    virtual void moveLeft() = 0;
    virtual void attack(UnitsGroup* unit) = 0;
    virtual void print() = 0;
    virtual bool isAlive() = 0;
};


#endif //TP_PATTERNS_UNITSGROUP_H
