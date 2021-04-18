#ifndef TP_PATTERNS_CREATEARCHERCOMMAND_H
#define TP_PATTERNS_CREATEARCHERCOMMAND_H


#include "../../UnitsFactory/UnitsFactory.h"
#include "Command.h"

class CreateArcherCommand : public Command {
public:
    CreateArcherCommand() = default;
    explicit CreateArcherCommand(UnitsFactory* factory, Army* army) : Command(factory, army) {}

    void execute() override;
};


#endif //TP_PATTERNS_CREATEARCHERCOMMAND_H
