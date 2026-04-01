// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 11/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;
void IntercambiarValores(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int valor1 = 15;
    int valor2 = 30;

    cout << "Antes de la funcion: ";
    cout << "valor1 = " << valor1 << " ";
    cout << "valor2 = " << valor2 << " ";

    IntercambiarValores(valor1, valor2);

    cout << "Despues de la funcion: ";
    cout << "valor1 = " << valor1 << " ";
    cout << "valor2 = " << valor2 << " ";

    return 0;
}