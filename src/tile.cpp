#include "../headers/tile.hpp"
#include "../headers/DeathTile.hpp"

tile::tile(int x, int y){
   pos.x = x;
   pos.y = y;
}

bool tile::contact(){
    return true;
}

int tile::contact_dir(){
    return 0;
}

void tile::explode(){
    int checkpoint[2] = {10,10};
    DeathTile explosion(pos.x, pos.y+1);
    std::cout << "\nBOOM!\n";
    explosion.contact();
}