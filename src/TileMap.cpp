#include "../headers/TileMap.hpp"

TileMap::TileMap(){

}

void TileMap::generate(char *lvl_name){
    FILE *fp = fopen(lvl_name, "r");
    char line[1000];
    int j = 0;

    while(fgets(line, sizeof(line)-1, fp)){
        ascii_map.push_back((std::string)line);
        std::cout << line;
    }

    if(generated == false)
        for(std::string s : ascii_map){
            for(int i = 0; i < s.length(); i++){
                if((char*)s[i] == " "){}
                    
            }
        }
}