// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 27/03/2026
// Número de ejercicio: 3
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de calificaciones (N): ";
    cin >> N;

    vector<int> calificaciones(N);
    vector<double> desviacion(N);
    double suma = 0;

    for (int i = 0; i < N; i++) {
        cout << "Ingrese la calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    double promedio = suma / N;
    double suma_desviaciones_cuadradas = 0;

    cout << "\nCalificacion\tDesviacion\n";
    for (int i = 0; i < N; i++) {
        desviacion[i] = calificaciones[i] - promedio;
        suma_desviaciones_cuadradas += (desviacion[i] * desviacion[i]);
        cout << calificaciones[i] << "\t\t" << desviacion[i] << endl;
    }

    double varianza = suma_desviaciones_cuadradas / N;

    cout << "\nSuma total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Varianza: " << varianza << endl;

    return 0;
}