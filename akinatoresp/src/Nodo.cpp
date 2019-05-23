#include "Nodo.hpp"

using namespace std;


Nodo::Nodo()
{

}

Nodo::Nodo(int ID_n, string Name_n, int id_from_n, bool response_n, int ID_son_l_n, int ID_son_r_n)
{
    ID=ID_n;
    Name=Name_n;
    UpperNode=id_from_n;
    IsNode=response_n;
    if (IsNode)
        {
            ID_son_Y=ID_son_l_n;
            ID_son_N=ID_son_r_n;
        }
}

Nodo::~Nodo()
{

}

//Tells if it has sons
bool Nodo::get_IsNode()
{
    return IsNode;
}

//Return the Name/Question
string Nodo::get_Name()
{
    return Name;
}

//ID of the node, unique
int Nodo::get_ID()
{
    return ID;
}

//getter and setter for the father of this node
void Nodo::set_UpperNode(int UN)
{
    UpperNode=UN;
}

int Nodo::get_UpperNode()
{
    return UpperNode;
}

//getter and setter for the sons of this node
void Nodo::set_IDsonY(int Yson)
{
    IsNode=1;
    ID_son_Y=Yson;
}

int Nodo::get_IDsonY()
{
    return ID_son_Y;
}

void Nodo::set_IDsonN(int Nson)
{
    IsNode=1;
    ID_son_N=Nson;
}

int Nodo::get_IDsonN()
{
    return ID_son_N;
}

