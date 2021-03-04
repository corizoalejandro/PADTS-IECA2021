#include "animal.h"
#include <cstring>

Animal::Animal(const char* nombre, int edad)
{
    strcpy(this->nombre, nombre);
    this->edad = edad;
}

Animal::Animal()
{

}

ostream & operator <<(ostream &os, const Animal &a)
{
    os << "Nombre: " << a.nombre << endl <<
          "Edad: " << a.edad << endl;
    return os;
}
