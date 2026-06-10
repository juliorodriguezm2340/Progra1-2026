#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
void CrearArchivo(){
    ofstream Escritura("documento.txt");
        if(Escritura.is_open()){
            Escritura << "soo de dia y noche" << endl;
            Escritura << "la vaca lola" << endl;
            Escritura << "La vaca lola" << endl;
            Escritura << "Tiene cabeza y tiene cola" << endl;
            Escritura.close();
        }
}
void AnalizarArchivo(){
    ifstream Leer("documento.txt");
    if(Leer.is_open()){
        string linea;
        int totalLineas = 0;
        int totalPalabras = 0;
        int totalCaracteres = 0;
        while(getline(Leer , linea)){
            totalLineas++;
            totalCaracteres = totalCaracteres + linea.size() + 1;
            stringstream flujo(linea);
            string palabra;
            while(flujo >> palabra){
                totalPalabras++;
            }
        }
        Leer.close();
        cout << "Tiene " << totalLineas << " lineas" << endl;
        cout << "Tiene " << totalCaracteres << " caracteres" << endl;
        cout << "Tiene " << totalPalabras << " palabras" << endl;
    }
}
int main(){
CrearArchivo();
AnalizarArchivo();
    return 0;
}