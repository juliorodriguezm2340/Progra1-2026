#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void RegistroTemperaturas(){
    ofstream Escribir("temperaturas.txt");
    if(Escribir.is_open()){
        Escribir << "Madrid 32.5" << endl;
        Escribir << "Barcelona 28.3" << endl;
        Escribir << "Sevilla 34.2" << endl;
        Escribir << "Valencia 31.0" << endl;
        Escribir.close();
    }
}
void FiltrarTemperaturas(){
float Temperaturalimite;
cout << "Ingrese la temperatura minima para filtrar: ";
cin >> Temperaturalimite;
    ifstream Leer("temperaturas.txt");
    ofstream Escribir("altas_temperaturas.txt");
    if(Leer.is_open() && Escribir.is_open()){
    string ciudad;
    float temperatura;
    int contador = 0;
        while(Leer >> ciudad >> temperatura){
            if(temperatura > Temperaturalimite){
                Escribir << ciudad << " " << temperatura << endl;
                contador++;
            }
        }
        Leer.close();
        Escribir.close();
        cout << "Los resultados se guardaron en altas_temperaturas.txt";
    }
}
int main(){
RegistroTemperaturas();
FiltrarTemperaturas();
    return 0;
}