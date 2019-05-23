#include <iostream>
#include <string>
#include "ArbolBinario.hpp"
#include "Nodo.hpp"

using namespace std;

//Constructores y destructor

ArbolBinario::ArbolBinario()
{
    this->Raiz = Nodo();
    this->Yes = NULL;
    this->No = NULL;
}

ArbolBinario::ArbolBinario(Nodo nod, ArbolBinario arbolYes, ArbolBinario arbolNo)
{
    this->Raiz = nod;
    this->Yes = &arbolYes;
    this->No = &arbolNo;
}

ArbolBinario::~ArbolBinario()
{

}

//Método de tipo setter y getter

void ArbolBinario::setRaiz(Nodo nod){
    this->Raiz = nod;
}

Nodo ArbolBinario::getRaiz(){
    return this->Raiz;
}

void ArbolBinario::setYes(ArbolBinario arbol){
    this->Yes = &arbol;
}

void ArbolBinario::setNo(ArbolBinario arbol){
    this->No = &arbol;
}

ArbolBinario ArbolBinario::getYes(){
    return *this->Yes;
}

ArbolBinario ArbolBinario::getNo(){
    return *this->No;
}

//Funciones del arbol

void ArbolBinario::anadirNodo(Nodo nodo, Nodo padre, bool respuesta){
    //metodo para anadir un nodo

}

void ArbolBinario::borrarNodo(Nodo nodo){
    // metodo para borrar un nodo en el arbol

}

void ArbolBinario::buscar(){

    if (Raiz.get_IsNode() == false){
        cout << Raiz.get_Name() << endl;
        return;
    }

    string respuesta;
    cout << Raiz.get_Name() << endl;
    cin >> respuesta;


    while (Raiz.get_IsNode() == true){
        if (respuesta == "y"){
            this->Yes->buscar();
        }
        else{
            this->No->buscar();
        }
    }
}

