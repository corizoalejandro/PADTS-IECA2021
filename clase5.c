#include <stdio.h>
#include <stdlib.h>

#include "clase5.h"
#include "util.h"

void quicksort(int *arr, int izq, int der)
{
    int i=izq, j=der;
    int pivote = arr[(izq+der)/2];
    do{
        while(arr[i] < pivote && i <= der)
            i++;
        while(pivote < arr[j] && j > izq)
            j--;
        if(i<=j){
            swapVal(&arr[i],&arr[j]);
            i++; j--;
        }
    }while(i<=j);
    if(izq < j)
        quicksort(arr,izq,j);
    if(i < der)
        quicksort(arr,i,der);
}

void swapVal(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void imprime_arreglo(int *arr, int tam){
    for(int i=0;i<tam;i++){
        printf("%i ",arr[i]);
    }
    printf("\n");
}

void c5_prueba1()
{
    int arr[MAX_ARRAY] = { 87, 15, 0, 1, 5 };
    printf("El arreglo está como: ");
    imprime_arreglo(arr, MAX_ARRAY);
    quicksort(arr, 0, MAX_ARRAY);
    printf("El arreglo con quicksort: ");
    imprime_arreglo(arr, MAX_ARRAY);
}

void c5_prueba2()
{
    printf("%i\n", COMP(4,2));
}
