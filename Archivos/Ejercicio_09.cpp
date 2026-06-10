#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void Archivo(){
    ofstream Escritura("mensaje.txt");
    if(Escritura.is_open()){
        Escritura << "La vaca lola" << endl;
        Escritura << "La vaca lola" <<endl;
        Escritura << "Hace muuu" << endl;
        Escritura << "Hace muu" << endl;
        Escritura.close();
    }
}
void Cifrado(){
    ifstream Leer("mensaje.txt");
    ofstream Escribir("cifrado_cesar.txt");
    if(Leer.is_open() && Escribir.is_open()){
        string linea;
        int desplazamiento = 3;
        while(getline(Leer , linea)){
            for(int i = 0 ; i < linea.size() ; i++){
                char caracter = linea[i];
                if(caracter >= 'A' && caracter <= 'Z'){
                    caracter = (caracter - 'A' + desplazamiento) % 26 + 'A';
            
                }else if(caracter >= 'a' && caracter <= 'z'){
                    caracter = (caracter - 'a' + desplazamiento) % 26 + 'a';
                }
                Escribir << caracter;
            }
            Escribir << endl;
        }
        Leer.close();
        Escribir.close();
        cout << "El cifrado se ecuentra en el archivo cifrado_cesar.txt";
    }
}
int main(){
Archivo();
Cifrado();
    return 0;
}