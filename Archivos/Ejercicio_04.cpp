#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void CrearArchivo(){
ofstream Escribir("datos.txt");
string texto;
    if(Escribir.is_open()){
        cout << "Ingrese todas sus oraciones: ";
        getline(cin , texto);
        Escribir << texto << endl;
        Escribir.close();
    }
}
void LeerArchivo(){
    string palabrabuscada;
    cout << "Ingrese la palabra que busca: ";
    getline(cin , palabrabuscada);
    
    ifstream Leer("datos.txt");
    if(Leer.is_open()){
        string linea;
        int contador = 0;
        while(getline(Leer , linea)){
            size_t posicion = linea.find(palabrabuscada , 0);
                while(posicion != string ::npos){
                    contador++;
                    posicion = linea.find(palabrabuscada , posicion + palabrabuscada.size());
                }
        }
        Leer.close();
        cout << "La palabra " << palabrabuscada << " aparece " << contador << " veces";  
    }
}
int main(){
CrearArchivo();
LeerArchivo();
    return 0;
}