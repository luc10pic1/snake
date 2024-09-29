#ifndef MAP_H
#define MAP_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "snake.h"

class Map {
public:
    explicit Map(sf::RenderWindow* window): window(window), snake(Snake()) {
        spawnFood();
        buildMuro();

    };

    void spawnFood();

    void buildMuro();

    std::vector<pos> getMuro() {
        return muro;
    }

    pos getFood() {
        return food;
    }

private:
    sf::RenderWindow *window;
    std::vector<pos> muro;
    Snake snake;
    pos food;
};

#endif //MAP_H
