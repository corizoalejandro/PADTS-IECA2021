#ifndef ENTERO_H
#define ENTERO_H

#include <iostream>

class Entero
{
public:
    Entero(int dato);
    Entero operator + (Entero &e);
    friend std::ostream& operator << (std::ostream &os, const Entero &e);
private:
    int dato;
};


#endif // ENTERO_H
