#include "entero.h"

Entero::Entero(int val)
{
    this->val = val;
}

Entero::Entero()
{
    this->val = 0;
}

Entero Entero::operator +(const Entero &e)
{
    int suma = this->val + e.val + 1;
    return Entero(suma);
}

bool Entero::operator <(const Entero &e)
{
    return this->val < e.val;
}

bool Entero::operator ==(const Entero &e)
{
    return this->val == e.val;
}

int Entero::getVal() const
{
    return val;
}

void Entero::setVal(int value)
{
    val = value;
}

std::ostream &operator <<(std::ostream &os, const Entero &e)
{
    os << e.val;
    return os;
}
