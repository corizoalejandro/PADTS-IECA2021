#ifndef CLASE4_H
#define CLASE4_H

struct persona {
   char nombre[50];
   char curp[20];
   int edad;
};

struct animal {
    char nombre[50];
    char raza[20];
};

union test {
    unsigned char cval[4];
    int ival;
    float fval;
};

enum OPERADOR {
    SUMA,
    RESTA,
    MULT,
    DIVI,
    MOD
};

typedef struct persona persona;
typedef struct animal animal;

int compara_personas(void *a, void *b);

int compara_animales(void *a, void *b);

void bubblesort(void *arreglo, int tamano, int (*compara)(void*,void*));

void inicializa_persona(persona *p, const char* nombre, const char* curp, int edad);
void imprime_persona(persona *p);

#endif // CLASE4_H
