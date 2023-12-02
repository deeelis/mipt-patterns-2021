#include "CreateArcherCommand.h"

void CreateArcherCommand::execute() {
    _army->addArcher(_factory->createArcher());
}
