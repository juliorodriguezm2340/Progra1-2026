// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 04/03/2026

#include <iostream>
using namespace std;
int Promnotas(int n1 , int n2){
    int suma;
    int promedio;
    suma = n1 + n2;
    promedio = suma / 2;
    return promedio;
}

int main(){
int nota1 , nota2 , resultadofinal;
cout << "Ingrese la primera nota: " <<endl;
cin >> nota1;
cout << "Ingrese la segunda nota: " << endl;
cin>>nota2;

resultadofinal = Promnotas(nota1 , nota2);

cout << "El promedio de la nota es " << resultadofinal << endl;

    return 0;
}