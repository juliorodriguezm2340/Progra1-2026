#include <iostream>
#include <vector>
using namespace std;

int sumaVector(const vector<int>& v, int i) {
    if (i == v.size()) {
        return 0;
    }
    return v[i] + sumaVector(v, i + 1);
}

int main() {
    int n;
    cout << "Ingresa la cantidad de elementos del vector: ";
    cin >> n;
    
    vector<int> v(n);
    cout << "Ingresa los " << n << " números:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int resultado = sumaVector(v, 0);
    cout << "\nLa suma de los elementos es: " << resultado << endl;
    
    // Ejemplo de prueba
    vector<int> ejemplo = {3, 5, 2, 8};
    cout << "\nEjemplo con {3, 5, 2, 8}: suma = " << sumaVector(ejemplo, 0) << " (debe ser 18)" << endl;
    
    return 0;
}