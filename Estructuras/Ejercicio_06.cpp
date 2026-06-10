#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string nombre;
    int id;
    double sueldo;
    int antiguedad;
};

void cargarEmpleados(Empleado emp[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEmpleado ID " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        getline(cin, emp[i].nombre);
        cout << "ID Numerico: ";
        cin >> emp[i].id;
        cout << "Sueldo: ";
        cin >> emp[i].sueldo;
        cout << "Antiguedad (Anios): ";
        cin >> emp[i].antiguedad;
        cin.ignore();
    }
}
int contarSueldoMayorA(const Empleado emp[], int n, double sueldoLimite) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (emp[i].sueldo > sueldoLimite) {
            contador++;
        }
    }
    return contador;
}

double calcularPromedioAntiguedad(const Empleado emp[], int n) {
    if (n == 0) return 0.0;
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += emp[i].antiguedad;
    }
    return suma / n;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de empleados: ";
    cin >> n;
    cin.ignore();

    Empleado lista[n];
    cargarEmpleados(lista, n);

    double sueldoFiltro;
    cout << "\nIngrese el valor de sueldo para realizar el filtro: ";
    cin >> sueldoFiltro;

    cout << "Empleados con sueldo mayor a " << sueldoFiltro << ": " 
         << contarSueldoMayorA(lista, n, sueldoFiltro) << endl;

    cout << "Promedio de antiguedad general: " 
         << calcularPromedioAntiguedad(lista, n) << " anios." << endl;

    return 0;
}