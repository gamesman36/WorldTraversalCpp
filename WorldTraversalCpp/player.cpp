#include <random>
#include "player.h"
#include "world.h"

Player::Player(World& world) : _world(world) {
    _position = Position(1 + rand() % 10, 1 + rand() % 10);
}

Position Player::GetPosition() {
    return _position;
}

void Player::MakeRandomMove() {
    int randomDirection = rand() % 4;

    switch (randomDirection) {
    case 0:
        _position.moveLeft();
        break;
    case 1:
        _position.moveRight();
        break;
    case 2:
        _position.moveUp();
        break;
    case 3:
        _position.moveDown();
        break;
    }
}