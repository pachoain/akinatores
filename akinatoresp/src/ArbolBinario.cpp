#include "ArbolBinario.hpp"
#include "Nodo.hpp"

ArbolBinario::ArbolBinario()
{
    this.raiz = NULL;
}

ArbolBinario::ArbolBinario(nodo nod)
{
    this.raiz = nod;
}

ArbolBinario::~ArbolBinario()
{
    delete this.raiz;
}

void ArbolBinario::setRaiz(nodo nod){
    this.raiz = nod;
}

nodo ArbolBinario::getRaiz(){
    return this.raiz;
}

void ArbolBinario::anadirNodo(nodo nodo, nodo padre, bool respuesta){
    //metodo para anadir un nodo

}

void ArbolBinarioborrarNodo(nodo nodo){
    // metodo para borrar un nodo en el arbol
}

