#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

class Cell {
    public:
        Cell(sf::Vector2i p_position){
            position = p_position;
            state = true;
        }

        bool Get(){return state;}
        void Set(bool p_state){state = p_state;}

    private:
        bool state;
        sf::Vector2i position;
};
