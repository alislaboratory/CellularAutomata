
#include <SFML/Graphics.hpp>

#include "board.h"

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 250), "SFML works!");
    sf::RectangleShape shape(sf::Vector2f(100, 100));
    shape.setFillColor(sf::Color::Green);
    cout << "Working";
    Board board = Board(sf::Vector2i(10, 10));

    while (window.isOpen())
    {
        

        window.clear();
        // Things to do here
        window.draw(shape);
        for (int i=0;i<10;i++){
            for (int j=0;j<10;j++){
                cout << j << " " << i << " " << board.getPosition(sf::Vector2i(j, i)) << endl;
                cout << "I hate ings";
            }
        }

        // End of things to do
        window.display();
    }

    return 0;
}




