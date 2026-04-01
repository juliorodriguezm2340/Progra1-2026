// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 11/09/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota) {
    sumaTotal = sumaTotal + nuevaNota;
    cantidadNotas = cantidadNotas + 1;
}

int main() {
    double suma = 0.0;
    int cantidad = 0;
    int n;
    double nota;

    cout << "Ingrese la cantidad de notas (N): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> nota;
        
        agregarNota(suma, cantidad, nota);
    }

    cout << "\nSuma total de las notas: " << suma << endl;
    cout << "Cantidad total de notas ingresadas: " << cantidad << endl;

    if (cantidad > 0) {
        cout << "Promedio: " << suma / cantidad << endl;
    }

    return 0;
}