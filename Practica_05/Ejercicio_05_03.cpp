// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 06/03/2026

#include <iostream>
using namespace std;

float calcularSalarioBase(float horas, float tarifa) {
    return horas * tarifa;
}

float calcularBonificacion(float horas, float bono_por_hora) {
    if (horas > 8) {
        return (horas - 8) * bono_por_hora;
    }
    return 0.0;
}

int main() {
    float horas_trabajadas;
    float tarifa_por_hora;
    float bonificacion_por_hora;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horas_trabajadas;

    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifa_por_hora;

    cout << "Ingrese la bonificacion por cada hora extra: ";
    cin >> bonificacion_por_hora;

    float salario_base = calcularSalarioBase(horas_trabajadas, tarifa_por_hora);
    float salario_bonificacion = calcularBonificacion(horas_trabajadas, bonificacion_por_hora);
    float salario_total = salario_base + salario_bonificacion;

    cout << " Salario total del trabajador: " << salario_total << " Bs" << endl;
    cout << " Salario por bonificacion: " << salario_bonificacion << " Bs" << endl;

    return 0;
}