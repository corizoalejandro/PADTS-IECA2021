#include "fecha.h"

#include <iostream>

Fecha::Fecha(int dia, int mes, int anio)
{
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

Fecha::Fecha()
{
    this->dia = 0;
    this->mes = 0;
    this->anio = 0;
}

void Fecha::muestra_fecha()
{
    muestra_fecha(this->dia,this->mes,this->anio);
}

void Fecha::muestra_fecha(int dia, int mes, int anio)
{
    std::cout << dia << "-" << mes << "-" << anio << std::endl;
}

void Fecha::muestra_fecha(int dia, int mes, int anio, char separador)
{
    std::cout << dia << separador << mes << separador << anio << std::endl;
}

void Fecha::set_fecha(int dia, int mes, int anio)
{
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

//FechaHora::FechaHora(int dia, int mes, int anio, int seg, int min, int hora)
//{
//    this->seg = seg;
//    this->min = min;
//    this->hora = hora;
//}

//FechaHora::FechaHora()
//{

//}
