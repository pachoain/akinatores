#ifndef ARBOLBINARIO_HPP
#define ARBOLBINARIO_HPP


class ArbolBinario
{
    private:
        nodo raiz;


    public:
        ArbolBinario();
        virtual ~ArbolBinario();

        void setRaiz(nodo raiz);
        nodo getRaiz();
        void anadirNodo(nodo nodo, nodo padre, bool respuesta);
        void borrarNodo(nodo nodo);


    protected:


};

#endif // ARBOLBINARIO_HPP
