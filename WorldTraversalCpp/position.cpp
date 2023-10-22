#include <utility>
#include "position.h"

using std::pair;

Position::Position() : xValue(0), yValue(0) {}

Position::Position(int xValue, int yValue) : xValue(xValue), yValue(yValue) {}

void Position::moveLeft() {
    if (xValue > 1)
        xValue--;
}

void Position::moveRight() {
    if (xValue < 10)
        xValue++;
}

void Position::moveUp() {
    if (yValue < 10)
        yValue++;
}

void Position::moveDown() {
    if (yValue > 1)
        yValue--;
}

pair<int, int> Position::getCoords() {
    return std::make_pair(xValue, yValue);
}