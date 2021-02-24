#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "animal.h"

#define MAX_ANIMAL_LEN 10
#ifdef WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

typedef unsigned char byte;

void imprime_menu();
void ingresa_animal(animal **animales, int *cont);
void muestra_animales(animal **animales, int *cont);
void ordena_animales(animal **animales, int *cont);
void quicksort(void **arr, int izq, int der, int (*compara)(void *a, void *b));
void swap(void **a, int i, int j);
void blackbox(void);

enum OPTS {
    INGRESA,
    MUESTRA,
    ORDENA,
    SALIR
};

int main()
{
    //blackbox();
    int opt;
    animal **animales = (animal**) malloc(MAX_ANIMAL_LEN*(sizeof (animal*)));
    int cuentaAnimales = 0;
#if ALTERNATIVE
    do{
        imprime_menu();
        fflush(stdin);
        scanf("%i", &opt);
        fflush(stdin);
        switch (opt) {
        case INGRESA:
            ingresa_animal(animales, &cuentaAnimales);
            printf("Presione cualquier tecla para continuar...");
            getchar();
            break;
        case MUESTRA:
            muestra_animales(animales, &cuentaAnimales);
            break;
        case ORDENA:
            printf("Ordenando animales...\n");
            ordena_animales(animales, &cuentaAnimales);
            break;
        case SALIR:
            printf("Saliendo..");
            return 0;
        default:
            printf("Opcion invalida, abortando...\n");
            printf("Presiona cualquier tecla para continuar...");
            getchar();
            break;
        }
        system(CLEAR);
    }while(opt >= INGRESA && opt <= SALIR);
#else
    void (*funciones[])(animal**, int*) = { ingresa_animal, muestra_animales, ordena_animales };
    do{
        imprime_menu();
        fflush(stdin);
        scanf("%i", &opt);
        fflush(stdin);
        if(opt >= INGRESA && opt < SALIR)
            funciones[opt](animales, &cuentaAnimales);
        system(CLEAR);
    }while(opt >= INGRESA && opt < SALIR);
    printf("Opcion no valida... saliendo del programa...\n");
#endif
    return 0;
}

void imprime_menu(void){
    printf("***** Administracion de animales *****\n");
    printf("0- Ingresa una animal.\n");
    printf("1- Muestra los animales.\n");
    printf("2- Ordena los animales.\n");
    printf("3- Salir.\n");
    printf("Selecciona una opcion: ");
}
void ingresa_animal(animal **animales, int *cont){
    if(*cont >= MAX_ANIMAL_LEN){
        printf("Ya no se pueden añadir mas animales.\n");
        return;
    }
    char *nombre = (char*) malloc(STR_MAX_LEN*sizeof (char));
    char *especie = (char*) malloc(STR_MAX_LEN*sizeof (char));
    int edad = 0;
    printf("Ingresa nombre: ");
    fflush(stdin);
    fgets(nombre, STR_MAX_LEN, stdin);
    printf("Ingresa especie: ");
    fgets(especie, STR_MAX_LEN, stdin);
    printf("Ingresa edad: ");
    scanf("%i", &edad);
    animales[(*cont)++] = nuevo_animal(nombre, especie, edad);
    fflush(stdin);
}

void muestra_animales(animal **animales, int *cont){
    printf("********* Animales **********\n");
    for(int i=0;i<*cont;i++){
        imprime_animal(animales[i]);
    }
    printf("Presione cualquier tecla para continuar...");
    getchar();
}

void ordena_animales(animal **animales, int *cont){
    if(*cont <= 1){
        printf("No se puede ordenar...\n");
        return;
    }
    quicksort((void**)animales, 0, *cont-1, compara_animal);
    printf("Animales ordenados, presione cualquier tecla para continuar...");
    getchar();
}

void quicksort(void **arr, int izq, int der, int (*compara)(void*, void*)){
    int mid = (izq+der)/2;
    void *pivote = arr[mid];
    int i=izq, j=der;
    do{
        while(compara(arr[i], pivote) < 0 && i <= der)
            i++;
        while(compara(pivote, arr[j]) < 0 && izq < j)
            j--;
        if(i<=j){
            swap(arr, i, j);
            i++; j--;
        }
    }while(i<=j);

    if(izq < j)
        quicksort(arr, izq, j, compara);
    if(i < der)
        quicksort(arr, i, der, compara);
}

void swap(void **arr, int i, int j){
    void *aux = arr[i];
    arr[i] = arr[j];
    arr[j] = aux;
}

void blackbox(void){
    animal **animales = (animal**) malloc(MAX_ANIMAL_LEN*sizeof (animal*));
    int count = MAX_ANIMAL_LEN;
    animales[0] = nuevo_animal("Panchito", "Perro", 10);
    animales[1] = nuevo_animal("Alejandro", "Perro", 20);
    animales[2] = nuevo_animal("Firulais", "Perro", 5);
    animales[3] = nuevo_animal("Rudy", "Perro", 15);
    animales[4] = nuevo_animal("Rocko", "Perro", 3);
    animales[5] = nuevo_animal("Nana", "Perro", 4);
    animales[6] = nuevo_animal("Kishi", "Gato", 2);
    animales[7] = nuevo_animal("Durin", "Gato", 1);
    animales[8] = nuevo_animal("Mochi", "Gato", 0);
    animales[9] = nuevo_animal("Random", "Gato", 4);
    printf("********* Animales **********\n\n");
    muestra_animales(animales, &count);
    ordena_animales(animales, &count);
    printf("********* Ordenados **********\n\n");
    muestra_animales(animales, &count);
}
