#pragma once
#include "tile.hpp"

class Checkpoint : tile{
    public:
        Checkpoint(int x, int y);
        bool contact();
        void SetSpawn();
};