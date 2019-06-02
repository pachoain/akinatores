#ifndef FICHERO_HPP
#define FICHERO_HPP

#include <vector>

#include "Nodo.hpp"

class Fichero
{
    public:
        Fichero();
        virtual ~Fichero();

        void fillData(ifstream& file);
        vector<Nodo> vectToNodo();

    protected:

    private:
        vector<int> vId;
        vector<string> vName;
        vector<bool> vIsNode;
        vector<int> vIdFrom;
        vector<int> vIdSonY;
        vector<int> vIdSonF;
};

#endif // FICHERO_HPP
