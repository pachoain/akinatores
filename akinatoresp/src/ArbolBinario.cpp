#include "ArbolBinario.hpp"
#include "Nodo.hpp"

//COnstructores y destructor

ArbolBinario::ArbolBinario()
{
    this->raiz = Nodo();
    this->Yes = NULL;
    this->No = NULL;
}

ArbolBinario::ArbolBinario(Nodo nod, ArbolBinario arbolYes, ArbolBinario arbolNo)
{
    this->raiz = nod;
    this->Yes = arbolYes;
    this->No = arbolNo;
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
    this->Yes = arbol;
}

void ArbolBinario::setNo(ArbolBinario arbol){
    this->No = arbol;
}

ArbolBinario ArbolBinario::getYes(){
    return this->Yes;
}

ArbolBinario ArbolBinario::getNo(){
    return this->No;
}

//Funciones del arbol

void ArbolBinario::anadirNodo(Nodo nodo, Nodo padre, bool respuesta){
    //metodo para anadir un nodo

}

void ArbolBinario::borrarNodo(nodo nodo){
    // metodo para borrar un nodo en el arbol

}

void ArbolBinario::buscar(){

    if (raiz.get_IsNode() == false){
        cout << araiz.get_Name() << endl;
        return;
    }

    char respuesta;
    cout << raiz.get_Name() << endl;
    cin >> respuesta >> endl;


    while (raiz.get_IsNode() == true){
        if (a == "y"){
            this->Yes.buscar();
        }
        else{
            this->No.buscar();
        }
    }
}

