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
    cout<<"Ingrese la cantidad total de ninos N: ";
    cin>>n;

    srand(time(NULL));

    int ninos1 = rand() % (n + 1);
    int ninos2 = rand() % (n - ninos1 + 1);
    int ninos3 = rand() % (n - ninos1 - ninos2 + 1);

    int totalPanales = (ninos1 * 6) + (ninos2 * 3) + (ninos3 * 2);

    cout<<"Ninos de 1 ano: "<<ninos1<<endl;
    cout<<"Ninos de 2 anos: "<<ninos2<<endl;
    cout<<"Ninos de 3 anos: "<<ninos3<<endl;
    
    cout<<"Consumo de panales: ("<<ninos1<<" x 6) + (" 
         <<ninos2<<" x 3) + ("<<ninos3<<" x 2) = " 
         <<totalPanales<<" PANALES"<<endl;

    return 0;
}