// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 27/03/2026
// Número de ejercicio: 6
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vector1(5);
    vector<int> vector2(5);
    vector<int> vector3(5);

    cout << "Ingrese los 5 elementos del vector1:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "\nIngrese los 5 elementos del vector2:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
    }

    cout << "\nEl vector3 (suma de vector1 y vector2) es:\n";
    for (int i = 0; i < 5; i++) {
        vector3[i] = vector1[i] + vector2[i];
        cout << vector3[i] << " ";
    }
    cout << endl;

    return 0;
}