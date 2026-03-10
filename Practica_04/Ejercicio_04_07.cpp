// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 04/03/2026

#include <iostream>
using namespace std;
float Calculodistancia(float v , float t){
    float distancia;
    
    distancia = v * t;
    return distancia;

}

int main(){
float v ,t ,resultadofinal;
cout << "Ingrese la velocdad de su objeto: ";
cin >> v;
cout << "Ingrese el tiempo que avanzo el objeto: ";
cin >> t;
resultadofinal = Calculodistancia(v , t);
cout << "La distancia que recorrio fue de " << resultadofinal;

    return 0;
}