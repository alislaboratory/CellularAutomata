#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

#include "cell.h"

class Board {
    public:
        Board(sf::Vector2i size){
            for (int i=0;i++; i<size.y){
                for (int j=0;j++;j<size.x){
                    board[i][j] = Cell(sf::Vector2i(j, i));
                }
            }
        }

        bool getPosition(sf::Vector2i position){return board[position.y][position.x].Get();}
        
        void setPosition(sf::Vector2i position, bool state){board[position.y][position.x].Set(state);}


    private:
        vector <vector <Cell>> board;
        
};
