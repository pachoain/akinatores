#ifndef ARBOLBINARIO_HPP
#define ARBOLBINARIO_HPP
#include "Nodo.hpp"


class ArbolBinario
{
    private:
        Nodo raiz;
        ArbolBinario *yes;
        ArbolBinario *no;
        ArbolBinario *father;


    public:
        ArbolBinario();
        ArbolBinario(Nodo nod, ArbolBinario *arbolYes=NULL, ArbolBinario *arbolNo=NULL, ArbolBinario *fath=NULL);
        virtual ~ArbolBinario();

        void setRaiz(Nodo raiz);
        Nodo getRaiz();
        void setYes(ArbolBinario Yes);
        ArbolBinario getYes();
        void setNo(ArbolBinario No);
        ArbolBinario getNo();
        void setFather(ArbolBinario Father);
        ArbolBinario getFather();

        ArbolBinario anadirNodo(Nodo nodo, ArbolBinario Padre, bool respuesta);
        void borrarNodo(Nodo nodo);
        void buscar();
        void toString();


    protected:


};

#endif // ARBOLBINARIO_HPP
