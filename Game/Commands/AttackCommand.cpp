
#include "AttackCommand.h"

void AttackCommand::execute() {
    _army->attack(_enemyArmy);
}
