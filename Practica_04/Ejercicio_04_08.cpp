// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 04/03/2026

#include <iostream>
using namespace std;
int Contadordigitos(int numero){
    int cantidad = 0;
    while(numero > 0){
        cantidad = cantidad + 1;

        numero = numero / 10;
    }
    return cantidad;


}

int main(){
int n , resultadofinal;
cout << "Ingrese el numero que quiere contatr sus digitos: ";
cin >> n;
resultadofinal = Contadordigitos(n);

cout << "Su numero tiene " << resultadofinal << " digitos";

    return 0;
}