#include <iostream>
using namespace std;

long long sumaCuadrados(int n) {
    if (n <= 0) {
        return 0;
    }
    return (long long)n * n + sumaCuadrados(n - 1);
}

int main() {
    int n;
    cout << "Ingresa un número entero positivo n: ";
    cin >> n;
    
    long long resultado = sumaCuadrados(n);
    cout << "Q(" << n << ") = " << resultado << endl;
    
    cout << "\nPruebas:" << endl;
    cout << "Q(1) = " << sumaCuadrados(1) << " (debe ser 1)" << endl;
    cout << "Q(3) = " << sumaCuadrados(3) << " (debe ser 14)" << endl;
    cout << "Q(5) = " << sumaCuadrados(5) << " (debe ser 55)" << endl;
    cout << "Q(10) = " << sumaCuadrados(10) << " (debe ser 385)" << endl;
    
    return 0;
}