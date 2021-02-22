#ifndef ALTERNAS_H
#define ALTERNAS_H


namespace Alternas {

class Figura
{
public:
    virtual int area();
    virtual int perimetro();
};

class Triangulo : public Figura
{
public:
    Triangulo(int lado1, int lado2, int lado3, int altura);
    int area() override;
    int perimetro() override;
private:
    int lado1;
    int lado2;
    int lado3;
    int altura;
};

}

#endif // ALTERNAS_H
