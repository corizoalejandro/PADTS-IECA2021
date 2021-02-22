#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>

namespace Figuras {

class Figura
{
public:
    Figura();
    virtual int area();
    virtual int perimetro();
    int getLado() const;
    void setLado(int value);
private:
    int lado;
};

class Cuadrado : public Figura {
public:
    Cuadrado(int lado);
    int area() override;
    int perimetro() override;
};

class Triangulo : public Figura {
public:
    Triangulo(int lado, int altura);
    int area() override;
    int perimetro() override;
private:
    int altura;
};

class Rectangulo : public Figura {
public:
    Rectangulo(int lado, int lado2);
    int area() override;
    int perimetro() override;
private:
    int lado2;
};

}



#endif // FIGURA_H
