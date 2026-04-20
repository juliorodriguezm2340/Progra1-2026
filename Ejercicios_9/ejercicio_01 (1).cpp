// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 20/04/2026
// Número de ejercicio: 1
#include <iostream>

using namespace std;

void intercambiarFilas(int matriz[10][10], int n, int m);
void mostrarMatriz(int matriz[10][10], int n, int m);
int main()
{
    int n, m;
    int matriz[10][10];

    cout << "Filas: ";
    cin >> n;
    cout << "Columnas: ";
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz Original:" << endl;
    mostrarMatriz(matriz, n, m);

    intercambiarFilas(matriz, n, m);

    cout << "\nMatriz Resultante:" << endl;
    mostrarMatriz(matriz, n, m);

    return 0;
}
void intercambiarFilas(int matriz[10][10], int n, int m)
{
    for (int j = 0; j < m; j++)
    {
        int aux = matriz[0][j];
        matriz[0][j] = matriz[n - 1][j];
        matriz[n - 1][j] = aux;
    }
}
void mostrarMatriz(int matriz[10][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
