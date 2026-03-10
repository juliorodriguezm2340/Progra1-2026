// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Carnet: 12557161
// Fecha creación: 04/03/2026

#include <iostream>
using namespace std;
bool Esverdad(int numero){
    int residuo;
    bool resultado;
    residuo = numero % 2;
    
    if(residuo == 0){
        resultado = true;
    }else{
        resultado = false;
    }
    return resultado;
}
int main(){
    int n , resultadofinal;
    cout << "Ingrese el numero: ";
    cin >> n;
    resultadofinal = Esverdad(n);
        if(resultadofinal == true){
            cout << "Su numero es par";
        }else{
        cout << "Su numero es impar";
    }

}