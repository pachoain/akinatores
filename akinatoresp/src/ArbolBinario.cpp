#include "ArbolBinario.hpp"
#include "Nodo.hpp"

ArbolBinario::ArbolBinario()
{
    this->raiz = NULL;
}

ArbolBinario::ArbolBinario(Nodo nod)
{
    this->raiz = nod;
}

ArbolBinario::~ArbolBinario()
{
    delete this->raiz;
}

void ArbolBinario::setRaiz(Nodo nod){
    this->raiz = nod;
}

Nodo ArbolBinario::getRaiz(){
    return this->raiz;
}

void ArbolBinario::anadirNodo(Nodo nodo, Nodo padre, bool respuesta){
    //metodo para anadir un nodo

}

void ArbolBinarioborrarNodo(nodo nodo){
    // metodo para borrar un nodo en el arbol
}

