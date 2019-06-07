#include <iostream>
#include <string>
#include "ArbolBinario.hpp"
#include "Nodo.hpp"

using namespace std;

//Constructores y destructor

ArbolBinario::ArbolBinario()
{
    this->raiz = Nodo();
    this->yes = NULL;
    this->no = NULL;
}

ArbolBinario::ArbolBinario(Nodo nod, ArbolBinario *arbolYes, ArbolBinario *arbolNo)
{
    this->raiz = nod;
    this->yes = arbolYes;
    this->no = arbolNo;
}

ArbolBinario::~ArbolBinario()
{

}

//Método de tipo setter y getter

void ArbolBinario::setRaiz(Nodo nod){
    this->raiz = nod;
}

Nodo ArbolBinario::getRaiz(){
    return this->raiz;
}

void ArbolBinario::setYes(ArbolBinario arbol){
    this->yes = &arbol;
}

void ArbolBinario::setNo(ArbolBinario arbol){
    this->no = &arbol;
}

ArbolBinario ArbolBinario::getYes(){
    return *this->yes;
}

ArbolBinario ArbolBinario::getNo(){
    return *this->no;
}

//Métodos del arbol

ArbolBinario ArbolBinario::anadirNodo(Nodo nodo, ArbolBinario padre, bool respuesta){
    //metodo para anadir un nodo
    ArbolBinario arbol = ArbolBinario(nodo);
    if (respuesta){
        padre.yes = &arbol;
        padre.getRaiz().set_IDsonY(nodo.get_ID());
        nodo.set_UpperNode(padre.getRaiz().get_ID());
    }
    else{
        padre.no = &arbol;
        padre.getRaiz().set_IDsonN(nodo.get_ID());
        nodo.set_UpperNode(padre.getRaiz().get_ID());
    }
    return padre;
}

void ArbolBinario::borrarNodo(Nodo nodo){
    // metodo para borrar un nodo en el arbol

}

void ArbolBinario::buscar(){

    if (raiz.get_IsNode() == false){
        cout << raiz.get_Name() << endl;
        return;
    }

    string respuesta;
    cout << raiz.get_Name() << endl;
    cin >> respuesta;


    while (raiz.get_IsNode() == true){
        if (respuesta == "y"){
            this->yes->buscar();
        }
        else{
            this->no->buscar();
        }
    }
}

void ArbolBinario::toString(){
    this->getRaiz().toString();

    if(this->getRaiz().get_IsNode()) {
        this->getYes().toString();
    }
    if(this->getRaiz().get_IsNode()) {
        this->getNo().toString();
    }
}
