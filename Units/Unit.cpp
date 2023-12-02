
#include <iostream>
#include "Unit.h"

void Unit::setDefaultPosition(bool isRussianUnit) {
    if (!isRussianUnit) {
        _position = FIELD_SIZE;
    }
}

void Unit::moveRight() {
    std::cout << "unit moves right" << std::endl;
    if (_position == FIELD_SIZE - 1) {
        return;
    }
    if (!_field->canMoveTo(_position, _position + 1)) {
        return;
    }
    ++_position;
}

void Unit::moveLeft() {
    std::cout << "unit moves left" << std::endl;
    if (_position == 0) {
        return;
    }
    if (!_field->canMoveTo(_position, _position - 1)) {
        return;
    }
    --_position;
}

void Unit::defence(int attack) {
    _health -= attack;
}

void Unit::print() {
    std::cout << "unit: " << "position = " << _position << " health = " << _health << std::endl;
}

int Unit::getPosition() {
    return _position;
}

bool Unit::isAlive() {
    return _health > 0;
}
