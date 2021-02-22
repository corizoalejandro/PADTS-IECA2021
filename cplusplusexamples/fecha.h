#ifndef FECHA_H
#define FECHA_H


class Fecha
{
public:
    Fecha(int dia, int mes, int anio);
    Fecha();
    virtual void muestra_fecha();
    static void muestra_fecha(int dia, int mes, int anio);
    static void muestra_fecha(int dia, int mes, int anio, char separador);
    void set_fecha(int dia, int mes, int anio);
private:
    int dia;
    int mes;
    int anio;
};

class FechaHora : public Fecha
{
public:
    FechaHora();
    void muestra_fecha() override;
private:
    int seg;
    int min;
    int hora;
};

#endif // FECHA_H
