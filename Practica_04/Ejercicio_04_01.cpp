// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 04/03/2026

#include <iostream>
using namespace std;

float Calculararea(float base , float altura){
    float area = (base * altura) / 2;
    return area;
}
int main(){
float b , a;
float resultadofinal;

cout << "Ingrese la base: ";
cin >> b;
cout << "Ingrese la altura: ";
cin >> a;

resultadofinal = Calculararea(b , a);
cout << "El area de su triangulo es " << resultadofinal ;
    return 0;
}