#include <iostream>
#include "../headers/TileMap.hpp"
#include "../headers/DeathTile.hpp"
#include "../headers/blank.hpp"

int main(){
    int pos[2] = {10, 10};
    Player player;
    tile ground(3, 4);
    blank space(12, 43);
    TileMap map;
    map.generate((char*)"C:/Users/jetfi/OneDrive/Documents/Code/C++/Explosive Run/files/lvl1.txt");

    DeathTile spike(15, 22);
    tile *death = &spike;

    death->explode();
    death->contact();
}