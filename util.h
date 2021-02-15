#ifndef UTIL_H
#define UTIL_H

#define MAX_SIZE 10
#define MAX_ARRAY 5
#define COMP(a,b) ((a<b)?1:0)

#if PRUEBAS
void existo();
#endif


//void imprime_arreglo(int *arreglo, int tam);

int fibonacci(int num);

int suma(int, int);
int resta(int, int);
int mult(int, int);
int divi(int, int);
int mod(int, int);

void imprime_menu();

#endif // UTIL_H
