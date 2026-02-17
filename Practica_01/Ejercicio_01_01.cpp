// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;
int main(){

float n1,n2,Suma,Resta,Multiplicacion,Division;
cout<<"Digite su primer numero: "<<endl;
cin>>n1;
cout<<"Digite su segundo numero: "<<endl;
cin>>n2;

Suma=n1+n2;
Resta=n1-n2;
Multiplicacion=n1*n2;

cout<<"La suma de sus numeros es "<<Suma<<endl;
cout<<"La resta de sus numeros es "<<Resta<<endl;
cout<<"La multiplicacion de sus numeros es "<<Multiplicacion<<endl;

if(n2==0){
cout<<"No es posible la division. "<<endl;
}else{
Division=n1/n2;
cout<<"La division de sus numeros es "<<Division<<endl;
}
    return 0;
}