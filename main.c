#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#include "util.h"
#include "clase6.h"

#define MAX_BUFFER 50

#ifdef WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

void calculadora(){
    int opt = 0;
    int a, b;
    int (*operaciones[])(int, int) = { suma, resta, mult, divi, mod };
    imprime_menu();
    printf("ingresa opcion: ");
    scanf("%i", &opt);
    printf("numeros a operar: ");
    scanf("%i %i", &a, &b);
    printf("Resultado: %i\n", operaciones[opt](a,b));
}

int main()
{
//    char *nombre = (char*) malloc(MAX_BUFFER*sizeof (char));
//    fgets(nombre, MAX_BUFFER, stdin);
//    nombre = (char*) realloc(nombre,strlen(nombre)*sizeof (char));
//    fflush(stdin);
    calculadora();
    return 0;
}
