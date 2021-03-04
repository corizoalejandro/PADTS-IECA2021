#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

enum TIPO {
    PERRO,
    GATO
};

class Animal
{
public:
    Animal(const char* nombre, int edad);
    Animal();
    friend ostream & operator << (ostream &os, const Animal &a);
private:
    char nombre[50];
    int edad;
    int tipo = PERRO;
};

#endif // ANIMAL_H
