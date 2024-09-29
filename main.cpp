#include <iostream>
#include "map.h"
#include "SFML/Graphics.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(700,500),"Home");
    Map map(&window);
    while(window.isOpen()) {
        window.clear(sf::Color::Green);
        std::vector<pos> muro=map.getMuro();
        for(auto itr=muro.begin();itr!=muro.end();itr++) {
            sf::Texture texture;
            texture.loadFromFile("/home/moore/CLionProjects/wallet/muro.jpg");
            sf::Sprite sprite(texture);
            int x=itr->X;
            int y=itr->Y;
            sprite.setPosition(sf::Vector2f(x,y));
            window.draw(sprite);
        }
        window.display();
        sf::Event e;
        while (window.pollEvent(e)) {
            switch(e.type) {
                case(sf::Event::Closed):
                    window.close();
                break;
            }
        }
    }
}