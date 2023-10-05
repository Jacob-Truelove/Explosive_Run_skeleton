#include "../headers/blank.hpp"

blank::blank(int x, int y) : tile(){
    x = x;
    y = y;
}

bool blank::contact(){
    return true;
}