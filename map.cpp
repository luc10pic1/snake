//
// Created by moore on 28/09/24.
//

#include "map.h"

#include <thread>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

void Map::spawnFood() {
    int x,y;
    bool busy=true;
    while(busy) {
        srand(time(NULL));
        x=rand()%((window->getSize().x)-10)+10;
        y=rand()%((window->getSize().y)-10)+10;
        for(int i=0;i!=snake.getCorpo().size()&&busy;i++) {
            if((snake.getCorpo()[i])->X!=x && snake.getCorpo()[i]->Y!=y) {
                busy=false;
                food.X=x;
                food.Y=y;
            }
        }
        if(busy)
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

void Map::buildMuro() {
    int y=window->getSize().y-5;
    for (int x=5;x!=window->getSize().x-5;x++) {
        pos muro;
        muro.X=x;
        muro.Y=y;
        this->muro.push_back(muro);
    }
    y=5;
    for (int x=5;x!=window->getSize().x-5;x++) {
        pos muro;
        muro.X=x;
        muro.Y=y;
        this->muro.push_back(muro);
    }
    int x=5;
    for (int y=5;y!=window->getSize().y-5;y++) {
        pos muro;
        muro.X=x;
        muro.Y=y;
        this->muro.push_back(muro);
    }
    x=window->getSize().x-5;
    for (int y=5;y!=window->getSize().y-5;y++) {
        pos muro;
        muro.X=x;
        muro.Y=y;
        this->muro.push_back(muro);
    }
}



