#include <stdio.h>
#include <string.h>

#include "clase4.h"

void inicializa_persona(persona *p, const char *nombre, const char *curp, int edad)
{
    strcpy(p->nombre, nombre);
    strcpy(p->curp, curp);
    p->edad = edad;
}

void imprime_persona(persona *p){
    printf("Datos de la persona:\n");
    printf("Nombre: %s\n", p->nombre);
    printf("CURP %s\n", p->curp);
    printf("Edad: %i\n", p->edad);
    printf("\n");
}

int compara_personas(void *a, void *b){
    persona *pa = (persona*) a;
    persona *pb = (persona*) b;
    return strcmp(pa->nombre, pb->nombre);
}

int compara_animales(void *a, void *b){
    animal *animal_a = (animal*) a;
    animal *animal_b = (animal*) b;
    return strcmp(animal_a->nombre, animal_b->nombre);
}

void bubblesort(void *arreglo, int tamano, int (*compara)(void*,void*)){
    if(compara(&arreglo[0],&arreglo[1])){

    }
}
