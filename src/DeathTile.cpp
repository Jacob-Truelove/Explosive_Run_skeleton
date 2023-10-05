#include "../headers/DeathTile.hpp"


DeathTile::DeathTile(int checkpoint[2], int x, int y, Player player) : tile(){
    pos.x = x;
    pos.y = y;
    this->checkpoint.x = checkpoint[0];
    this->checkpoint.y = checkpoint[1];
    this->player = player;
}

bool DeathTile::contact(){
    kill();
    return true;
}

bool DeathTile::kill(){
    std::cout << "Player died. respawning at " << checkpoint.x << "x, " << checkpoint.y << "y\n";
    return true;
}