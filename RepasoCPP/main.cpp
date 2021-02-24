#include <iostream>
#include "animal.h"

using namespace std;

#define MAX_ARRAY 10

void ejemplo1();

int main()
{
    Animal *a = NULL;
    std::string nombre;
    cout << "Ingresa el nombre del animal: ";
    cin >> nombre;
    a = new Animal(nombre);
    cout << "El nombre del animal es: " << a->getNombre() << endl;

    Lista l;
    return 0;
}

void ejemplo1(){
    Animal a("Rocko");
    cout << "Animal a: ";
    a.muestra_nombre();
    Animal b("Rudy");
    cout << "Animal b: ";
    b.muestra_nombre();
}
