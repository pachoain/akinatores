#include <fstream>
#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>

#include "Fichero.hpp"

using namespace std;

Fichero::Fichero()
{
    //ctor
}

Fichero::~Fichero()
{
    //dtor
}

void Fichero::fillData(ifstream& file) {
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

        fillData(file);
    }
}

vector<Nodo> Fichero::vectToNodo() {
    vector<Nodo> vNodo;

    for (int i = 0 ; i < vId.size() ; i++) {
        Nodo * temp = new Nodo(vId[i], vName[i], vIdFrom[i], vIsNode[i], vIdSonY[i], vIdSonF[i]);
        vNodo.push_back(temp[0]);
        delete temp;
    }

    return vNodo;
}
