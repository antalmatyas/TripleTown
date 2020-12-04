#include "Game.cpp"
using namespace std;

int main()
{
    vector<string> _sq{"A1", "B1"};
    Game newGame(3, 3, _sq);
    newGame.addElement(0, 0, "A1");
    newGame.addElement(1, 0, "B1");
    newGame.addElement(2, 0, "C2");
    newGame.showMap();
    newGame.play();
    cout << newGame.getMaxValue();
    return 0;
}
