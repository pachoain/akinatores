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
    string response;
    string idFrom;
    string idSonY;
    string idSonF;

    if(getline(file, id, ';') &&
    getline(file, name, ';') &&
    getline(file, isNode, ';') &&
    getline(file, idFrom, ';') &&
    getline(file, idSonY, ';') &&
    getline(file, idSonF, ';') &&
    getline(file, response, ';')) {
        //cout << id << name << isNode << idFrom << idSonY << idSonF << endl;
        vId.push_back(stoi(id));
        vName.push_back(name);
        bool bIsNode;
        istringstream(isNode) >> bIsNode;
        bool bResponse;
        vIsNode.push_back(bIsNode);
        istringstream(response) >> bResponse;
        vIsNode.push_back(bResponse);
        vIdFrom.push_back(stoi(idFrom));
        vIdSonY.push_back(stoi(idSonY));
        vIdSonF.push_back(stoi(idSonF));

        fillData(file);
    }
}

vector<Nodo> Fichero::vectToNodo() {
    vector<Nodo> vNodo;

    for (int i = 0 ; i < (int)vId.size() ; i++) {
        Nodo temp = Nodo(vId[i], vName[i], vIsNode[i], vResponse[i], vIdSonY[i], vIdSonF[i],  vIdFrom[i]);
        vNodo.push_back(temp);
    }

    return vNodo;
}

ArbolBinario Fichero::crearArbol(vector<Nodo> vNodo, int index) {
    if(vNodo[index].get_IsNode()) {
        ArbolBinario yes = this->crearArbol(vNodo, vNodo[index].get_IDsonY()-1);
        ArbolBinario no = this->crearArbol(vNodo, vNodo[index].get_IDsonN()-1);
        ArbolBinario * raiz = new ArbolBinario(vNodo[index], &yes, &no);
        cout << vNodo[index].get_Name() << endl;
        return *raiz;
    } else {
        ArbolBinario * raiz = new ArbolBinario(vNodo[index]);
        cout << vNodo[index].get_Name() << endl;
        return *raiz;
    }
}
