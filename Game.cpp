#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Game
{
    vector<vector<string>> gameMap;
public:
    void createMap(int rows, int cols)
    {
        vector<string> row;
        for (int i = 0; i < rows; i++)
        {
            row.push_back("0");
        }
        for (int i = 0; i < cols; i++)
        {
            this->gameMap.push_back(row);
        }
    }
    void showMap()
    {
        for (size_t i = 0; i < this->gameMap.size(); i++)
        {
            for (size_t j = 0; j < this->gameMap[0].size(); j++)
            {
                cout << this->gameMap[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    string incrementField(string in)
    {
        char inc = in[1];
        inc++;
        string out = in[0] + string(1, inc);
        return out;
    }
    void addElement(int row, int col, string elementType)
    {
        if (this->gameMap[row][col] == "0")
        {
            this->gameMap[row][col] = elementType;
            this->showMap();
            // checkUpgrade(gameMap, row, col);
        }
        else
        {
            cout << "Mezo foglalt!" << endl;
        }
    }
    void checkUpgrade(int row, int col)
    {
        vector<pair<int, int>> connectedList;
        //checkNeighbours(pair<int, int> node, vector<pair<int, int>> &connectedList);
    }
};