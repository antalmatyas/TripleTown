#include "Game.cpp"
using namespace std;

int main()
{
    Game newGame;
    newGame.createMap(3, 3);
    newGame.addElement(0, 0, "A1");
    newGame.addElement(1, 0, "B1");
    newGame.addElement(2, 0, "C2");
    newGame.showMap();
    vector<string> _sq{"A1", "B1", "C1"};
    newGame.setSequence(_sq);
    newGame.play(0);
    cout << newGame.getMaxValue();
    return 0;
}
