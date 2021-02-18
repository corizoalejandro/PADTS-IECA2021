#include "persona.h"

Persona::Persona(std::string nombre, std::string rfc, int edad)
{
    this->nombre = nombre;
    this->rfc = rfc;
    this->edad = edad;
    this->diabetes = 1;
}

Persona::Persona(const Persona &persona)
{
    this->nombre = persona.nombre;
    this->rfc = persona.rfc;
    this->edad = persona.edad;
}

void Persona::muestra_datos()
{
    std::cout << "Nombre: " << this->nombre << std::endl;
    std::cout << "RFC: " << this->rfc << std::endl;
    std::cout << "Edad: " << this->edad << " anios." << std::endl;
}

void Persona::muestra_algo(std::string cadena)
{
    std::cout << "Mostrando " << cadena << std::endl;
}

std::string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(const std::string &value)
{
    nombre = value;
}

std::string Persona::getRfc() const
{
    return rfc;
}

void Persona::setRfc(const std::string &value)
{
    rfc = value;
}

int Persona::getEdad() const
{
    return edad;
}

Personita::Personita(std::string nombre, std::string rfc, int edad) : Persona(nombre, rfc, edad)
{
    this->diabetes = 0;
}

bool Personita::tengoDiabetes()
{
    if(this->diabetes)
        return true;
    else
        return false;
}
