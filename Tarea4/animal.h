#ifndef ANIMAL_H
#define ANIMAL_H

#define STR_MAX_LEN 50

struct animal {
    char *nombre;
    char *especie;
    int edad;
};

typedef struct animal animal;

animal *nuevo_animal(const char* nombre, const char* especie, int edad);
void imprime_animal(const animal *a);
int compara_animal(void *a, void *b);

#endif // ANIMAL_H
