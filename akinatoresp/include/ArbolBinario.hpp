#ifndef ARBOLBINARIO_HPP
#define ARBOLBINARIO_HPP


class ArbolBinario
{
    private:
        nodo raiz;


    public:
        ArbolBinario();
        virtual ~ArbolBinario();

        void setRaiz(Nodo raiz);
        Nodo getRaiz();
        void anadirNodo(Nodo nodo, Nodo padre, bool respuesta);
        void borrarNodo(Nodo nodo);


    protected:


};

#endif // ARBOLBINARIO_HPP
