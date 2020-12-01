#include "Game.cpp"
using namespace std;

int main()
{
    Game newGame;
    newGame.createMap(4, 4);
    newGame.showMap();
    newGame.addElement(0, 0, "A1");
    newGame.addElement(0, 1, "A1");
    newGame.addElement(1, 2, "A1");
    newGame.addElement(2, 2, "A1");
    newGame.addElement(0, 2, "A1");
    return 0;
}
