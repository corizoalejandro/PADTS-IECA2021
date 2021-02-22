#include "persona.h"
#include <stdio.h>
#include "fecha.h"
#include "figura.h"
#include "nodo.h"
#include "alternas.h"
#include "entero.h"

#define MAX_ARRAY_VAL 10

void c7_ejemplo1();
void c7_ejemplo2();
void c7_ejemplo3();

void c8_ejemplo1();
void c8_ejemplo2();
void c8_ejemplo3();
void c8_ejemplo4();
void c8_ejemplo5();
void c8_ejemplo6();

void c9_ejemplo1();
void c9_ejemplo2();

//class Entero {
//public:
//    explicit Entero(int val);
//private:
//    int val;
//};

//void suma(Entero a, Entero b);

int main()
{
    Entero a = 2;
    Entero b = 2;
    std::cout << "Resultado: " << a + b << std::endl;
    return 0;
}

void c7_ejemplo1(){
    Persona *pepito = new Persona("pepito", "PEPE65874", 8);
    std::cout << "Tamano de persona: " << sizeof (Persona) << std::endl;
    pepito->muestra_datos();
    Persona pepe("pepe", "PPPsdfdsf", 10);
    pepe.muestra_datos();
    Persona pepe2 = pepe;
    Persona::muestra_algo("algo");
}

void c7_ejemplo2(){
    Fecha fecha(18,2,2021);
    fecha.muestra_fecha();

    Fecha::muestra_fecha(29,2,2021);
}


void c7_ejemplo3(){
    Personita p("Alguien", "sdfsdsdf", 20);
    p.muestra_datos();
    if(p.tengoDiabetes()){
        std::cout << p.getNombre() << " tiene diabetes" << std::endl;
    }else{
        std::cout << p.getNombre() << " no tiene diabetes" << std::endl;
    }
}

//Entero::Entero(int val)
//{
//    this->val = val;
//}

//void suma(Entero a, Entero b){
//    return;
//}

//void c8_ejemplo1(){
//    suma(Entero(2),Entero(2));
//}

void c8_ejemplo2(){
//    Fecha *fechas1 = new Fecha[MAX_ARRAY_VAL];
//    Fecha f;
//    //Fecha **fechas = new Fecha[MAX_ARRAY_VAL];
//    for(int i=0;i<MAX_ARRAY_VAL;i++){
//        fechas[i] = new Fecha();
//        fechas[i]->set_fecha(2,2,2);
//    }
//    delete [] fechas;
}

void c8_ejemplo3(){
    Fecha::muestra_fecha(19, 2, 2021, '/');
}


void c8_ejemplo4(){
    //FechaHora fh(19, 2, 2021, 0, 55, 11);
    //fh.muestra_fecha();s
}

void c8_ejemplo5(){
//    Figura *figuras = new Figura[MAX_ARRAY_VAL];
//    Figura *cuadrado = new Cuadrado(5);
//    Figura *triangulo = new Triangulo(3,3);
//    Figura *rectangulo = new Rectangulo(4,2);

//    std::cout << "Area de cuadrado: " << cuadrado->area() << std::endl;
//    std::cout << "Perimetro de cuadrado: " << cuadrado->perimetro() << std::endl;
//    std::cout << "Area de triangulo: " << triangulo->area() << std::endl;
//    std::cout << "Perimetro de triangulo: " << triangulo->perimetro() << std::endl;
//    std::cout << "Area de rectangulo: " << rectangulo->area() << std::endl;
//    std::cout << "Perimetro de rectangulo: " << rectangulo->perimetro() << std::endl;
}

void c8_ejemplo6(){
    int x = 10;
    int *px1 = &x;
    int *px2 = &x;
    std::cout << "Valor de x: " << x << std::endl;
    *px1 = 20;
    std::cout << "Valor de x: " << x << std::endl;
    *px2 = 74;
    std::cout << "Valor de x: " << x << std::endl;
}

void c9_ejemplo1(){
    Nodo *inicio = NULL;
    inicio = new Nodo("7th element");
    Nodo *dato = new Nodo("otra cancion");
    inicio->setSig(dato);
    Nodo *dato2 = new Nodo("otra cancion 2");
    dato->setSig(dato2);

    Lista lista;
    lista.setInicio(inicio);
    lista.imprimeLista();
}

void c9_ejemplo2(){
    Figuras::Triangulo *t1 = new Figuras::Triangulo(5,8);
    Alternas::Triangulo *t2 = new Alternas::Triangulo(2,3,4,4);

    std::cout << "Area t1: " << t1->area() << std::endl;
    std::cout << "Area t2: " << t2->area() << std::endl;
}
