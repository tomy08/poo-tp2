#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
    string cadena, subcadena;

    cout << "Ingrese la cadena principal: ";
    getline(cin, cadena);

    cout << "Ingrese la subcadena a buscar: ";
    getline(cin, subcadena);

    size_t posicion = cadena.find(subcadena);

    if (posicion != string::npos)
    {
        cout << "La subcadena '" << subcadena << "' se encontro en la posicion: " << posicion << endl;
    }
    else
    {
        cout << "La subcadena no se encontro en la cadena principal." << endl;
    }
    return 0;
}
