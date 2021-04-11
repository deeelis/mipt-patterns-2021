
#include "Field.h"

int Field::getCellType(int position) {
    for (auto& unit : _russianArmy->getChildren()) {
        if (unit->getPosition() == position) {
            return -1;
        }
    }
    for (auto& unit : _germanArmy->getChildren()) {
        if (unit->getPosition() == position) {
            return 1;
        }
    }
    return 0;
}

bool Field::russiansWin() {
    return getCellType(FIELD_SIZE - 1) == -1;
}

bool Field::germanWin() {
    return getCellType(0) == 1;
}

bool Field::gameOver() {
    return russiansWin() || germanWin();
}

bool Field::canMoveTo(int from, int to) {
    return getCellType(from) * getCellType(to) != -1;
}
