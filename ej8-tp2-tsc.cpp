#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool estaLaSubcadena(const string &sub, const vector<string> &palabras)
{
	for (int i = 0; i < palabras.size(); i++)
	{
		if (palabras[i].find(sub) == string::npos)
		{
			return false;
		}
	}
	return true;
}

string encontrarSubcadenaMasLarga(vector<string> &palabras)
{
	string base = palabras[0];
	int masLongitud = 0;
	string subcadenMasLarga;

	for (int i = 1; i <= base.size(); ++i) // controla la longitud de las subcadenas
	{
		for (int j = 0; j + i <= base.size(); ++j) // controla la posicion inicial desde donde se extrae la subcadena
		{
			string sub = base.substr(j, i); // extrae la subcadena de longitud i desde la posicion j
			/*
			Por ejemplo, si la palabra base es "abc", las subcadenas generadas serían:
			Longitud 1: "a", "b", "c".
			Longitud 2: "ab", "bc".
			Longitud 3: "abc".
			*/
			if (estaLaSubcadena(sub, palabras) && sub.size() > masLongitud)
			{
				masLongitud = sub.size();
				subcadenMasLarga = sub;
			}
		}
	}
	return subcadenMasLarga;
}

int main()
{
	vector<string> palabras(5);

	cout << "Ingresar la primer palabra: ";
	cin >> palabras[0];
	cout << endl;

	cout << "Ingresar la segunda palabra: ";
	cin >> palabras[1];
	cout << endl;

	cout << "Ingresar la tercer palabra: ";
	cin >> palabras[2];
	cout << endl;

	cout << "Ingresar la cuarta palabra: ";
	cin >> palabras[3];
	cout << endl;

	cout << "Ingresar la quinta palabra: ";
	cin >> palabras[4];
	cout << endl;

	string resultado = encontrarSubcadenaMasLarga(palabras);
	cout << "La subcadena mas larga es: " << resultado << endl;

	system("pause");
	return 0;
}