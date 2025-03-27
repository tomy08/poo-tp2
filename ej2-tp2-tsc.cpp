#include<iostream>
#include<string>

using namespace std;


int main(){
	string palabra;
	cout << "Ingresar una palabra: ";
	cin >> palabra;
	string vocales = "aeiouAEIOU";
	int cantVocales = 0;
	
	for (int i = 0; i < palabra.size(); i++){
		if (vocales.find(palabra[i]) != string::npos){
			cantVocales++;
		}
	}

	cout << endl << "La cantidad de vocales de la palabra " << palabra << " es " << cantVocales;
	return 0;
}
