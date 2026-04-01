// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 11/09/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;

float CalcularPrecioTotal(float precioBase, float impuesto = 13.0) {
    float montoImpuesto = (precioBase * impuesto) / 100;
    return precioBase + montoImpuesto;
}

int main() {
    float precio1 = 100.0;
    float precio2 = 50.0;

    cout << "Precio total del producto 1: " << CalcularPrecioTotal(precio1) << endl;
    
    cout << "Precio total del producto 2 con 5% de impuesto: " << CalcularPrecioTotal(precio2, 5.0) << endl;

    return 0;
}