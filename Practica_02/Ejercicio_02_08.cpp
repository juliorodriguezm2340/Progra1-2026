// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 23/02/2026
#include <iostream>

using namespace std;

int main() {
    int n;
    float precio;
    float subtotal = 0;
    float totalIva = 0;
    float totalVentas = 0;

    cout<<"Ingrese la cantidad de productos vendidos (n): "<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++) {
        cout<<"Ingrese el precio base del producto "<< i <<": ";
        cin>>precio;
        subtotal=subtotal + precio;
    }

    totalIva=subtotal * 0.13;
    totalVentas=subtotal + totalIva;

    if (totalVentas>2500) {
        totalVentas=totalVentas - (totalVentas * 0.05);
    }

    cout <<"Total de ventas realizadas en el dia (Bs): "<< totalVentas<<endl;
    cout <<"Pago del IVA (13%) a Impuestos Nacionales (Bs): "<< totalIva<<endl;
    return 0;
}