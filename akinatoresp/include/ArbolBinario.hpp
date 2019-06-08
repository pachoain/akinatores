#ifndef ARBOLBINARIO_HPP
#define ARBOLBINARIO_HPP
#include "Nodo.hpp"


class ArbolBinario
{
    private:
        Nodo raiz;
        ArbolBinario *yes;
        ArbolBinario *no;


    public:
        ArbolBinario();
        ArbolBinario(Nodo nod, ArbolBinario *arbolYes=NULL, ArbolBinario *arbolNo=NULL);
        virtual ~ArbolBinario();

        void setRaiz(const Nodo raiz);
        Nodo getRaiz()const;
        void setYes(const ArbolBinario Yes);
        ArbolBinario getYes()const;
        void setNo(const ArbolBinario No);
        ArbolBinario getNo()const;

        void anadirNodo(ArbolBinario &padre, ArbolBinario &newArbol, bool respuesta);
        void buscar(int newId, ArbolBinario &padre, bool prevRespuesta);
        void toString();


    protected:


};

#endif // ARBOLBINARIO_HPP
