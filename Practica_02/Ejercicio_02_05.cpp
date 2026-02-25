// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 23/02/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int numeroAleatorio;
    int numeroUsuario;
    int intentos = 0;

    srand(time(0));
    numeroAleatorio=1 + rand() % 100;

    do {
        cout <<"Adivine el numero (entre 1 y 100): "<<endl;
        cin>>numeroUsuario;
        
        intentos=intentos + 1;

        if (numeroUsuario>numeroAleatorio) {
            cout<<"El numero es menor."<<endl;
        } else if (numeroUsuario<numeroAleatorio) {
            cout<<"El numero es mayor."<<endl;
        }

    } while (numeroUsuario != numeroAleatorio);

    cout <<"Adivinaste el numero"<<endl;
    cout <<"Te llevo "<<intentos<<" intentos."<<endl;

    return 0;
}