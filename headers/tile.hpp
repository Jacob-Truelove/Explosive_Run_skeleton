#pragma once
#include <iostream>
#include "Player.hpp"
#include "blank.hpp"
#include "DeathTile.hpp"
#include "Checkpoint.hpp"

class tile{
    private:
        position pos;
        Player player;
    public:
        tile();
        virtual bool contact();
        int contact_dir();
        void explode();
};