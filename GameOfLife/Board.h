#include <vector>
#include <iostream>
#include "Cell.h"

using namespace std;


class Board {
    public:
        Board(sf::Vector2i size){
            
        }

        bool getState(sf::Vector2i pos){return grid.at(pos.y).at(pos.x).getState();}
        // bool setState(sf::Vector2i pos{return grid[pos.y[pos.x].setState(
        

    private:
        vector<vector<Cell>> grid;
};
