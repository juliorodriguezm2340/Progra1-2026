// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 27/03/2026
// Número de ejercicio: 7
#include <iostream>

using namespace std;

int main() {
    int vector[10];
    int contador = 0;
    int numero;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el elemento " << i + 1 << " (negativo para terminar): ";
        cin >> numero;

        if (numero < 0) {
            break;
        }

        vector[i] = numero;
        contador++;
    }

    cout << "\nLos elementos introducidos son:\n";
    for (int i = 0; i < contador; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;

    return 0;
}