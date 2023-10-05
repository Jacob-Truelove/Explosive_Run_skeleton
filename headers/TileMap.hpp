#pragma once
#include "tile.hpp"
#include <string>
#include <vector>

class TileMap{
    private:
        std::vector<tile> map;
        std::vector<std::string> ascii_map;
        bool generated = false;
    public:
        TileMap();
        void generate(char *lvl_name);
        void check_contact();
};