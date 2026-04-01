// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 11/09/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos) {
    horas = totalSegundos / 3600;
    totalSegundos = totalSegundos % 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}

int main() {
    int tiempoTotal = 7384;
    int h = 0;
    int m = 0;
    int s = 0;

    calcularTiempo(tiempoTotal, h, m, s);

    cout << "Total de segundos ingresados: " << tiempoTotal << endl;
    cout << "Horas: " << h << endl;
    cout << "Minutos: " << m << endl;
    cout << "Segundos: " << s << endl;

    return 0;
}