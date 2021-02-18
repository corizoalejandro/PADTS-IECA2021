#ifndef FECHA_H
#define FECHA_H


class Fecha
{
public:
    Fecha(int dia, int mes, int anio);
    void muestra_fecha();
    static void muestra_fecha(int dia, int mes, int anio);
private:
    int dia;
    int mes;
    int anio;
};

#endif // FECHA_H
