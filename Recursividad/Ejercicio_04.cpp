#include <iostream>
using namespace std;

int mcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Ingresa el primer número: ";
    cin >> a;
    cout << "Ingresa el segundo número: ";
    cin >> b;
    
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    if (a == 0 && b == 0) {
        cout << "El MCD de 0 y 0 no está definido." << endl;
        return 1;
    }
    
    int resultado = mcd(a, b);
    cout << "MCD(" << a << ", " << b << ") = " << resultado << endl;
    
    cout << "\nEjemplo: MCD(48, 18) = " << mcd(48, 18) << " (debe ser 6)" << endl;
    
    return 0;
}