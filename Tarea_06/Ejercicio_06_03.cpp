// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 11/09/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void ModificarValores(int porValor, int& porReferencia) {
    porValor = porValor * 2;
    porReferencia = porReferencia + 10;
}

int main() {
    int valor1 = 5;
    int valor2 = 15;

    cout << "Antes de la funcion: ";
    cout << "valor1 (por valor) = " << valor1 << " ";
    cout << "valor2 (por referencia) = " << valor2 << " ";

    ModificarValores(valor1, valor2);

    cout << "Despues de la funcion: ";
    cout << "valor1 (por valor) = " << valor1 << " (Nota que no cambia en main) ";
    cout << "valor2 (por referencia) = " << valor2 << " (Nota que si cambia en main) ";

    return 0;
}