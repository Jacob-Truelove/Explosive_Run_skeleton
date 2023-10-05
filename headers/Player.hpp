#pragma once
#include <iostream>
#include "main.hpp"

class Player{
    private:
        position pos;
        position spawn;
    public:
        Player();
        position to_pos();
};