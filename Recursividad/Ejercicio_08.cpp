#include <iostream>
using namespace std;

void conjeturaUllman(long long n) {
    cout << n << " ";
    if (n == 1) {
        return;
    }
    if (n % 2 == 0) {
        conjeturaUllman(n / 2);
    } else {
        conjeturaUllman(3 * n + 1);
    }
}

int main() {
    long long n;
    cout << "Ingresa un entero n > 1: ";
    cin >> n;
    
    if (n <= 1) {
        cout << "El número debe ser mayor que 1." << endl;
        return 1;
    }
    
    cout << "Secuencia: ";
    conjeturaUllman(n);
    cout << endl;
    
    return 0;
}