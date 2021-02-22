#include "figura.h"

Figuras::Figura::Figura()
{

}

int Figuras::Figura::area()
{
    std::cout << "nada" << std::endl;
}

int Figuras::Figura::perimetro()
{
    std::cout << "nada" << std::endl;
}

int Figuras::Figura::getLado() const
{
    return lado;
}

void Figuras::Figura::setLado(int value)
{
    lado = value;
}

Figuras::Cuadrado::Cuadrado(int lado)
{
    setLado(lado);
}

int Figuras::Cuadrado::area()
{
    return getLado()*getLado();
}

int Figuras::Cuadrado::perimetro()
{
    return getLado()*4;
}

Figuras::Triangulo::Triangulo(int lado, int altura) // Equilatero pls
{
    setLado(lado);
    this->altura = altura;
}

int Figuras::Triangulo::area()
{
    // Lado = base
    return (getLado()*altura)/2;
}

int Figuras::Triangulo::perimetro()
{
    return getLado()*3;
}

Figuras::Rectangulo::Rectangulo(int lado, int lado2)
{
    setLado(lado);
    this->lado2 = lado2;
}

int Figuras::Rectangulo::area()
{
    return getLado()*lado2;
}

int Figuras::Rectangulo::perimetro()
{
    return (getLado()*2)+(lado2*2);
}
