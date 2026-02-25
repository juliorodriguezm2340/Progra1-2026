// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 23/02/2026
#include <iostream>

using namespace std;

int main() {
    int numero;
    int sumaTotal = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaPrimos = 0;
    int esPrimo;

    do {
        cout<<"Ingrese un numero entre 0 y 100: ";
        cin>>numero;

        if (numero>0 && numero<=100) {
            
            sumaTotal=sumaTotal + numero;

            if (numero%2== 0) {
                sumaPares=sumaPares + numero;
            } else {
                sumaImpares=sumaImpares + numero;
            }

            esPrimo=1;
            
            if (numero==1) {
                esPrimo=0;
            } else {
                for (int i=2; i<numero; i++) {
                    if (numero%i== 0) {
                        esPrimo=0;
                        break;
                    }
                }
            }

            if (esPrimo==1) {
                sumaPrimos=sumaPrimos + numero;
            }
        }
        
    } while (numero!=0);

    cout<<"Suma todos: "<<sumaTotal << endl;
    cout<<"Suma pares: "<<sumaPares << endl;
    cout<<"Suma impares: "<<sumaImpares << endl;
    cout<<"Suma primos: "<<sumaPrimos << endl;

    return 0;
}