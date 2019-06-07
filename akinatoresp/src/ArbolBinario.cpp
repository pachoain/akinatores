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
    this->father = NULL;
}

ArbolBinario::ArbolBinario(Nodo nod, ArbolBinario *arbolYes, ArbolBinario *arbolNo, ArbolBinario *fath)
{
    this->raiz = nod;
    this->yes = arbolYes;
    this->no = arbolNo;
    this->father = fath;
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

ArbolBinario ArbolBinario::getFather(){
    return *this->father;
}

void ArbolBinario::setFather(ArbolBinario Father){
    this->father = &Father;
}

//Métodos del arbol

ArbolBinario ArbolBinario::anadirNodo(Nodo nodo,  ArbolBinario padre, bool respuesta){
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
    return arbol;
}

void ArbolBinario::borrarNodo(Nodo nodo){
    // metodo para borrar un nodo en el arbol

}

void ArbolBinario::buscar(){

    if (raiz.get_IsNode() == false){
        cout << "It is : " << raiz.get_Name() << ". Is it correct ? [y/n]" << endl;
        string ans;
        cin >> ans;
        if(ans == "n") {
            cout << "Too bad ! Which is the correct answer ?" << endl;
            string correctAns;
            cin >> correctAns;
            cout << "What is the difference between " << correctAns << " and " << raiz.get_Name() << " ?" << endl;
            string diff;
            cin.ignore();
            getline(cin, diff);
            cout << "What would the correct answer be for " << correctAns << " ? [y/n]" << endl;
            string ansToCorrectAns;
            cin >> ansToCorrectAns;
            bool boolAnsToCorrectAns;
            if(ansToCorrectAns == "y") {
                boolAnsToCorrectAns = true;
            } else {
                boolAnsToCorrectAns = false;
            }
            cout << "OK, I got it." << endl;
            Nodo newNodo = Nodo();
            this->anadirNodo(newNodo, *this->father, boolAnsToCorrectAns);
        }
        return;
    }

    cout << raiz.get_Name() << "[y/n]" << endl;

    if (raiz.get_IsNode() == true){
        string respuesta;
        cin >> respuesta;
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
