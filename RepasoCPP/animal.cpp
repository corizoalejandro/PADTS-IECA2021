#include "animal.h"

std::string Animal::getNombre() const
{
    return nombre;
}

void Animal::setNombre(const std::string &value)
{
    nombre = value;
}

Animal::Animal()
{
    this->nombre = "Nana";
}

Animal::Animal(std::string nombre)
{
    this->nombre = nombre;
}

void Animal::muestra_nombre()
{
    std::cout << this->nombre << std::endl;
}
