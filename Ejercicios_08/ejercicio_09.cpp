// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>

using namespace std;

bool esPalindromo(string texto);

int main()
{
    string palabra;

    cout << "Introduce una palabra: ";
    cin >> palabra;

    if (esPalindromo(palabra))
    {
        cout << "Es palindromo" << endl;
    }
    else
    {
        cout << "No es palindromo" << endl;
    }

    return 0;
}
bool esPalindromo(string texto)
{
    string alReves = "";

    for (int i = texto.length() - 1; i >= 0; i--)
    {
        alReves += texto[i];
    }

    if (texto == alReves)
    {
        return true;
    }
    else
    {
        return false;
    }
}