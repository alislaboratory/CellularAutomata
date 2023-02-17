#include <iostream>
#include <SFML/Graphics.hpp>
#include "Board.h"

using namespace std;

int main() {
    sf::RenderWindow window(sf::VideoMode(500, 500), "GameOfLife");
    sf::RectangleShape shape(sf::Vector2f(50, 50));
    shape.setFillColor(sf::Color::Green);

    // testing board
    Board board(sf::Vector2i(5, 5));
    board.setPosition(sf::Vector2i(0,0), true);
    cout << board.getPosition(sf::Vector2i(0, 0));

    while (window.isOpen()) {
        sf::Event event;
        
        if (event.type == sf::Event::Closed) {
            window.close();
        }

        window.clear();
        // do things
        //
        window.draw(shape);
        // 
        window.display();
    }
}
