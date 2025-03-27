#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;


int main(){
	string palabra1;
	cout << "Ingresar la oracion: ";
	getline(cin,palabra1);
	
	cout << endl << endl;
	
	int opcion;
	
	cout << "Ingresar una de las siguientes opciones: " << endl;
	cout << "1. Oracion todo a mayuscula" << endl;
	cout << "2. Oracion todo a minuscula" << endl;
	cout << "3. Oracion alternando mayuscula/minuscula" << endl;
	cout << "4. Oracion empezando cada palabra en mayusucula" << endl;
	cout << "5. Salir" << endl;	

	while (opcion != 6){
		cout << endl << "Ingresar opcion: ";
		cin >> opcion;
		cout << endl;
		
		transform(palabra1.begin(),palabra1.end(),palabra1.begin(),	::tolower);
		
		switch (opcion){
			case 1:
				transform(palabra1.begin(),palabra1.end(),palabra1.begin(),	::toupper);
				cout << "La palabra transformada es: " << palabra1 << endl;
				break;
			case 2:
				transform(palabra1.begin(),palabra1.end(),palabra1.begin(),	::tolower);
				cout << "La palabra transformada es: " << palabra1 << endl;
				break;
			case 3:
				for(int i = 0; i < palabra1.size(); i++){
					if (i == 0){
						palabra1[i] = toupper(palabra1[i]);
					}
					else if (palabra1[i-1] == ' ' && isupper(palabra1[i-2])){
						palabra1[i] = tolower(palabra1[i]);
					} else if (palabra1[i-1] == ' ' && islower(palabra1[i-2])){
						palabra1[i] = toupper(palabra1[i]);
					} else if (isupper(palabra1[i-1])){
						palabra1[i] = tolower(palabra1[i]);
					} else if (islower(palabra1[i-1])){
						palabra1[i] = toupper(palabra1[i]);
					}
					
					
				}
				cout << "La palabra transformada es: " << palabra1 << endl;
				break;
			case 4:
				for(int i = 0; i < palabra1.size(); i++){
					if (i == 0){
						palabra1[i] = toupper(palabra1[i]);
					}
					else if (palabra1[i-1] == ' ' ){
						palabra1[i] = toupper(palabra1[i]);
					} 
					
					
				}
				cout << "La palabra transformada es: " << palabra1 << endl;
				break;
			case 5:
				return 0;
				
		}
	}
	
	transform(palabra1.begin(),palabra1.end(),palabra1.begin(),	::tolower);

	
	return 0;
}
