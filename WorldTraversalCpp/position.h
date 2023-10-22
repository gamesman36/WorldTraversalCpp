#pragma once

class Position {
private:
    int xValue;
    int yValue;

public:
    Position();
    Position(int xValue, int yValue);
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
    std::pair<int, int> getCoords();

    bool operator<(const Position& other) const {
        if (xValue < other.xValue) {
            return true;
        }
        if (xValue == other.xValue && yValue < other.yValue) {
            return true;
        }
        return false;
    }
};