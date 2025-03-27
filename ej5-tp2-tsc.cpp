#include<iostream>
#include<string>

using namespace std;


int main(){
	string oracion;
	cout << "Ingresar una oracion: ";
	getline(cin,oracion);
	int palabras = 1;
	
	for(int i = 0; i < oracion.size(); i++){
		if (oracion[i] == ' '){
			palabras++;
		}
	}
	cout << endl << "La cantidad de palabras son " << palabras;
	
	return 0;
}
