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

        Fichero fichero = Fichero();
        fichero.fillData(data);
        vector<Nodo> vNodo = fichero.vectToNodo();


        ArbolBinario arbol = fichero.crearArbol(vNodo, 0);
        arbol.buscar();

        data.close();
    } else {
        cerr << "Error loading data !" << endl;
    }

    return 0;
}
