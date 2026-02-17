// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 11/02/2026
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float cateto1,cateto2,hipotenusa;

cout<<"Digite el valor de su cateto opuesto: "<<endl;
cin>>cateto1;
cout<<"Digite el valor de su cateto adyacente: "<<endl;
cin>>cateto2;
hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));

cout<<"El valor de la hipotenusa es: "<<hipotenusa<<endl;
    return 0;
}