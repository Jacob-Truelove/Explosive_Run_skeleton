#include "../headers/Checkpoint.hpp"

Checkpoint::Checkpoint(int x, int y){
    pos.x = x;
    pos.y = y;
}

bool Checkpoint::contact(){
    SetSpawn();
    return true;
}

void Checkpoint::SetSpawn(){

}