#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string cadena;
    cout << "Ingresar cadena: ";
    getline(cin,cadena);
    cout << endl;
    string cadena_invertida;

    for (int i = cadena.size() - 1; i >= 0; i--)
    {
        cadena_invertida.push_back(cadena[i]);
    }

    cout << cadena_invertida;    


    return 0;
}
