#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <QJsonObject>

using namespace std;

class Persona
{
public:
    Persona();
    Persona(std::string nombre, std::string apellidos, int edad);
    Persona(int edad);
    Persona(QJsonObject &object);
    friend std::ostream & operator << (std::ostream &os, const Persona &p);
    friend ofstream & operator << (ofstream &archivito, const Persona &p);
    friend ifstream & operator >> (ifstream &archivito, Persona &p);
    int getEdad() const;
    void setEdad(int value);

    std::string getNombre() const;
    void setNombre(const std::string &value);

    std::string getApellidos() const;
    void setApellidos(const std::string &value);

    QJsonObject get_json();

private:
    std::string nombre;
    std::string apellidos;
    int edad;
};

#endif // PERSONA_H
