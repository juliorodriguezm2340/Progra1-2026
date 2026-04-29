// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 27/03/2026
// Número de ejercicio: 4
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Ingrese la dimension de los vectores (N): ";
    cin >> N;

    vector<int> vector1(N);
    vector<int> vector2(N);
    vector<int> vector_resultado(N);

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

    cout << "\nEl vector resultante de la multiplicacion es:\n";
    for (int i = 0; i < N; i++) {
        vector_resultado[i] = vector1[i] * vector2[i];
        cout << vector_resultado[i] << " ";
    }
    cout << endl;

    return 0;
}