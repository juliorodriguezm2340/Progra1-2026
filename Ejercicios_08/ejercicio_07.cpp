// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>

using namespace std;

string eliminarDigitos(string texto);

int main()
{
    string entrada;

    cout << "Ingrese el texto: ";
    cin >> entrada;

    cout << "Salida: " << eliminarDigitos(entrada) << endl;

    return 0;
}

string eliminarDigitos(string texto)
{
    string resultado = "";

    for (int i = 0; i < texto.length(); i++)
    {
        if (!(texto[i] >= '0' && texto[i] <= '9'))
        {
            resultado += texto[i];
        }
    }
    return resultado;
}