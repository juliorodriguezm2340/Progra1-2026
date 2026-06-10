#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct empleado{
    string nombre;
    string genero;
    float salario;
};
void registrarEmpleado(empleado &a){
    cout << "Nombre: ";
    getline(cin , a.nombre);
    cout << "Genero: ";
    getline(cin , a.genero);
    cout << "Salario: ";
    cin >> a.salario;
}
void mostrarEmpleado(empleado b , string texto){
    cout << texto << endl;
    cout << "Nombre: " << b.nombre << endl;
    cout << "Genero: " << b.genero << endl;
    cout << "Salario: " << b.salario << endl;           
}
int main(){
    int n;
    cout << "Cuantos empleados va a registrar: ";
    cin >> n;
    cin.ignore();
    vector <empleado> Lista(n);
    for(int i = 0 ; i < n ; i++){
        registrarEmpleado(Lista[i]);
        cin.ignore();
    }
    empleado Mayor = Lista[0];
    empleado Menor = Lista[0];
    for(int i = 1 ; i < n ; i++){
        if(Lista[i].salario > Mayor.salario){
            Mayor = Lista[i];
        }else if(Lista[i].salario < Menor.salario){
            Menor = Lista[i];
        }
    }
    mostrarEmpleado(Mayor , "EMPLEADO CON MENOR SALARIO");
    mostrarEmpleado(Menor , "EMPLEADO CON MENOR SALARIO");
    return 0;
}