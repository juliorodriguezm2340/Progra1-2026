// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 27/02/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n, moneda, caras = 0, cruz = 0;
    float porcentajeCaras, porcentajeCruz;

    srand(time(0));

    cout<<"Introduce cuantas veces quieres lanzar la moneda: ";
    cin>>n;

    for (int i = 0; i < n; i++) {
        moneda = rand() % 2;
        
        if (moneda == 0) {
            caras++;
        } else {
            cruz++;
        }
    }

    porcentajeCaras=(caras * 100.0) / n;
    porcentajeCruz=(cruz * 100.0) / n;

    cout<<"Total de lanzamientos: "<<n<<endl;
    cout<<"Caras: "<<caras<<" ("<< porcentajeCaras<<"%)"<<endl;
    cout<<"Cruz: "<<cruz<<" ("<<porcentajeCruz<<"%)"<<endl;

    return 0;
}