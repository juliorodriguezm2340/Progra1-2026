#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void CrearArchivo(int cantidad){
    string nombre;
    int edad;
    float promedio;
    ofstream Escritura("estudiantes.txt");
    if(Escritura.is_open()){
        for(int i = 0 ; i < cantidad ; i++){
        cin.ignore();
        cout << "Ingrese los datos del estudiante numero " << i + 1 << endl;
        cout << "Nombre: ";
        getline(cin , nombre);
        cout << "Edad: ";
        cin >> edad;
        cout << "Promedio: ";
        cin >> promedio;
        Escritura << "Nombre: " << nombre << endl;
        Escritura << "Edad: " << edad << endl;
        Escritura << "Promedio: " << promedio << endl;
        Escritura << endl;
        }
        Escritura.close();
    }
}
void LeerArchivo(){
    string linea;
    ifstream Leer("estudiantes.txt");
    if(Leer.is_open()){
        cout << "Informacion de estudiantes" << endl;
        while(getline(Leer , linea)){
            cout << linea << endl;
        }
        Leer.close();
    }
}
int main(){
    int cantidad;
    cout << "Cuantos estudiantes desea registrar: ";
    cin >> cantidad;
    CrearArchivo(cantidad);
    LeerArchivo();
    return 0;
}