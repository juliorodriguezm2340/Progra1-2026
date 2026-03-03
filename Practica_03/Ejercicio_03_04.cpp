// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 27/02/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cout<<"Ingrese la cantidad de numeros (N): ";
    cin>>n;

    if (n <= 0) {
        cout<<"N debe ser mayor a 0"<<endl;
        return 0;
    }

    int suma = 0;
    int mayor = 0;
    int menor = 1001;

    srand(time(0));

    cout<<"Numeros generados: ";
    for (int i = 0; i < n; i++) {
        int numero = rand() % 1000 + 1;
        cout<<numero<<" ";

        suma = suma + numero;

        if (numero > mayor) {
            mayor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    float promedio = (float)suma / n;

    cout<<"a. Sumatoria: "<<suma<<endl;
    cout<<"b. Promedio: "<<promedio<<endl;
    cout<<"c. Mayor valor: "<< mayor<<endl;
    cout<<"d. Menor valor: "<<menor<<endl;

    return 0;
}