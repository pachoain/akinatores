#include "Nodo.hpp"


Nodo::Nodo(int ID_n, string Name_n, int id_from_n, bool response_n, int ID_son_l_n, int ID_son_r_n)
{
    ID=ID_n;
    Name=Name_n;
    UpperNode=id_from_n;
    IsNode=response_n;
    if (IsNode)
        {
            ID_son_l=ID_son_l_n;
            ID_son_r=ID_son_r_n;
        }
}

Nodo::~Nodo()
{

}

//Tells if it has sons
bool Nodo::get_IsNode()
{
    return(IsNode);
}

//Return the Name/Question
string Nodo::get_Name()
{
    return(Name);
}

//ID of the node, unique
int Nodo::get_ID()
{
    return(ID);
}

//getter and setter for the father of this node
void Nodo::set_UpperNode(int UN)
{
    UpperNode=UN;
}

int Nodo::get_UpperNode()
{
    return(UpperNode);
}

//getter and setter for the sons of this node
void Nodo::set_IDsonL(int Lson)
{
    IsNode=1;
    ID_son_l=Lson;
}

int Nodo::get_IDsonL()
{
    return(ID_son_l)
}

void Nodo::set_IDsonR(int Rson)
{
    IsNode=1;
    ID_son_r=Rson;
}

int Nodo::get_IDsonR()
{
    return(ID_son_r)
}

