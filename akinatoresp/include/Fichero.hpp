#ifndef FICHERO_HPP
#define FICHERO_HPP

#include <vector>

#include "Nodo.hpp"
#include "ArbolBinario.hpp"

class Fichero
{
    public:
        Fichero();
        virtual ~Fichero();

        void fillData(ifstream& file);
        vector<Nodo> vectToNodo();
        ArbolBinario crearArbol(vector<Nodo> vNodo, int index);

    protected:

    private:
        vector<int> vId;
        vector<string> vName;
        vector<bool> vIsNode;
        vector<bool> vResponse;
        vector<int> vIdFrom;
        vector<int> vIdSonY;
        vector<int> vIdSonF;
};

#endif // FICHERO_HPP
