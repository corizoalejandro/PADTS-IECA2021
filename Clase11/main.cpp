#include <iostream>
#include "entero.h"
#include "persona.h"

using namespace std;

void ejemplo1();
void ejemplo2();
void ejemplo3();

int main()
{
    ejemplo1();
    return 0;
}

void ejemplo1(){
    Entero a = 2;
    Entero b = 2;
    Entero c = a + b;
    for(;;){
        a = b;
    }
    cout << "Valor de c: " << c << endl;
}

void ejemplo2(){
    Persona pedrito("Pedrito", "Lopez", 40);
    cout << pedrito;
}

void ejemplo3(){
    Entero a = 4;
    Entero b = 7;
    if(a < b){
        cout << "A es menor que B" << endl;
    }else{
        cout << "A NO es menor que B" << endl;
    }
}

bool modificar(string dato, int pos){
    if(no se pudo){
        return false;
    }
    return "";
    string s;
    s.empty();
    return true;
}
