// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 23/02/2026
#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout<<"Ingrese el primer numero: "<<endl;
    cin>>num1;
    
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>num2;

    if (num1>num2) {
        for (int i = num1; i >= num2; i--) {
            cout<< i<< " ";
        }
    } else if (num1 < num2) {
        for (int i = num1; i <= num2; i++) {
            cout<< i<<" ";
        }
    } else {
        cout <<"Los numeros son iguales, deben ser distintos."<<endl;
    }

    cout<<endl;

    return 0;
}