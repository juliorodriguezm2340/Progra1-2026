// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 06/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarPrecio() {
    return rand() % 31 + 20;
}

float calcularIVA(float suma_base) {
    return suma_base * 0.13;
}

float aplicarDescuento(float monto) {
    if (monto > 2500) {
        float descuento = monto * 0.05;
        cout << "Aplica descuento del 5% por exceder los 2500 Bs" << endl;
        cout << "Descuento aplicado: -" << descuento << " Bs" << endl;
        return monto - descuento;
    } else {
        cout << "El monto no excede los 2500 Bs, no aplica descuento." << endl;
        return monto;
    }
}

int main() {
    int n;
    float suma_base = 0.0;
    float iva = 0.0;
    float monto_final = 0.0;

    srand(time(0));

    cout << "Ingrese la cantidad de productos vendidos hoy (n): ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int precio = generarPrecio();
        cout << "Producto " << i + 1 << ": " << precio << " Bs" << endl;
        suma_base = suma_base + precio;
    }

    iva = calcularIVA(suma_base);
    monto_final = suma_base + iva;

    cout << "Suma base de los productos: " << suma_base << " Bs" << endl;
    cout << "Pago del IVA (13%) a Impuestos Nacionales: " << iva << " Bs" << endl;
    cout << "Monto con IVA incluido: " << monto_final << " Bs" << endl;

    monto_final = aplicarDescuento(monto_final);

    cout << "TOTAL FINAL A COBRAR: " << monto_final << " Bs" << endl;

    return 0;
}