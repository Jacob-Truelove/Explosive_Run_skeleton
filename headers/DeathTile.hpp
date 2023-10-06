#pragma once
#include "tile.hpp"
#include <string>

class DeathTile : public tile {
    private:
        position pos;
        Player player;
    public:
        DeathTile(int x, int y);
        bool contact();
        bool kill();
};