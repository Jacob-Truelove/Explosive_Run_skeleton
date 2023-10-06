#pragma once
#include <iostream>
#include "Player.hpp"

class tile{
    private:
        position pos;
        Player player;
    public:
        tile(int x, int y);
        virtual bool contact();
        int contact_dir();
        void explode();
        void print_pos();
};
