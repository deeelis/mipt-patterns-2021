
#ifndef TP_PATTERNS_GAME_H
#define TP_PATTERNS_GAME_H


#include "../UnitGroups/Army.h"
#include "../UnitsFactory/UnitsFactory.h"
#include "Commands/Command.h"

class Command;

class Game {
private:
    Army _russianArmy;
    Army _germanArmy;
    Field _field;
    UnitsFactory* _russianUnitsFactory;
    UnitsFactory* _germanUnitsFactory;
    bool _russianTurn = true;

    void _executeCommand(Command* command);
    Command* _parseInput(std::string input, UnitsFactory* factory, Army* currentArmy, Army* enemyArmy);
    bool _isGameOver();
    bool _makeTurn(const std::string& input);
public:
    Game();

    void start();
    void printState();
};


#endif //TP_PATTERNS_GAME_H
