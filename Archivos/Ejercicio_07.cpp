#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void CrearNotas(){
    ofstream Escritura("calificaciones.txt");
    if(Escritura.is_open()){
        Escritura << "Juan 7.5 8.0 9.5 6.5" << endl;
        Escritura << "Ana 8.0 7.5 9.0 8.5" << endl;
        Escritura << "Luis 6.0 6.5 7.0 5.5" << endl;
        Escritura.close();
    }
}
void Promedios(){
    ifstream Leer("calificaciones.txt");
    ofstream Escribir("promedios.txt");
    if(Leer.is_open() && Escribir.is_open()){
        string nombre;
        float n1,n2,n3,n4;
        float suma , promedio;
        while(Leer >> nombre >> n1 >> n2 >> n3 >> n4){
            suma = n1 + n2 + n3 + n4;
            promedio = suma / 4.0;
            Escribir << nombre << " " << promedio << endl;
        }
        Leer.close();
        Escribir.close();
        cout << "El promedio de notas esta en el archivo promedios.txt";
    }
}
int main(){
CrearNotas();
Promedios();
    return 0;
}