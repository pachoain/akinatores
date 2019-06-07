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

ArbolBinario::ArbolBinario(Nodo nod, ArbolBinario *arbolYes, ArbolBinario *arbolNo)
{
    this->Raiz = nod;
    this->Yes = arbolYes;
    this->No = arbolNo;
}

ArbolBinario::~ArbolBinario()
{

}

//M�todo de tipo setter y getter

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

//M�todos del arbol

ArbolBinario ArbolBinario::anadirNodo(Nodo nodo, ArbolBinario padre, bool respuesta){
    //metodo para anadir un nodo
    ArbolBinario arbol = ArbolBinario(nodo);
    if (respuesta){
        padre.Yes = &arbol;
        padre.getRaiz().set_IDsonY(nodo.get_ID());
        nodo.set_UpperNode(padre.getRaiz().get_ID());
    }
    else{
        padre.No = &arbol;
        padre.getRaiz().set_IDsonN(nodo.get_ID());
        nodo.set_UpperNode(padre.getRaiz().get_ID());
    }
    return padre;
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

