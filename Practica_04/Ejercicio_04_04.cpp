// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 04/03/2026

#include <iostream>
using namespace std;
float Cambiomoneda(float bolivianos , float tipocambio){
    float resultado;
    resultado = bolivianos / tipocambio;
    return resultado;
}
int main(){
float bs , oficial , paralelo , resultadooficial , resultadoparalelo;

cout << "Cuantos Bs quiere cambiar: " ;
cin >> bs;
cout << "A cuanto esta el dolar oficial: ";
cin >> oficial;
cout << "A cuanto esta el dolar paralelo:";
cin >> paralelo;
resultadooficial = Cambiomoneda(bs , oficial);
resultadoparalelo = Cambiomoneda(bs , paralelo);

cout << "Al cambio oficial tendrias " << resultadooficial << " $" << endl;
cout << "Al cambio paralelo tendrias " << resultadoparalelo << " $" << endl;






    return 0;
}