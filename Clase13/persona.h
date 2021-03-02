#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <sstream>

class Persona
{
public:
    Persona();
    Persona(std::string nombre, std::string apellidos, int edad);
    Persona(int edad);
    friend std::ostream & operator << (std::ostream &os, const Persona &p);
    int getEdad() const;
    void setEdad(int value);

    std::string getNombre() const;
    void setNombre(const std::string &value);

private:
    std::string nombre;
    std::string apellidos;
    int edad;
};

#endif // PERSONA_H
