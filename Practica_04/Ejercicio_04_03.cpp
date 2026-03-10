// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 04/03/2026

#include <iostream>
using namespace std;
const float PI = 3.14159;
float Volumencilindro(float r , float h){
    float resultado;
    resultado = PI * r * r * h;
    return resultado;
}
int main(){
float r , h;
float resultadofinal;
cout << "Ingrese el radio: ";
cin >> r;
cout << "Ingrese la altura: ";
cin >> h;

resultadofinal = Volumencilindro(r , h);

cout << "El volumen del cilindro es " << resultadofinal;




    return 0;
}