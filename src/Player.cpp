#include "../headers/Player.hpp"

Player::Player(){

}

position Player::to_pos(){
    std::cout << "Player position is " << pos.x << "\t" << pos.y;
    return pos;
}

void Player::update_pos(int x, int y){
    pos.x = x;
    pos.y = y;
}