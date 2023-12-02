
#ifndef TP_PATTERNS_RUSSIANWARRIOR_H
#define TP_PATTERNS_RUSSIANWARRIOR_H


#include "Warrior.h"

class RussianWarrior : public Warrior {
public:
    RussianWarrior();
    explicit RussianWarrior(Field* field) : Warrior(field) {}

    void say() override;
};


#endif //TP_PATTERNS_RUSSIANWARRIOR_H
