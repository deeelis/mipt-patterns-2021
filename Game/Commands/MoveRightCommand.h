
#ifndef TP_PATTERNS_MOVERIGHTCOMMAND_H
#define TP_PATTERNS_MOVERIGHTCOMMAND_H


#include "Command.h"

class MoveRightCommand : public Command {
public:
    MoveRightCommand() = default;
    explicit MoveRightCommand(UnitsFactory* factory, Army* army) : Command(factory, army) {}

    void execute() override;
};


#endif //TP_PATTERNS_MOVERIGHTCOMMAND_H
