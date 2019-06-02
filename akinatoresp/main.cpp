#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <sstream>

#include "Fichero.hpp"
#include "ArbolBinario.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    ifstream data("include/data.txt", ios::in);
    if(data) {
        string line;
        getline(data, line);

        Fichero * fichero = new Fichero();
        fichero[0].fillData(data);
        vector<Nodo> vNodo = fichero[0].vectToNodo();
        delete fichero;

        ArbolBinario * arbol = new ArbolBinario();

        // Choosing the root of the tree
        for (int i = 0 ; i < vNodo.size() ; i++) {
            if(vNodo[i].get_UpperNode() == 0) {
                arbol[0].setRaiz(vNodo[i]);
                vNodo[i].toString();
                break;
            }
        }

        delete arbol;

        data.close();
    } else {
        cerr << "Error loading data !" << endl;
    }

    return 0;
}
