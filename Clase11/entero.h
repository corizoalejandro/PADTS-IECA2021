#ifndef ENTERO_H
#define ENTERO_H

#include <iostream>

class Entero
{
public:
    Entero(int val);
    Entero();
    Entero operator + (const Entero &e);
    bool operator < (const Entero &e);
    bool operator == (const Entero &e);
    friend std::ostream & operator << (std::ostream &os, const Entero &e);
    int getVal() const;
    void setVal(int value);
    delete aux;
private:
    int val;
    void haz_algo();
};

#endif // ENTERO_H
