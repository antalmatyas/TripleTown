#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#define maptype vector<vector<string>>

using namespace std;

void createMap(maptype &gameMap, int rows, int cols)
{
    vector<string> row;
    for (int i = 0; i < rows; i++)
    {
        row.push_back("0");
    }
    for (int i = 0; i < cols; i++)
    {
        gameMap.push_back(row);
    }
}

void showMap(maptype gameMap)
{
    for (size_t i = 0; i < gameMap.size(); i++)
    {
        for (size_t j = 0; j < gameMap[0].size(); j++)
        {
            cout << gameMap[i][j] << "\t";
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

void addElement(maptype &gameMap, int row, int col, string elementType)
{
    if(gameMap[row][col] == "0")
    {
        gameMap[row][col] = elementType;
        showMap(gameMap);
        // checkUpgrade(gameMap, row, col);
    }
    else{
        cout << "Mezo foglalt!" << endl;
    }
}

check

void checkUpgrade(maptype &gameMap, int row, int col)
{
    pair<int, int> coord;
    vector<pair<int, int>> connected;
    checkNeighbors();
}

int main()
{
    maptype gameMap;
    createMap(gameMap, 4, 4);
    showMap(gameMap);
    return 0;
}