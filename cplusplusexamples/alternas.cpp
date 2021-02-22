#include "alternas.h"


int Alternas::Figura::area()
{
    return 0;
}

int Alternas::Figura::perimetro()
{
    return 0;
}

Alternas::Triangulo::Triangulo(int lado1, int lado2, int lado3, int altura)
{
    this->lado1 = lado1; // base
    this->lado2 = lado2;
    this->lado3 = lado3;
    this->altura = altura;
}

int Alternas::Triangulo::area()
{
    return (lado1*altura)/2;
}

int Alternas::Triangulo::perimetro()
{
    return lado1+lado2+lado3;
}
