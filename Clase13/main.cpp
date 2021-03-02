#include <iostream>
#include "persona.h"
#include <vector>
#include <stack>
#include <queue>
#include <map>


using namespace std;

int main()
{
    Persona *pepito = new Persona("Pepito", "Lopez", 8);
    Persona *pedrito = new Persona("Pedrito", "Perez", 10);
    Persona *benito = new Persona("Benito", "Mussolini", 15);

    vector<Persona*> personas;
    personas.push_back(pepito);
    personas.push_back(pedrito);
    personas.push_back(benito);

    stack<Persona*> personasStack; // Stack es una pila
    personasStack.push(pepito);
    personasStack.push(pedrito);
    personasStack.push(benito);

    queue<Persona*> personasCola; // Queue es una cola
    personasCola.push(pepito);
    personasCola.push(pedrito);
    personasCola.push(benito);

    // string es la clave para encontrar ese puntero a persona almacenado
    map<string, Persona*> mapita;
    mapita.insert(pair<string, Persona*>(pepito->getNombre(), pepito));
    mapita.insert(pair<string, Persona*>(pedrito->getNombre(), pedrito));
    mapita.insert(pair<string, Persona*>(benito->getNombre(), benito));

    cout << *(mapita["Benito"]) << endl;

    return 0;
}
