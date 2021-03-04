#include <iostream>
#include <fstream>
#include "animal.h"
#include "persona.h"

#define N_ARCHIVO "datos.txt"
#define F_PERSONAS "personas.txt"
#define F_ANIMALES "animales.txt"

using namespace std;

void ejemplo_g_archivo();
void ejemplo_l_archivo();
void ejemplo_bin_archivo();
void ejemplo_bin_archivo2();
void ejemplo_muchos_animales();

int main()
{
//    Persona pepito("Pepito", "Lopez", 30);
//    ofstream archivito(F_PERSONAS, ios::binary);
//    if(!archivito.is_open()){
//        cerr << "No se pudo abrir el archivo" << endl;
//        return 0;
//    }
//    archivito << pepito;
//    archivito.close();
//    cout << "todo guardado con exito" << endl;
//    Persona almacen;
//    ifstream leeArchivo(F_PERSONAS, ios::binary);
//    if(!leeArchivo.is_open()){
//        cerr << "No se pudo abrir el archivo" << endl;
//        return 0;
//    }
//    leeArchivo >> almacen;
//    leeArchivo.close();
//    cout << almacen;
    printf("%i\n", 6 % ((5 * 7) - (72-8)));
    return 0;
}

void ejemplo_g_archivo(){
    ofstream archivito(N_ARCHIVO);
    if(archivito.is_open()){
        archivito << "Hola mundo desde el archivo" << endl;
    }else{
        cerr << "Error abriendo el archivo" << endl;
    }
    archivito.close();
}

void ejemplo_l_archivo(){
    ifstream archivito(N_ARCHIVO);
    if(archivito.is_open()){
        string mensaje;
        do{
            getline(archivito, mensaje);
            cout << mensaje << endl;
        }while(!archivito.eof());
    }else{
        cerr << "Error abriendo el archivo: " << N_ARCHIVO << endl;
    }
}


void ejemplo_bin_archivo(){
    Animal firulais("firulais", 2);
    fstream archivito(N_ARCHIVO, ios::binary | ios::out);
    if(archivito.is_open()){
        archivito.write((char*) &firulais, sizeof (Animal));
    }else{
        cerr << "No se pudo abrir el archivo" << endl;
    }
    archivito.close();
}


void ejemplo_bin_archivo2(){
    Animal firulais;
    cout << firulais;
    fstream archivito(N_ARCHIVO, ios::binary | ios::in);
    if(archivito.is_open()){
        archivito.read((char*) &firulais, sizeof(Animal));
    }else{
        cerr << "No se pudo abrir el archivo" << endl;
    }
    archivito.close();
    cout << firulais;
}

void ejemplo_muchos_animales(){
    Animal firulais("firulais", 2);
    Animal michi("michi", 5);
    Animal max("max", 5);
    Animal donGato("Don Gato", 40);
    Animal benito("Benito", 4);

    Animal almacen;

    fstream archivito(F_ANIMALES, ios::binary | ios::in | ios::out);
    if(!archivito.is_open()){
        cerr << "No se pudo abrir el archivo" << endl;
        return;
    }

    archivito.write((char*) &firulais, sizeof (Animal));
    archivito.write((char*) &michi, sizeof (Animal));
    archivito.write((char*) &max, sizeof (Animal));
    archivito.write((char*) &donGato, sizeof (Animal));
    archivito.write((char*) &benito, sizeof (Animal));

    archivito.seekg(ios::beg+(sizeof (Animal)*4));

    archivito.read((char*) &almacen, sizeof (Animal));

    cout << almacen;

    archivito.close();
}
