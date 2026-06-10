#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Estudiante{
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    int telefono;
};
void registrarEstudiante(Estudiante &a){
    cout << "Cedula de identidad: ";
    cin >> a.cedula;
    cin.ignore();
    cout << "Nombre: ";
    getline(cin , a.nombre);
    cout << "Apellido: ";
    getline(cin , a.apellido);
    cout << "Edad: ";
    cin >> a.edad;
    cin.ignore();
    cout << "Profesion: ";
    getline(cin ,a.profesion);
    cout << "Lugar de nacimiento: ";
    getline(cin , a.lugar_nacimiento);
    cout << "Direccion: ";
    getline(cin , a.direccion);
    cout << "Telefono: ";
    cin >> a.telefono;
}
void MostrarEstudiantes(Estudiante a){
    cout << "Cedula: " << a.cedula << endl;
    cout << "Nombre: " << a.nombre << endl;
    cout << "Apellido: " << a.apellido << endl;
    cout << "Edad: " << a.edad << endl;
    cout << "Profesion: " << a.profesion << endl;
    cout << "Lugar de nacimiento: " << a.lugar_nacimiento << endl;
    cout << "Direccion: " << a.direccion << endl;
    cout << "Telefono: " << a.telefono << endl;
}
int main(){
    int n;
    cout << "Cuantos alumnos desea ingresar: ";
    cin >> n;
    cin.ignore();
    vector <Estudiante> Lista(n);
    for(int i = 0 ; i < n ; i++){
        registrarEstudiante(Lista[i]);
        cin.ignore();
    }
    cout << "Lista de estudiantes" << endl;
    for(int i = 0 ; i < n ; i++){
        MostrarEstudiantes(Lista[i]);
    }
    return 0;
}
