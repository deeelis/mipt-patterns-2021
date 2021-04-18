#ifndef TP_PATTERNS_CREATEWARRIORCOMMAND_H
#define TP_PATTERNS_CREATEWARRIORCOMMAND_H


#include "../../UnitsFactory/UnitsFactory.h"
#include "Command.h"

class CreateWarriorCommand : public Command {
public:
    CreateWarriorCommand() = default;
    explicit CreateWarriorCommand(UnitsFactory* factory, Army* army) : Command(factory, army) {}

    void execute() override;
};


#endif //TP_PATTERNS_CREATEWARRIORCOMMAND_H
