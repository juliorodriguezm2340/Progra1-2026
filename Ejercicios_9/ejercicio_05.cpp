// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 20/04/2026
// Número de ejercicio: 5
#include <iostream>

using namespace std;

void multiplicarMatrices(int A[10][10], int B[10][10], int N, int M);
int main()
{
    int N, M;
    int A[10][10], B[10][10];

    cout << "Valor de N: ";
    cin >> N;
    cout << "Valor de M: ";
    cin >> M;

    cout << "Datos Matriz A (" << N << "x" << M << "):" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Datos Matriz B (" << M << "x" << N << "):" << endl;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> B[i][j];
        }
    }

    multiplicarMatrices(A, B, N, M);

    return 0;
}
void multiplicarMatrices(int A[10][10], int B[10][10], int N, int M)
{
    int C[10][10] = {0};

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < M; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nMatriz Resultante (N x N):" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}
