#include "../headers/tile.hpp"
#include "../headers/DeathTile.hpp"


DeathTile::DeathTile( int x, int y) : tile::tile(x, y){
    pos.x = x;
    pos.y = y;
    this->player = player;
}

bool DeathTile::contact(){
    kill();
    return true;
}

bool DeathTile::kill(){
    std::cout << "Player died. respawning...\n";
    return true;
}