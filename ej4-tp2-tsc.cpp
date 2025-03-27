#include<iostream>
#include<string>

using namespace std;


int main(){
	string palabra;
	cout << "Ingresar un palabra: ";
	cin >> palabra;
	
	char characterABuscar = ' ';

	cout << endl << "Ingresar una letra para ser reemplazada: ";
	cin >> characterABuscar;
	
	char characterParaRemplazar = ' ';
	
	cout << endl << "Ingresar una letra para reemplazar la letra " << characterABuscar << ": ";
	cin >> characterParaRemplazar;
	
	for (int i = 0; i < palabra.size(); i++){
		if (palabra[i] == characterABuscar){
			palabra[i] = characterParaRemplazar;
		}
	}
	
	cout << endl << "La palabra es: " << palabra;
	
	return 0;
}
