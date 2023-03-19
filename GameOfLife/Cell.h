#include <SFML/Graphics.hpp>

class Cell {
    public:
        // Cell(sf::Vector2i pos){position = pos; state = false;}
        
        bool getState(){return state;}
        void setState(bool sta){state = sta;}

    private:
        sf::Vector2i position;
        bool state;
};
