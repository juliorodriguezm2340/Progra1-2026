#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void CrearArchivo(){
    ofstream Escritura("texto.txt");
    if(Escritura.is_open()){
        Escritura << "sa se si so su" << endl;
        Escritura << "ra re ri ro ru" << endl;
        Escritura << "soooooo" << endl;
        Escritura.close();
    }
}
void LeerArchivo(){
    string palabra;
    int contador = 0;
    ifstream Leer("texto.txt");
    if(Leer.is_open()){
        while(Leer >> palabra){
            contador++;
        }
        Leer.close();
        cout << "Hay " << contador << " palabras";
    }else{
        cout << "No se pudo abrir el archivo";
    }
}
int main(){
CrearArchivo();
LeerArchivo();
    return 0;
}