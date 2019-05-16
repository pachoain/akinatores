#ifndef NODO_HPP
#define NODO_HPP

class Nodo
{

public :
    Nodo(int ID_n, string Name_n, int id_from_n, bool response_n, int ID_son_l_n, int ID_son_r_n);
    ~Nodo();

    bool get_IsNode();
    int get_ID();
    string get_Name();
    int get_UpperNode();
    int get_IDsonL();
    int get_IDsonR();

    void set_IDsonL(int Lson);
    void set_IDsonR(int Rson);
    void set_UpperNode(int UN);

protected :

private :
    bool IsNode;
    int ID;
    string Name;
    int UpperNode;
    int ID_son_l;
    int ID_son_r;

};

#endif // NODO_HPP
