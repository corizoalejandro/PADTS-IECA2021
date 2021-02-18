#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

class Persona
{
public:
    explicit Persona(std::string nombre, std::string rfc, int edad);
    Persona(const Persona &persona);
    void muestra_datos();
    static void muestra_algo(std::string cadena);
    std::string getNombre() const;
    void setNombre(const std::string &value);

    std::string getRfc() const;
    void setRfc(const std::string &value);

    int getEdad() const;

protected:
    int diabetes;
private:
    std::string nombre;
    std::string rfc;
    int edad;

};

class Personita : public Persona {
public:
    Personita(std::string nombre, std::string rfc, int edad);
    bool tengoDiabetes();
};

#endif // PERSONA_H
