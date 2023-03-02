#include <iostream>

using namespace std;

class Cell {
    public:
        bool getState(){return state;}
        void setState(bool newState){state = newState;}

    private:
        bool state;

};
int main() {

    Cell* myCell = new Cell();
    myCell->setState(true);
    
    cout << myCell->getState() << endl;
    

    return 0;
}
