// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 04/03/2026

#include <iostream>
using namespace std;
int Mayor(int a ,int b , int c){
    int Elmayor;
    if(a >= b && a >= c){
        Elmayor = a;
    }else if(b >= a && b >= c){
        Elmayor = b;
    }else{
        Elmayor = c;
    }
    return Elmayor;
}
int main(){
int a , b ,c;
int resultadofinal;
cout << "Ingrese su primer numero: ";
cin >> a;
cout << "Ingrese su segundo nu8mero: ";
cin >> b;
cout << "Ingrese su tercer numero: ";
cin >> c;

resultadofinal = Mayor(a , b ,c);

cout <<"El mayor es " << resultadofinal;

    return 0;
}