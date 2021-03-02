#include "excepcioncita.h"

Excepcioncita::Excepcioncita(int errNo)
{
    switch (errNo) {
    case ERR_404:
        message = "Not found";
        break;
    case ERR_403:
        message = "Otro error";
        break;
    case ERR_502:
        message = "Bad gateway";
        break;
    default:
        message = "Error desconocido";
        break;
    }
}

const char *Excepcioncita::what() const throw()
{
    return message.c_str();
}
