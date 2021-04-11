
#ifndef TP_PATTERNS_RUSSIANARCHER_H
#define TP_PATTERNS_RUSSIANARCHER_H


#include "Archer.h"

class RussianArcher : public Archer {
public:
    RussianArcher() = default;
    explicit RussianArcher(Field* field) : Archer(field) {}

    void say() override;
};


#endif //TP_PATTERNS_RUSSIANARCHER_H
