#pragma once
#include "blank.hpp"
#include "DeathTile.hpp"
#include "tile.hpp"

#include <string>
#include <vector>

class TileMap{
    private:
        std::vector<tile*> map;
        std::vector<std::string> ascii_map;
        bool generated = false;
        Player *player;
    public:
        TileMap(Player *player);
        void generate(char *lvl_name);
        void update();
        void check_contact();
};