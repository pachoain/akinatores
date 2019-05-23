#ifndef ARBOLBINARIO_HPP
#define ARBOLBINARIO_HPP
#include "Nodo.hpp"


class ArbolBinario
{
    private:
        Nodo Raiz;
        ArbolBinario *Yes;
        ArbolBinario *No;


    public:
        ArbolBinario();
        ArbolBinario(Nodo nod, ArbolBinario *arbolYes=NULL, ArbolBinario *arbolNo=NULL);
        virtual ~ArbolBinario();

        void setRaiz(Nodo raiz);
        Nodo getRaiz();
        void setYes(ArbolBinario Yes);
        ArbolBinario getYes();
        void setNo(ArbolBinario No);
        ArbolBinario getNo();

        ArbolBinario anadirNodo(Nodo nodo, ArbolBinario padre, bool respuesta);
        void borrarNodo(Nodo nodo);
        void buscar();


    protected:


};

#endif // ARBOLBINARIO_HPP
