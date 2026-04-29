// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 27/03/2026
// Número de ejercicio: 5
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Ingrese la dimension de los vectores (N): ";
    cin >> N;

    vector<int> vector1(N);
    vector<int> vector2(N);
    vector<int> vector_combinado(2 * N);

    cout << "\nIngrese los elementos del primer vector:\n";
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "\nIngrese los elementos del segundo vector:\n";
    for (int i = 0; i < N; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    for (int i = 0; i < N; i++) {
        vector_combinado[i] = vector1[i];
        vector_combinado[i + N] = vector2[i];
    }

    cout << "\nEl vector combinado es:\n";
    for (int i = 0; i < 2 * N; i++) {
        cout << vector_combinado[i] << " ";
    }
    cout << endl;

    return 0;
}