// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 11/09/2025
// Número de ejercicio: 1
#include <iostream>

using namespace std;

double calcularArea(double lado) {
    return lado * lado;
}

double calcularArea(double base, double altura) {
    return base * altura;
}

float calcularArea(float radio, float PI) {
    return PI * radio * radio;
}

int main() {
    double ladoCuadrado = 4.0;
    cout << "Area del cuadrado: " << calcularArea(ladoCuadrado) << endl;

    double baseRectangulo = 5.0;
    double alturaRectangulo = 8.0;
    cout << "Area del rectangulo: " << calcularArea(baseRectangulo, alturaRectangulo) << endl;

    float radioCirculo = 3.0;
    float valorPI = 3.1415;
    cout << "Area del circulo: " << calcularArea(radioCirculo, valorPI) << endl;

    return 0;
}