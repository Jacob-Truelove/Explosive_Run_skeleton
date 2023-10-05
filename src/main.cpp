#include <iostream>
#include "../headers/tile.hpp"
#include "../headers/DeathTile.hpp"
#include "../headers/TileMap.hpp"

int main(){
    int pos[2] = {10, 10};
    Player player;
    tile ground;
    blank blank(12, 43);
    TileMap map;
    map.generate((char*)"C:/Users/jetfi/OneDrive/Documents/Code/C++/Explosive Run/files/lvl1.txt");

    DeathTile spike(pos, 15, 22, player);
    tile *empty;

    ground.explode();
}