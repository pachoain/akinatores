#ifndef NODO_HPP
#define NODO_HPP

#include <string>

using namespace std;

class Nodo
{

public :
    Nodo();
    Nodo(int ID_n, string Name_n, int id_from_n, bool response_n, int ID_son_l_n, int ID_son_r_n);
    ~Nodo();

    bool get_IsNode();
    int get_ID();
    string get_Name();
    int get_UpperNode();
    int get_IDsonY();
    int get_IDsonN();

    void set_IDsonY(int Yson);
    void set_IDsonN(int Nson);
    void set_UpperNode(int UN);

protected :

private :
    int ID;
    string Name;
    bool IsNode;
    int UpperNode;
    int ID_son_Y;
    int ID_son_N;

};

#endif // NODO_HPP
