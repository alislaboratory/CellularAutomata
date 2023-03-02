#include <vector>
#include <iostream>
#include "Cell.h"

using namespace std;


class Board {
    public:
        Board(sf::Vector2i size){
            for (int i=0;i<size.y;i++){

                vector<Cell*> tempRow;
                for (int j=0;j<size.x;j++){
                    tempRow.push_back(new Cell(sf::Vector2i(j, i)));
                }

                grid.push_back(tempRow); // gotta find better way to init 2d vectors with constructed objects
            }
        }

        Cell * getPosition(sf::Vector2i pos){return grid[pos.y][pos.x];}
        

    private:
        vector<vector<Cell*>> grid;
};
