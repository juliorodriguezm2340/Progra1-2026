#include <iostream>
using namespace std;

int potencia(int a, int n) {
    if (n == 0) {
        return 1;
    }
    return a * potencia(a, n - 1);
}

int main() {
    int base, exponente;
    cout << "Ingresa la base: ";
    cin >> base;
    cout << "Ingresa el exponente (no negativo): ";
    cin >> exponente;
    
    if (exponente < 0) {
        cout << "Error: esta versión solo acepta exponentes >= 0." << endl;
        return 1;
    }
    
    int resultado = potencia(base, exponente);
    cout << base << "^" << exponente << " = " << resultado << endl;
    
    cout << "\nEjemplo potencia(2, 3) = " << potencia(2, 3) << endl;
    
    return 0;
}