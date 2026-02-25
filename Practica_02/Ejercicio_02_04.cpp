// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 23/02/2026
#include <iostream>

using namespace std;

int main() {
    int n;
    int factorial = 1;
    int suma = 0;

    cout<<"Ingrese el valor de n: "<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++) {
        factorial=factorial * i;
        suma=suma + factorial;
    }

    cout <<"La suma de factoriales es: "<<suma<<endl;

    return 0;
}