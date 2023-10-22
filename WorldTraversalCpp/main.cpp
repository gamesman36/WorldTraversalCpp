#include <iostream>
#include <cstdlib>
#include "world.h"
#include "player.h"

using std::cout;

int main() {
    World world;
    Player player(world);
    Position currentPosition = player.GetPosition();

    cout << "Initial Position: (" << currentPosition.getCoords().first << ", " << currentPosition.getCoords().second << ")\n";

    player.MakeRandomMove();
    currentPosition = player.GetPosition();

    cout << "New Position: (" << currentPosition.getCoords().first << ", " << currentPosition.getCoords().second << ")\n";

    return 0;
}