#pragma once
#include "tile.hpp"

class blank : private tile 
{
    private:
        position pos;
    public:
        blank(int x, int y);
        bool contact();
};