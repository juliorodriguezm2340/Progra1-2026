// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 06/03/2026

#include <iostream>
using namespace std;

float calcularComision(float total_vendido) {
    return total_vendido * 0.10;
}

float calcularSueldoTotal(float sueldo_basico, float comision) {
    return sueldo_basico + comision;
}

int main() {
    int n;
    
    cout << "Ingrese la cantidad de vendedoras (n): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        float sueldo_basico;
        float total_vendido = 0.0;
        float precio_producto;
        
        cout << "Vendedora " << i + 1 << " ---" << endl;
        cout << "Ingrese el sueldo basico por antiguedad: ";
        cin >> sueldo_basico;

        for (int j = 0; j < 10; j++) {
            cout << "Precio del producto " << j + 1 << " vendido: ";
            cin >> precio_producto;
            total_vendido = total_vendido + precio_producto;
        }

        float comision = calcularComision(total_vendido);
        float sueldo_total = calcularSueldoTotal(sueldo_basico, comision);

        cout << "Resultados vendedora " << i + 1 << ":" << endl;
        cout << "Total vendido: " << total_vendido << " Bs" << endl;
        cout << "Comision extra (10%): " << comision << " Bs" << endl;
        cout << "Sueldo total a cancelar: " << sueldo_total << " Bs" << endl;
    }

    return 0;
}
