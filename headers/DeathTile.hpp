#pragma once
#include "tile.hpp"
#include <string>

class DeathTile : public tile {
    public:
        DeathTile(int x, int y);
        bool contact();
        bool kill();
};