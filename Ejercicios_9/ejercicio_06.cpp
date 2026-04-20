// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 20/04/2026
// Número de ejercicio: 6
#include <iostream>

using namespace std;

void trasponerMatriz(int m[10][10], int n, int m_cols);
int main()
{
    int n, m_cols;
    int matriz[10][10];

    cout << "Filas (N): ";
    cin >> n;
    cout << "Columnas (M): ";
    cin >> m_cols;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m_cols; j++)
        {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    trasponerMatriz(matriz, n, m_cols);

    return 0;
}
void trasponerMatriz(int m[10][10], int n, int m_cols)
{
    int traspuesta[10][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m_cols; j++)
        {
            traspuesta[j][i] = m[i][j];
        }
    }

    cout << "\nMatriz Traspuesta:" << endl;
    for (int i = 0; i < m_cols; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << traspuesta[i][j] << " ";
        }
        cout << endl;
    }
}
