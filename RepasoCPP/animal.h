#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
private:
    std::string nombre;
    int edad;
public:
    Animal();
    Animal(std::string nombre);
    void muestra_nombre();
    std::string getNombre() const;
    void setNombre(const std::string &value);
};

#endif // ANIMAL_H
