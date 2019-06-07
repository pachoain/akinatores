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

        ArbolBinario dolphin = ArbolBinario(vNodo[2]);
        ArbolBinario octopus = ArbolBinario(vNodo[4]);
        ArbolBinario shark = ArbolBinario(vNodo[5]);
        ArbolBinario tentacles = ArbolBinario(vNodo[3], &octopus, &shark);
        ArbolBinario mammal = ArbolBinario(vNodo[1], &dolphin, &tentacles);
        ArbolBinario bird = ArbolBinario(vNodo[7]);
        ArbolBinario cat = ArbolBinario(vNodo[8]);
        ArbolBinario fly = ArbolBinario(vNodo[6], &bird, &cat);
        ArbolBinario arbol = ArbolBinario(vNodo[0], &mammal, &fly);

        dolphin.setFather(mammal);
        octopus.setFather(tentacles);
        shark.setFather(tentacles);
        tentacles.setFather(mammal);
        mammal.setFather(arbol);
        bird.setFather(fly);
        cat.setFather(fly);
        fly.setFather(arbol);

        //ArbolBinario arbol = fichero.crearArbol(vNodo, 0);
        string ans;
        do {
            cout << "Do you want to play ? [y/n]" << endl;
            cin >> ans;
            if(ans == "y") {
                arbol.buscar();
            }
        } while(ans != "n");

        data.close();
    } else {
        cerr << "Error loading data !" << endl;
    }

    return 0;
}
