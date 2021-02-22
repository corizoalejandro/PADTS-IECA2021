#include "nodo.h"

Nodo::Nodo()
{
    this->sig = NULL;
}

Nodo::Nodo(std::string dato)
{
    this->dato = dato;
    this->sig = NULL;
}

Nodo *Nodo::getSig() const
{
    return sig;
}

void Nodo::setSig(Nodo *value)
{
    sig = value;
}

std::string Nodo::getDato() const
{
    return dato;
}

void Nodo::setDato(const std::string &value)
{
    dato = value;
}


Lista::Lista()
{
    inicio = NULL;
}

void Lista::setInicio(Nodo *nodo)
{
    inicio = nodo;
}

void Lista::imprimeLista()
{
    for(Nodo *aux=this->inicio;aux != NULL; aux = aux->sig){
        std::cout << "Cancion: " << aux->dato << std::endl;
    }
}
