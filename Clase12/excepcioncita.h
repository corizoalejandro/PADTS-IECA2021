#ifndef EXCEPCIONCITA_H
#define EXCEPCIONCITA_H

#include <exception>
#include <iostream>

using namespace std;

class Excepcioncita : public exception
{
public:
    Excepcioncita(int errNo);
    enum ERR_NO {
        ERR_403,
        ERR_404,
        ERR_502
    };
    const char * what() const throw();
private:
    string message;
};

#endif // EXCEPCIONCITA_H
