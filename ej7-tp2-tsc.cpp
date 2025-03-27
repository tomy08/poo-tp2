#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;


int main(){
	string palabra1;
	string palabra2;
	cout << "Ingresar la primer palabra: ";
	cin >> palabra1;
	cout << endl << "Ingresar la segunda palabra: ";
	cin >> palabra2;
	
	int palabra1Size = palabra1.size();
	int palabra2Size = palabra2.size();
	
	transform(palabra1.begin(),palabra1.end(),palabra1.begin(),	::tolower);
	transform(palabra2.begin(),palabra2.end(),palabra2.begin(),	::tolower);
	
	
	
	if (palabra1Size != palabra2Size){
		cout << endl << "No es un anagrama";
		return 0;
	}
	
	for(int i = 0; i < palabra1Size; i++){
		for (int j = 0; j < palabra1Size - i - 1; j++){
			if (palabra1[j] > palabra1[j+1]){
				swap(palabra1[j],palabra1[j+1]);
			}
			if (palabra2[j] > palabra2[j+1]){
				swap(palabra2[j],palabra2[j+1]);
			}
		}
	}

	
	if (palabra1 == palabra2){
		cout << endl << "Es un anagrama";
	}else{
		cout << endl << "No es un anagrama";
	}
	
	
	return 0;
}
