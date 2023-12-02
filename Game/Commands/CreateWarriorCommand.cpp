#include "CreateWarriorCommand.h"

void CreateWarriorCommand::execute() {
    _army->addWarrior(_factory->createWarrior());
}
