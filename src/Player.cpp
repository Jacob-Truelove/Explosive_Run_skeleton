#include "../headers/Player.hpp"

Player::Player(){
    pos.x = 0;
    pos.y = 0;
    spawn.x = 0;
    spawn.y = 0;
}

position Player::to_pos(){
    std::cout << "Player position is " << pos.x << "\t" << pos.y;
    return pos;
}

void Player::update_pos(int x, int y){
    pos.x = x;
    pos.y = y;
}