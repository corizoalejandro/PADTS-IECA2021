#include "entero.h"

Entero::Entero(int dato)
{
    this->dato = dato;
}

Entero Entero::operator +(Entero &e)
{
    Entero resultado = this->dato + e.dato + 1;
    return resultado;
}

std::ostream& operator <<(std::ostream &os, const Entero &e)
{
    os << e.dato;
    return os;
}
