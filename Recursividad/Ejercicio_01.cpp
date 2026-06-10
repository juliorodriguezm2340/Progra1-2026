#include <iostream>
using namespace std;

int sumaDigitos(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumaDigitos(n / 10);
}

int main() {
    int numero;
    cout << "Ingresa un número entero positivo: ";
    cin >> numero;
    
    if (numero < 0) {
        cout << "Error: Debes ingresar un número positivo." << endl;
        return 1;
    }
    
    int resultado = sumaDigitos(numero);
    cout << "La suma de los dígitos de " << numero << " es: " << resultado << endl;
    
    return 0;
}