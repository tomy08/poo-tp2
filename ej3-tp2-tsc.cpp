#include<iostream>
#include<string>

using namespace std;


int main(){
	string palabra;
	cout << "Ingresar una palabra: ";
	cin >> palabra;
	int cantidadLetras = palabra.size();
	for(int i = 0; i < cantidadLetras; i++){
		if (palabra[i] != palabra[cantidadLetras-i-1]){
			cout << endl << "No es palindromo";
			return 0;
		}
	}
	cout << endl << "Es palindromo";
	return 0;
}
