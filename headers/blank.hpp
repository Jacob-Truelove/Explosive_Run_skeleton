#ifndef BLANK_H_
#define BLANK_H_

#pragma once
#include "tile.hpp"

class blank : public tile 
{
    public:
        blank(int x, int y);
        bool contact();
};

#endif