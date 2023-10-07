#include "../headers/TileMap.hpp"

TileMap::TileMap(Player *player){
    this->player = player;
}

void TileMap::generate(char *lvl_name){
    FILE *fp = fopen(lvl_name, "r");
    char line[1000];
    blank tempb(0, 0);
    DeathTile tempd(0, 0);
    tile tempt(0, 0);
    int j = 0;
    int max = 0;

    while(fgets(line, sizeof(line)-1, fp)){
        ascii_map.push_back((std::string)line);
        std::cout << line;
    }

    if(generated == false)
        for(std::string s : ascii_map){
            for(int i = 0; i < s.length(); i++){
                if(s.at(i) == ' '){
                    tempb = blank(j, i);
                    map.push_back(&tempb);
                    max++;
                }
                if(s.at(i) == '%'){
                    tempd = DeathTile(j, i);
                    map.push_back(&tempd);
                    max++;
                }
                if(s.at(i) == '#'){
                    tempt = tile(j, i);
                    map.push_back(&tempd);
                    max++;
                }
                if(s.at(i) == 'o'){
                    player->update_pos(j, i);
                    tempb = blank(j, i);
                    map.push_back(&tempb);
                    max++;
                }
            }
            j++;
        }
}

void TileMap::update(){
    int i=0, j=0;

    
}