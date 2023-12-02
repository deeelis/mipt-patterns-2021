
#ifndef TP_PATTERNS_MOVELEFTCOMMAND_H
#define TP_PATTERNS_MOVELEFTCOMMAND_H


#include "../../UnitsFactory/UnitsFactory.h"
#include "Command.h"

class MoveLeftCommand : public Command {
public:
    MoveLeftCommand() = default;
    explicit MoveLeftCommand(UnitsFactory* factory, Army* army) : Command(factory, army) {}

    void execute() override;
};


#endif //TP_PATTERNS_MOVELEFTCOMMAND_H
