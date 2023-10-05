#pragma once
#include "tile.hpp"
#include <string>

class DeathTile : private tile {
    private:
        position pos;
        position checkpoint;
        Player player;
    public:
        DeathTile(int checkpoint[2], int x, int y, Player player);
        bool contact();
        bool kill();
};