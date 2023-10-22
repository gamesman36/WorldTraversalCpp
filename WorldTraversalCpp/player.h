#pragma once
#include "Position.h"
#include "World.h"

class Player {
private:
    World& _world;
    Position _position;

public:
    Player(World& world);
    Position GetPosition();
    void MakeRandomMove();
};