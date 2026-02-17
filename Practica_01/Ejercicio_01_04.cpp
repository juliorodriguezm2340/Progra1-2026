// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Carrera del estudiante: Ingenieria de sistemas
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;
int main()
{
float practicas,teorica,participacion,notaFinal;

cout<<"Digite la nota de practicas: "<<endl;
cin>>practicas;
cout<<"Digite la nota teorica: "<<endl;
cin>>teorica;
cout<<"Digite la nota de participacion: "<<endl;
cin>>participacion;

practicas=practicas*0.30;
teorica=teorica*0.60;
participacion=participacion*0.10;
notaFinal=practicas+teorica+participacion;

cout<<"La nota final es: "<<notaFinal<<endl;
    return 0;
}