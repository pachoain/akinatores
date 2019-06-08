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

void ArbolBinario::setRaiz(const Nodo nod){
    this->raiz = nod;
}

Nodo ArbolBinario::getRaiz()const{
    return this->raiz;
}

void ArbolBinario::setYes(ArbolBinario arbol){
    this->yes = &arbol;
}

void ArbolBinario::setNo(ArbolBinario arbol){
    this->no = &arbol;
}

ArbolBinario ArbolBinario::getYes()const{
    return *this->yes;
}

ArbolBinario ArbolBinario::getNo()const{
    return *this->no;
}

//Métodos del arbol

void ArbolBinario::anadirNodo(ArbolBinario &padre, ArbolBinario &newArbol, bool respuesta){
    //metodo para anadir un nodo
    if(respuesta) {
        padre.setYes(newArbol);
        padre.getRaiz().set_IDsonY(newArbol.getRaiz().get_ID());
    } else {
        padre.setNo(newArbol);
        padre.getRaiz().set_IDsonN(newArbol.getRaiz().get_ID());
    }
}

void ArbolBinario::buscar(int newId, ArbolBinario &padre, bool prevRespuesta){

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
            string ansToCorrectAns;
            do {
                cout << "What would the correct answer be for " << correctAns << " ? [y/n]" << endl;
                cin >> ansToCorrectAns;
            } while (ansToCorrectAns != "y" && ansToCorrectAns != "n");
            bool boolAnsToCorrectAns;
            if(ansToCorrectAns == "y") {
                boolAnsToCorrectAns = true;
            } else {
                boolAnsToCorrectAns = false;
            }
            cout << "OK, I got it." << endl;
            Nodo newNodoFinal = Nodo(newId+1, correctAns, newId, false, 0, 0);
            ArbolBinario newArbolFinal = ArbolBinario(newNodoFinal);
            this->getRaiz().set_UpperNode(newId);
            if(boolAnsToCorrectAns) {
                Nodo newNodo = Nodo(newId, diff, this->getRaiz().get_UpperNode(), true, newId+1, this->getRaiz().get_ID());
                ArbolBinario newArbol = ArbolBinario(newNodo, this, &newArbolFinal);
                this->anadirNodo(padre, newArbol, prevRespuesta);
            } else {
                Nodo newNodo = Nodo(newId, diff, this->getRaiz().get_UpperNode(), true, this->getRaiz().get_ID(), newId+1);
                ArbolBinario newArbol = ArbolBinario(newNodo, &newArbolFinal, this);
                this->anadirNodo(padre, newArbol, prevRespuesta);
            }
        } else if (ans == "y") {
            return;
        } else {
            this->buscar(newId, padre, prevRespuesta);
        }
        return;
    }

    cout << raiz.get_Name() << "[y/n]" << endl;

    if (raiz.get_IsNode() == true){
        string respuesta;
        cin >> respuesta;
        if (respuesta == "y"){
            this->getYes().buscar(newId, *this, true);
        } else if (respuesta == "n"){
            this->getNo().buscar(newId, *this, false);
        } else {
            this->buscar(newId, padre, prevRespuesta);
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
