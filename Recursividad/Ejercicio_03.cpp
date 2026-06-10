#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Ingresa la posición n (n >= 0): ";
    cin >> n;
    
    if (n < 0) {
        cout << "Error: n debe ser mayor o igual a 0." << endl;
        return 1;
    }
    
    int resultado = fibonacci(n);
    cout << "Fibonacci(" << n << ") = " << resultado << endl;
    
    cout << "\nEjemplos:" << endl;
    cout << "Fibonacci(0) = " << fibonacci(0) << endl;
    cout << "Fibonacci(1) = " << fibonacci(1) << endl;
    cout << "Fibonacci(5) = " << fibonacci(5) << endl;
    cout << "Fibonacci(10) = " << fibonacci(10) << endl;
    
    return 0;
}