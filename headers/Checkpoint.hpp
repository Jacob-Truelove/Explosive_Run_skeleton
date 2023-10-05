#pragma once
#include "tile.hpp"

class Checkpoint{
    private:
        position pos;
        Player player;
    public:
        Checkpoint(int x, int y);
        bool contact();
        void SetSpawn();
};