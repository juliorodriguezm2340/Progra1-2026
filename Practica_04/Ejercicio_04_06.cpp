// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 04/03/2026

#include <iostream>
using namespace std;
int Sumaresultado(int numero){
    int sumatotal = 0;
    for(int i = 1 ; i <= numero ; i++){
        sumatotal = sumatotal + i;
    }
    return sumatotal;

}



int main(){
int n , resultadofinal;
cout << " Hasta que numero desea sumar: ";
cin >> n;
resultadofinal = Sumaresultado(n);
    cout << "La suma total de tu numero " << n << " es " << resultadofinal;



    return 0;
}