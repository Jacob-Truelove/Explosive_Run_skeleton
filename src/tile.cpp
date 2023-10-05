#include "../headers/tile.hpp"

tile::tile(){
   
}

bool tile::contact(){
    return true;
}

int tile::contact_dir(){
    return 0;
}

void tile::explode(){
    int checkpoint[2] = {10,10};
    DeathTile explosion(checkpoint, pos.x, pos.y+1, player);
    std::cout << "BOOM!\n";
    explosion.contact();
}