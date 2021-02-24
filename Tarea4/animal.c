#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "animal.h"

animal* nuevo_animal(const char *nombre, const char *especie, int edad)
{
    animal *a = (animal*) malloc(sizeof(animal));
    a->nombre = (char*) malloc(strlen(nombre));
    a->especie = (char*) malloc(strlen(especie));
    strcpy(a->nombre, nombre);
    strcpy(a->especie, especie);
    a->edad = edad;
    return a;
}

void imprime_animal(const animal *a)
{
    printf("Nombre: %s\n", a->nombre);
    printf("Especie: %s\n", a->especie);
    printf("Edad: %i\n\n", a->edad);
}

int compara_animal(void *a, void *b)
{
    animal *animalA = (animal*) a;
    animal *animalB = (animal*) b;
    return strcmp(animalA->nombre, animalB->nombre);
}
