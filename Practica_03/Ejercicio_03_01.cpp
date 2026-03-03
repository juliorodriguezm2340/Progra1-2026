// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 27/02/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n, dado, contadorPares = 0;

    srand(time(0));

    cout<<"Introduce cuantas veces quieres lanzar el dado: ";
    cin>>n;

    for (int i = 0; i < n; i++) {
        dado=rand() % 6 + 1;
        
        cout<<"Lanzamiento "<< i + 1<<": salio "<<dado<<endl;
        
        if (dado % 2 == 0) {
            contadorPares++;
        }
    }

    cout<<"Total de lanzamientos: "<<n<<endl;
    cout<<"Frecuencia de caras pares: "<<contadorPares<<endl;

    return 0;
}