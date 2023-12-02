
#ifndef TP_PATTERNS_CONSTANTS_H
#define TP_PATTERNS_CONSTANTS_H

#include <string>

// Game
const int FIELD_SIZE = 5;
const int START_COINS_COUNT = 7;

// Units
const int ARCHER_HEALTH = 5;
const int ARCHER_ATTACK = 4;
const int ARCHER_ATTACK_RADIOUS = 3;


const int WARRIOR_HEALTH = 8;
const int WARRIOR_ATTACK = 2;
const int WARRIOR_ATTACK_RADIOUS = 1;

// Economy
const int WARRIOR_COST = 2;
const int ARCHER_COST = 3;
const int COINS_PER_KILL = 4;


// Messages
const std::string INVALID_INPUT = "Sorry, I don't understand your command";
const std::string INSTRUCTION = "cw - create warrior, ca - create archer, ml - move left, mr - move right, a - attack";
const std::string NOT_ENOUGH_COINS = "Sorry, you don't have enough coins to afford buying this unit.";

#endif //TP_PATTERNS_CONSTANTS_H