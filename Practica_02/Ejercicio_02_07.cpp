// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 23/02/2026
#include <iostream>

using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            suma=suma + i;
        }
    }

    if (suma==numero) {
        cout<<"El numero "<<numero<<" es perfecto."<<endl;
    } else {
        cout<<"El numero "<<numero<<" no es perfecto."<<endl;
    }

    return 0;
}