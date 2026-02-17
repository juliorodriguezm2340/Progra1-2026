// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;
int main()
{
int n1,n2,n3,n4;

cout<<"Ingrese su primer numero: "<<endl;
cin>>n1;
cout<<"Ingrese su segundo numero: "<<endl;
cin>>n2;
cout<<"Ingrese su tercer numero: "<<endl;
cin>>n3;
cout<<"Ingrese su cuarto numero: "<<endl;
cin>>n4;

if (n1==n4 || n2==n4 || n3==n4) {
cout<<"Su numero coincide con uno de los introducidos anteriormente. "<<endl;
}else{
    cout<<"Su numero no coincide con ninguno de los introducidos anteriormente. "<<endl;
}
    return 0;
}