#include <iostream>
#include "../headers/TileMap.hpp"
#include "../headers/DeathTile.hpp"
#include "../headers/blank.hpp"
#include <GLFW/glfw3.h>

int main(){
    int pos[2] = {10, 10};
    Player player;
    tile ground(3, 4);
    blank space(12, 43);
    TileMap map(&player);
    map.generate((char*)"C:/Users/jetfi/OneDrive/Documents/Code/C++/Explosive Run/files/lvl1.txt");
    player.to_pos();

    DeathTile spike(15, 22);
    tile *death = &spike;

    death->explode();
    death->contact();

    return 0;
}