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

Persona::Persona(QJsonObject &object)
{
    this->nombre = object.value("nombre").toString().toStdString();
    this->apellidos = object.value("apellidos").toString().toStdString();
    this->edad = object.value("edad").toInt();
}

ifstream & operator >>(ifstream &archivito, Persona &p)
{
    int tam;
    char *buffer;
    /* Leyendo nombre */
    archivito.read((char*) &tam, sizeof (int));
    buffer = new char[tam+1];
    archivito.read(buffer, tam);
    buffer[tam] = '\0';
    p.nombre = buffer;
    delete buffer;
    /* Leyendo apellidos */
    archivito.read((char*) &tam, sizeof (int));
    buffer = new char[tam+1];
    archivito.read(buffer, tam);
    buffer[tam] = '\0';
    p.apellidos = buffer;
    /* Leyendo edad */
    archivito.read((char*) p.edad, sizeof(int));

    return archivito;
}

ofstream &operator <<(ofstream &archivito, const Persona &p)
{
    int tam;
    /* Almacena nombre */
    tam = p.nombre.size();
    archivito.write((char*) &tam, sizeof (int));
    archivito.write(p.nombre.c_str(), tam);
    /* Almacena apellido */
    tam = p.apellidos.size();
    archivito.write((char*) &tam, sizeof (int));
    archivito.write(p.apellidos.c_str(), tam);
    /* Almacena edad */
    archivito.write((char*) &p.edad, sizeof (int));
    return archivito;
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

std::string Persona::getApellidos() const
{
    return apellidos;
}

void Persona::setApellidos(const std::string &value)
{
    apellidos = value;
}

QJsonObject Persona::get_json()
{
    QJsonObject object;
    object.insert("nombre", QString(this->nombre.c_str()));
    object.insert("apellidos", QString(this->apellidos.c_str()));
    object.insert("edad", this->edad);
    return object;
}

std::ostream &operator <<(std::ostream &os, const Persona &p)
{
    os << "Nombre: " << p.nombre << std::endl <<
          "Apellidos: " << p.apellidos << std::endl <<
          "Edad: " << p.edad << std::endl << std::endl;
    return os;
}
