// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca.
// Fecha creación: 11/05/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void analizarMatriz(int N, int A, int B) {
    int matriz[50][50]; 
    int menor = B + 1;
    int filaMenor = 0;
    int colMenor = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = A + rand() % (B - A + 1);
            cout << matriz[i][j] << "\t";
            
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                filaMenor = i;
                colMenor = j;
            }
        }
        cout << endl;
    }
    int sumaColumna = 0;
    for (int i = 0; i < N; i++) {
        sumaColumna += matriz[i][0];
    }
    long long productoFila = 1;
    for (int j = 0; j < N; j++) {
        productoFila *= matriz[0][j];
    }
    cout << "Suma de la primera columna: " << sumaColumna << endl;
    cout << "Producto de la primera fila: " << productoFila << endl;
    cout << "Menor valor: " << menor << " en la posicion (" << filaMenor << ", " << colMenor << ")" << endl;
}
int main() {
    srand(time(NULL));   
    int N = 4;
    int A = 1;
    int B = 9;
    analizarMatriz(N, A, B);
    return 0;
}