// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca.
// Fecha creación: 11/05/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void VentasPorSucursal(int ventas[4][7]) {
    cout << "Ventas totales por sucursal:" << endl;
    for (int i = 0; i < 4; i++) {
        int total = 0;
        for (int j = 0; j < 7; j++) {
            total += ventas[i][j];
        }
        cout << "Sucursal " << i + 1 << ": " << total << endl;
    }
}
void VentasPorDia(int ventas[4][7]) {
    cout << "Ventas totales por dia:" << endl;
    for (int j = 0; j < 7; j++) {
        int total = 0;
        for (int i = 0; i < 4; i++) {
            total += ventas[i][j];
        }
        cout << "Dia " << j + 1 << ": " << total << endl;
    }
}
int main() {
    srand(time(NULL));
    int ventas[4][7];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            ventas[i][j] = rand() % 100 + 50; 
        }
    }
    VentasPorSucursal(ventas);
    cout << endl;
    VentasPorDia(ventas);
    return 0;
}