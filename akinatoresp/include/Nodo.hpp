#ifndef NODO_HPP
#define NODO_HPP

#include <string>

using namespace std;

class Nodo
{

public :
    Nodo();
    Nodo(int ID_n, string Name_n, bool IsNode_n, bool response_n, int ID_son_l_n, int ID_son_r_n, int id_from_n = NULL);
    ~Nodo();

    bool get_IsNode();
    int get_ID();
    string get_Name();
    int get_UpperNode();
    int get_IDsonY();
    int get_IDsonN();
    bool get_response();

    void set_IDsonY(int Yson);
    void set_IDsonN(int Nson);
    void set_UpperNode(int UN);

    void toString();

protected :

private :
    int ID;
    string Name;
    bool IsNode;
    bool response;
    int UpperNode;
    int ID_son_Y;
    int ID_son_N;

};

#endif // NODO_HPP
