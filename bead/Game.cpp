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
            cout << "\n" << endl;
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
            checkUpgrade(row, col);
            this->showMap();
        }
        else
        {
            cout << "Mezo foglalt!" << endl;
        }
    }
    void checkUpgrade(int row, int col)
    {
        vector<pair<int, int>> connectedList;
        checkNeighbours(make_pair(row, col), connectedList);
        if(connectedList.size() >= 3)
        {
            string type = this->gameMap[row][col];
            for (size_t i = 0; i < connectedList.size(); i++)
            {
                this->gameMap[connectedList[i].first][connectedList[i].second] = "0";
            }
            gameMap[row][col] = incrementField(type);
        }
    }
    void checkNeighbours(pair<int, int> node, vector<pair<int, int>> &connectedList)
    {
        pair<int, int> nextNode;
        if(node.first + 1 < gameMap.size())
        {
            if(gameMap[node.first + 1][node.second] == gameMap[node.first][node.second])
            {
                nextNode = make_pair(node.first + 1, node.second);
                if(!checkIfInList(nextNode, connectedList))
                {
                    connectedList.push_back(nextNode);
                    checkNeighbours(nextNode, connectedList);
                }
                
            }
        }
        if(node.first - 1 >= 0)
        {
            if(gameMap[node.first - 1][node.second] == gameMap[node.first][node.second])
            {
                nextNode = make_pair(node.first - 1, node.second);
                if(!checkIfInList(nextNode, connectedList))
                {
                    connectedList.push_back(nextNode);
                    checkNeighbours(nextNode, connectedList);
                }
            }
        }
        if(node.second + 1 < gameMap[0].size())
        {
            if(gameMap[node.first][node.second + 1] == gameMap[node.first][node.second])
            {
                nextNode = make_pair(node.first, node.second + 1);
                if(!checkIfInList(nextNode, connectedList))
                {
                    connectedList.push_back(nextNode);
                    checkNeighbours(nextNode, connectedList);
                }
            }
        }
        if(node.second - 1 >= 0)
        {
            if(gameMap[node.first][node.second - 1] == gameMap[node.first][node.second])
            {
                nextNode = make_pair(node.first, node.second - 1);
                if(!checkIfInList(nextNode, connectedList))
                {
                    connectedList.push_back(nextNode);
                    checkNeighbours(nextNode, connectedList);
                }
            }
        }
    }
    bool checkIfInList(pair<int, int> node, vector<pair<int, int>> connectedList)
    {
        bool inList = false;
        for (size_t i = 0; i < connectedList.size(); i++)
        {
            if(node.first == connectedList[i].first && node.second == connectedList[i].second)
            {
                inList = true;
            }
        }
        return inList;
    }
};