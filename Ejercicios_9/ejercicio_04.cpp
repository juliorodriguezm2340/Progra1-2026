// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 20/04/2026
// Número de ejercicio: 4
#include <iostream>

using namespace std;

void generarMatrizEspecial(int n);

int main()
{
    int n;

    cout << "Ingrese el orden n de la matriz: ";
    cin >> n;

    cout << "\nMatriz generada (" << n << "x" << n << "):" << endl;
    generarMatrizEspecial(n);

    return 0;
}
void generarMatrizEspecial(int n)
{
    int matriz[10][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = (i * 2) + j + 1;
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
