// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 20/04/2026
// Número de ejercicio: 2
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void procesarMatriz(int m[10][10], int n);
int main()
{
    srand(time(0));
    int n, A, B;
    int matriz[10][10];

    cout << "Tamano N x N: ";
    cin >> n;
    cout << "Rango A a B (ejemplo: 1 10): ";
    cin >> A >> B;

    cout << "\nMatriz Generada:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = A + rand() % (B - A + 1);
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    procesarMatriz(matriz, n);

    return 0;
}
void procesarMatriz(int m[10][10], int n)
{
    int sumaCol = 0;
    long long productoFila = 1;
    int mayor = m[0][0], fMay = 0, cMay = 0;
    double sumaTotal = 0, sumaCuadrados = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n - 1)
                sumaCol += m[i][j];
            if (i == n - 1)
                productoFila *= m[i][j];
            if (m[i][j] > mayor)
            {
                mayor = m[i][j];
                fMay = i;
                cMay = j;
            }
            sumaTotal += m[i][j];
        }
    }
    double promedio = sumaTotal / (n * n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sumaCuadrados += pow(m[i][j] - promedio, 2);
        }
    }
    double desviacion = sqrt(sumaCuadrados / (n * n));

    cout << "\nSuma ultima columna: " << sumaCol;
    cout << "\nProducto ultima fila: " << productoFila;
    cout << "\nMayor valor: " << mayor << " en posicion [" << fMay << "][" << cMay << "]";
    cout << "\nDesviacion estandar: " << desviacion << endl;
}
