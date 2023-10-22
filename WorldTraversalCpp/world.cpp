#include <vector>
#include <string>
#include "world.h"

using std::vector;
using std::string;

World::World() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            _positionsWithObjects[Position(i, j)] = "";
        }
    }

    PlaceObject(Position(5, 4), "Apple");
}

vector<Position> World::GetPositions() {
    vector<Position> positions;
    for (const auto& item : _positionsWithObjects) {
        positions.push_back(item.first);
    }
    return positions;
}

string World::GetObjectAtPosition(Position position) {
    if (_positionsWithObjects.count(position)) {
        return _positionsWithObjects[position];
    }
    return "";
}

void World::PlaceObject(Position position, string objectName) {
    if (_positionsWithObjects.count(position)) {
        _positionsWithObjects[position] = objectName;
    }
}