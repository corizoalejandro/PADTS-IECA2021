#include <stdio.h>

#include "util.h"



/*void imprime_arreglo(int *arreglo, int tam)
{
    for(int i=0;i<tam;i++){
        printf("Dato en posición %i: %i\n",i, arreglo[i]);
    }
}*/

int fibonacci(int num)
{
    if(num==0 || num==1){
        return num;
    }else{
        return fibonacci(num-1)+fibonacci(num-2);
    }
}


int suma(int a, int b)
{
    return a+b;
}

int resta(int a, int b)
{
    return a-b;
}

int mult(int a, int b)
{
    return a*b;
}

int divi(int a, int b)
{
    return a/b;
}

int mod(int a, int b)
{
    return a%b;
}

void imprime_menu()
{
    printf("Bienvenido a tu calculadora :D\n");
    printf("0 - Suma\n");
    printf("1 - Resta\n");
    printf("2 - Multiplicacion\n");
    printf("3 - Division\n");
    printf("4 - Modulo\n");
    printf("Ingresa una operacion: ");
}
