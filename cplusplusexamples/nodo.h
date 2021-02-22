#ifndef NODO_H
#define NODO_H

#include <iostream>

class Lista;

class Nodo
{
public:
    Nodo();
    Nodo(std::string dato);
    Nodo *getSig() const;
    void setSig(Nodo *value);

    std::string getDato() const;
    void setDato(const std::string &value);

private:
    friend class Lista;
    friend void imprime_nodo(Nodo *nodo);
    std::string dato;
    Nodo *sig;
};

class Lista
{
public:
    Lista();
    void setInicio(Nodo *nodo);
    void imprimeLista();
private:
    Nodo *inicio;
};

#endif // NODO_H
