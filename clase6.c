#include "clase6.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 200

void c6_ejemplo1()
{
    FILE *archivito = fopen("archivito.txt","a");
    int valor = 27;
    if(fprintf(archivito, "Escribiendo %i dentro del archivo\n", valor)){
        printf("El archivo fue escrito con exito\n");
    }else{
        printf("Error escribiendo archivo\n");
    }
    fclose(archivito);
}

void c6_ejemplo2(){
    FILE *archivito = fopen("archivito.txt","r");
    fseek(archivito, 0, SEEK_END);
    int archivito_p = ftell(archivito);
    printf("Valor de tell: %i\n", archivito_p);
//    int leido;
//    do{
//        leido = fgetc(archivito);
//        if(leido == EOF)
//            break;
//        printf("%c", leido);
//    }while(leido != EOF);
    char *buffer = (char*) malloc((archivito_p+1)*sizeof (char));
    fseek(archivito, 0, SEEK_SET);
    printf("Valor de tell: %i\n", archivito_p);
    fgets(buffer, archivito_p, archivito);
    printf("%s\n", buffer);
    fclose(archivito);
}

void guarda_persona(const persona *p)
{
    FILE *p_archivo = fopen("personas.txt","w");
    fprintf(p_archivo,"%s|%s|%i|\n", p->nombre, p->curp, p->edad);
    fclose(p_archivo);
}

void c6_ejemplo3()
{
    persona *p = (persona*) malloc(sizeof (persona));
    inicializa_persona(p, "Pepito Perez", "PEPEPE6487", 8);
    guarda_persona(p);
}

void c6_ejemplo4()
{
    char *buffer = (char*) malloc(BUFFER_SIZE*sizeof (char));
    fgets(buffer, BUFFER_SIZE, stdin);
    printf("%s\n", buffer);
}

char* volteador()
{
//    if(1){
//        return 1;
//    }else{
//        return 0;
//    }
}
