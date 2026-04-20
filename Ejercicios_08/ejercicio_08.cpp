// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>

using namespace std;

void partir(string cadena, char letra);
int main()
{
    string texto = "Esto,es,una,cadena,separada,por,comas";
    char d = ',';

    partir(texto, d);

    return 0;
}
void partir(string cadena, char letra)
{
    string palabra = "";

    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena[i] == letra)
        {
            cout << palabra << endl;
            palabra = "";
        }
        else
        {
            palabra += cadena[i];
        }
    }

    cout << palabra << endl;
}