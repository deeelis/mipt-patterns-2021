cmake_minimum_required(VERSION 3.10)
project(PatternsGame)

set(CMAKE_CXX_STANDARD 17)
add_executable(PatternsGame main.cpp Units/Unit.cpp Units/Unit.h Units/Warrior.cpp Units/Warrior.h Units/Archer.cpp Units/Archer.h Units/RussianWarrior.cpp Units/RussianWarrior.h Units/GermanWarrior.cpp Units/GermanWarrior.h Units/RussianArcher.cpp Units/RussianArcher.h Units/GermanArcher.cpp Units/GermanArcher.h UnitsFactory/UnitsFactory.cpp UnitsFactory/UnitsFactory.h
        UnitsFactory/RussianUnitsFactory.cpp UnitsFactory/RussianUnitsFactory.h UnitsFactory/GermanUnitsFactory.cpp UnitsFactory/GermanUnitsFactory.h UnitGroups/UnitsGroup.cpp UnitGroups/UnitsGroup.h UnitGroups/Army.cpp UnitGroups/Army.h UnitGroups/Army.cpp UnitGroups/Army.h UnitGroups/Economy.cpp UnitGroups/Economy.h constants.h Game/Field.cpp Game/Field.h Game/Game.cpp
        Game/Game.h Game/Commands/Command.cpp Game/Commands/Command.h Game/Commands/CreateWarriorCommand.cpp Game/Commands/CreateWarriorCommand.h Game/Commands/CreateArcherCommand.cpp Game/Commands/CreateArcherCommand.h Game/Commands/MoveLeftCommand.cpp Game/Commands/MoveLeftCommand.h Game/Commands/MoveRightCommand.cpp
        Game/Commands/MoveRightCommand.h Game/Commands/AttackCommand.cpp Game/Commands/AttackCommand.h)
