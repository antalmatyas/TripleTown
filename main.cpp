#include "Game.cpp"
using namespace std;

int main()
{
    Game newGame;
    newGame.createMap(4, 4);
    newGame.showMap();
    return 0;
}