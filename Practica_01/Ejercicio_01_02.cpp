// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;
int main(){
float Preciofinal,Precio,IVA;

cout<<"Ingrese precio del producto: "<<endl;
cin>>Precio;

IVA=Precio*0.13;
Preciofinal=Precio+IVA;

cout<<"El precio del producto despues de aplicarle el IVA es: "<<Preciofinal<<endl;
    return 0;
}