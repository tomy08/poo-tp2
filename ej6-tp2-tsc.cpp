#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string cadena;
    cout << "Ingresar cadena: ";
    getline(cin, cadena);
    cout << endl;
    vector<string> cadena_split;
    int start = 0;

    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena[i] == ' ' || cadena[i] == '\t' || cadena[i] == '\n')
        {
            if (start < i)
            {
                cadena_split.push_back(cadena.substr(start, i - start));
            }
            start = i + 1;
        }
        else if (i == cadena.length() - 1)
        {
            cadena_split.push_back(cadena.substr(start, i - start + 1));
        }
    }

    for (int i = cadena_split.size() - 1; i >= 0; i--)
    {
        cout << cadena_split[i] << ' ';
    }
    cout << endl;

    system("pause");
    return 0;
}
