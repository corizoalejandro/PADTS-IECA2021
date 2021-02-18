#include "fecha.h"

#include <iostream>

Fecha::Fecha(int dia, int mes, int anio)
{
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

void Fecha::muestra_fecha()
{
    muestra_fecha(this->dia,this->mes,this->anio);
}

void Fecha::muestra_fecha(int dia, int mes, int anio)
{
    std::cout << dia << "-" << mes << "-" << anio << std::endl;
}
