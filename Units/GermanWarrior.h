
#ifndef TP_PATTERNS_GERMANWARRIOR_H
#define TP_PATTERNS_GERMANWARRIOR_H


#include "Warrior.h"

class GermanWarrior : public Warrior {
public:
    GermanWarrior();
    explicit GermanWarrior(Field* field);

    void say() override;
};


#endif //TP_PATTERNS_GERMANWARRIOR_H
