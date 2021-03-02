#include <iostream>
#include <cstdlib>
#include "excepcioncita.h"

using namespace std;

int main()
{
    try {
        throw Excepcioncita(50);
    } catch (Excepcioncita &e) {
        cerr << "Error: " << e.what() << endl;
        exit(0);
    }

    cout << "Finalizando programa" << endl;

    return 0;
}
