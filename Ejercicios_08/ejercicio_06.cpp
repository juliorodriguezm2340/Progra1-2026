// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void invertirOracion(string oracion);
int main()
{
    string entrada;

    cout << "Ingrese una oracion: ";
    getline(cin, entrada);

    invertirOracion(entrada);

    return 0;
}

void invertirOracion(string oracion)
{
    vector<string> palabras;
    string palabra;
    stringstream ss(oracion);

    while (ss >> palabra)
    {
        palabras.push_back(palabra);
    }

    cout << "Salida: ";
    for (int i = palabras.size() - 1; i >= 0; i--)
    {
        cout << palabras[i] << (i > 0 ? " " : "");
    }
    cout << endl;
}
