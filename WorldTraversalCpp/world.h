#pragma once
#include <map>
#include <vector>
#include <string>
#include "Position.h"

using std::map;
using std::vector;
using std::string;

class World {
private:
    map<Position, string> _positionsWithObjects;

public:
    World();
    vector<Position> GetPositions();
    string GetObjectAtPosition(Position position);
    void PlaceObject(Position position, string objectName);
};