#include "persona.h"
#include <stdio.h>
#include "fecha.h"

void c7_ejemplo1();
void c7_ejemplo2();
void c7_ejemplo3();

int main()
{
    c7_ejemplo3();
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
