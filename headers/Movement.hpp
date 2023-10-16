#pragma once
#include "Player.hpp"

enum Direction{
    LEFT, RIGHT, UP, DOWN
};

class Movement{
    private:
        Player *player;
        int jump_height = 3, move_spd = 1;
    public:
        Movement(Player *play);
        void chng_pos(Direction direction);
};