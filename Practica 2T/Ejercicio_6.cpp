// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca.
// Fecha creación: 11/05/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void calcularPromedios(int notas[20][3], float promedios[20]) {
    for (int i = 0; i < 20; i++) {
        float suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += notas[i][j];
        }
        promedios[i] = suma / 3.0;
    }
}
void reportarResultados(float promedios[20]) {
    float mejorPromedio = -1;
    int indiceMejor = 0;
    float sumaTotal = 0;
    for (int i = 0; i < 20; i++) {
        sumaTotal += promedios[i];
        if (promedios[i] > mejorPromedio) {
            mejorPromedio = promedios[i];
            indiceMejor = i;
        }
    }
    float promedioGeneral = sumaTotal / 20.0;
    cout << "Indice del estudiante con mejor promedio: " << indiceMejor + 1 << endl;
    cout << "Promedio general del grupo: " << promedioGeneral << endl;
}
int main() {
    srand(time(NULL));
    int notas[20][3];
    float promedios[20];
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 3; j++) {
            notas[i][j] = rand() % 101; 
        }
    }
    calcularPromedios(notas, promedios);
    cout << "Notas generadas (20 estudiantes x 3 parciales):" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        for (int j = 0; j < 3; j++) {
            cout << notas[i][j] << " ";
        }
        cout << "- Promedio: " << promedios[i] << endl;
    }
    cout << endl;
    reportarResultados(promedios);
    return 0;
}