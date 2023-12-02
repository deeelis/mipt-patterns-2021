#ifndef TP_PATTERNS_COMMAND_H
#define TP_PATTERNS_COMMAND_H


#include "../Game.h"

class Command {
protected:
    UnitsFactory* _factory = nullptr;
    Army* _army = nullptr;
public:
    Command() = default;
    explicit Command(Army* army) : _army(army) {}
    explicit Command(UnitsFactory* factory, Army* army) : _factory(factory), _army(army) {}

    virtual void execute() = 0;
};


#endif //TP_PATTERNS_COMMAND_H
