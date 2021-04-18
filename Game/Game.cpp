
#include "Game.h"
#include "../UnitGroups/Army.h"
#include "../UnitsFactory/RussianUnitsFactory.h"
#include "../UnitsFactory/GermanUnitsFactory.h"
#include "Commands/CreateWarriorCommand.h"
#include "Commands/MoveLeftCommand.h"
#include "Commands/MoveRightCommand.h"
#include "Commands/AttackCommand.h"
#include <iostream>

Game::Game() : _field(Field(&_russianArmy, &_germanArmy)) {
    _russianUnitsFactory = new RussianUnitsFactory(&_field);
    _germanUnitsFactory = new GermanUnitsFactory(&_field);
}

bool Game::_makeTurn(const std::string& input) {
    Army* currentArmy;
    Army* enemyArmy;
    UnitsFactory* factory;
    if (_russianTurn) {
        currentArmy = &_russianArmy;
        enemyArmy = &_germanArmy;
        factory = _russianUnitsFactory;
    } else {
        currentArmy = &_germanArmy;
        enemyArmy = &_russianArmy;
        factory = _germanUnitsFactory;
    }

    Command* command = _parseInput(input, factory, currentArmy, enemyArmy);
    if (command) {
        _executeCommand(command);
        printState();
        if (_isGameOver()) {
            return false;
        }
        _russianTurn = !_russianTurn;
    } else {
        std::cout << INVALID_INPUT << std::endl;
    }
    return true;
}

void Game::start() {
    std::cout << INSTRUCTION << std::endl;

    std::string input;
    while (std::cin >> input) {
        if (!_makeTurn(input)) {
            break;
        }
    }
}

void Game::printState() {
    std::cout << "Russia" << std::endl;
    _russianArmy.print();

    std::cout << '\n';

    std::cout << "Germany" << std::endl;
    _germanArmy.print();
}

void Game::_executeCommand(Command* command) {
    command->execute();
}

Command* Game::_parseInput(std::string input, UnitsFactory* factory, Army* currentArmy, Army* enemyArmy) {
    if (input == "create_warrior" || input == "cw") {
        return new CreateWarriorCommand(factory, currentArmy);
    } else if (input == "create_archer" || input == "ca") {
        return new CreateWarriorCommand(factory, currentArmy);
    } else if (input == "move_right" || input == "mr") {
        return new MoveRightCommand(factory, currentArmy);
    } else if (input == "move_left" || input == "ml") {
        return new MoveLeftCommand(factory, currentArmy);
    } else if (input == "attack" || input == "a") {
        return new AttackCommand(currentArmy, enemyArmy);
    }
    return nullptr; // Unknown command
}

bool Game::_isGameOver() {
    if (_field.gameOver()) {
        std::cout << "Game over!" << std::endl;
        std::cout << (_field.russiansWin() ? "Russians" : "German") << " win!" << std::endl;
        return true;
    }
    return false;
}
