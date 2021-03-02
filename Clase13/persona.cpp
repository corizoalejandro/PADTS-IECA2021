#include "persona.h"

Persona::Persona()
{

}

Persona::Persona(std::string nombre, std::string apellidos, int edad)
{
    this->nombre = nombre;
    this->apellidos = apellidos;
    this->edad = edad;
}

Persona::Persona(int edad)
{
    this->edad = edad;
}

int Persona::getEdad() const
{
    return edad;
}

void Persona::setEdad(int value)
{
    edad = value;
}

std::string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const std::string &value)
{
    nombre = value;
}

std::ostream &operator <<(std::ostream &os, const Persona &p)
{
    os << "Nombre: " << p.nombre << std::endl <<
          "Apellidos: " << p.apellidos << std::endl <<
          "Edad: " << p.edad << std::endl << std::endl;
    return os;
}
