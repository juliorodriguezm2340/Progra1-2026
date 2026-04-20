// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>

using namespace std;

void capitalizar(string texto);
int main()
{
    string frase;

    cout << "Escribe algo en minusculas: ";
    getline(cin, frase);

    capitalizar(frase);

    return 0;
}
void capitalizar(string texto)
{
    for (int i = 0; i < texto.length(); i++)
    {
        if (i == 0 || texto[i - 1] == ' ')
        {
            if (texto[i] >= 'a' && texto[i] <= 'z')
            {
                texto[i] = texto[i] - 32;
            }
        }
    }
    cout << "Resultado: " << texto << endl;
}