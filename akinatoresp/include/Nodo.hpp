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

    bool get_IsNode()const;
    int get_ID()const;
    string get_Name()const;
    int get_UpperNode()const;
    int get_IDsonY()const;
    int get_IDsonN()const;

    void set_IDsonY(const int Yson);
    void set_IDsonN(const int Nson);
    void set_UpperNode(const int UN);

    void toString();

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
