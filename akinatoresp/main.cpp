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

        for (int i = 0 ; i < vNodo.size() ; i++) {
            vNodo[i].toString();
        }

        data.close();
    } else {
        cerr << "Error loading data !" << endl;
    }

    return 0;
}
