// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 23/02/2026
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingrese un numero del 1 al 10: "<<endl;
    cin>>num;

    if (num>=1 && num<=10) {
        for (int i = 1; i <= 10; i++) {
            cout<<num<<" x "<< i <<" = "<< num * i <<endl;
        }
    } else {
        cout <<"El numero debe estar entre 1 y 10"<<endl;
    }

    return 0;
}