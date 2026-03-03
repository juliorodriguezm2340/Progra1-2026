// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 27/02/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int num, factorial = 1;

    srand(time(0));
    
    num = rand() % 10 + 1;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout<<"Numero aleatorio generado: "<<num<<endl;
    cout<<"El factorial de "<<num<<" es: "<<factorial<<endl;

    return 0;
}