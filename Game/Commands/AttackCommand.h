
#ifndef TP_PATTERNS_ATTACKCOMMAND_H
#define TP_PATTERNS_ATTACKCOMMAND_H


#include "Command.h"

class AttackCommand : public Command {
private:
    Army* _enemyArmy;
public:
    AttackCommand() = default;
    explicit AttackCommand(Army* army, Army* enemyArmy) : Command(army), _enemyArmy(enemyArmy) {}

    void execute() override;
};


#endif //TP_PATTERNS_ATTACKCOMMAND_H
