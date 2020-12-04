#include "Game.cpp"
using namespace std;

int main()
{
    Game newGame;
    newGame.createMap(3, 3);
    newGame.showMap();
    newGame.setMaxStep(0);
    vector<string> _sq{"A1", "B1", "C1"};
    newGame.setSequence(_sq);
    newGame.play(0);
    cout << newGame.getMaxValue();
    return 0;
}
