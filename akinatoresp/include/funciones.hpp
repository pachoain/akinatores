#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

void fillData(ifstream& file, vector<int> vId, vector<string> vName, vector<bool> vIsNode, vector<int> vIdFrom, vector<int> vIdSonY, vector<int> vIdSonF) {
    string id;
    string name;
    string isNode;
    string idFrom;
    string idSonY;
    string idSonF;

    if(getline(file, id, ';') &&
    getline(file, name, ';') &&
    getline(file, isNode, ';') &&
    getline(file, idFrom, ';') &&
    getline(file, idSonY, ';') &&
    getline(file, idSonF, ';')) {
        cout << id << name << isNode << idFrom << idSonY << idSonF << endl;
        vId.push_back(stoi(id));
        vName.push_back(name);
        bool bIsNode;
        istringstream(isNode) >> bIsNode;
        vIsNode.push_back(bIsNode);
        vIdFrom.push_back(stoi(idFrom));
        vIdSonY.push_back(stoi(idSonY));
        vIdSonF.push_back(stoi(idSonF));

        fillData(file, vId, vName, vIsNode, vIdFrom, vIdSonY, vIdSonF);
    }
}
