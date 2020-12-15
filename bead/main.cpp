#include "Game.cpp"
using namespace std;

int main()
{
    Game *newGame = new Game();
    newGame->importGame("testfile1.txt");
    newGame->showMap();
    newGame->play();
    cout << newGame->getMaxValue();
    newGame->~Game();
    return 0;
}

