#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main(){
	string palabra1,palabra2,palabra3,palabra4,palabra5;
	vector<string> prefijos;
	
	cout << "Ingresar la primer palabra: ";
	cin >> palabra1;
	cout << endl;
	
	cout << "Ingresar la segunda palabra: ";
	cin >> palabra2;
	cout << endl;
	
	cout << "Ingresar la tercer palabra: ";
	cin >> palabra3;
	cout << endl;
	
	cout << "Ingresar la cuarta palabra: ";
	cin >> palabra4;
	cout << endl;
	
	cout << "Ingresar la quinta palabra: ";
	cin >> palabra5;
	cout << endl;
	
	int cantPrefijos = 0;

for(int i = 0; i < palabra1.size(); i++){
	if (palabra1[i] == palabra2[i] && palabra1[i] == palabra3[i] && palabra1[i] == palabra4[i] && palabra1[i] == palabra5[i]){
		if (prefijos.size() <= cantPrefijos) {
    		prefijos.push_back(""); 
		}
		prefijos[cantPrefijos].push_back(palabra1[i]);

		}else{
			cantPrefijos++;
		}
	}
	
	int indexPrefijoMasLargo = 0;
	for (int i = 1; i < prefijos.size();i++){
		if (prefijos[indexPrefijoMasLargo].size() < prefijos[i].size()){
			indexPrefijoMasLargo = i;
		}
	}
	
	cout << endl << "La cadena repetida mas larga es " << prefijos[indexPrefijoMasLargo];
	
	
	return 0;
}
