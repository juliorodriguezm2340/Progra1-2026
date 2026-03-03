// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 27/02/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    int contadorPrimos = 0;

    cout<<"Ingrese el numero N: ";
    cin>>n;

    srand(time(NULL));

    cout<<"Numeros generados:"<<endl;
    for (int i = 0; i < n; i++) {
        int numeroAleatorio = rand() % 10000 + 1;
        cout << numeroAleatorio << " ";
        
        if (esPrimo(numeroAleatorio)) {
            contadorPrimos++;
        }
    }

    cout<<endl;
    cout<<"Total de numeros primos encontrados: "<<contadorPrimos<<endl;

    return 0;
}