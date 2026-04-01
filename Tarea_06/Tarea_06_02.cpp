// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 11/09/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;

double CalcularVolumen(double radio, double altura = 10.0) {
    const double PI = 3.1415;
    return PI * radio * radio * altura;
}

int main() {
    double radio = 5.0;
    
    cout << "Volumen con radio " << radio << " y altura por defecto (10): ";
    cout << CalcularVolumen(radio) << " ";
    
    cout << "Volumen con radio " << radio << " y altura especifica (25.5): ";
    cout << CalcularVolumen(radio, 25.5) << " ";
    
    return 0;
}