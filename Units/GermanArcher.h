
#ifndef TP_PATTERNS_GERMANARCHER_H
#define TP_PATTERNS_GERMANARCHER_H


#include "Archer.h"

class GermanArcher : public Archer {
public:
    GermanArcher();
    explicit GermanArcher(Field* field);

    void say() override;
};


#endif //TP_PATTERNS_GERMANARCHER_H
