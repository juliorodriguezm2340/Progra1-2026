// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;
int main()
{
int edad;

cout<<"Digite su edad: "<<endl;
cin>>edad;

if(edad>=18 && edad<=25){
cout<<"Su edad esta en el rango de [18-25]"<<endl;
}else{
    cout<<"Su edad no esta en el rango"<<endl;
}
    return 0;
}