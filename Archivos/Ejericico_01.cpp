#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void EscribirNombres(int cantidad){
    cin.ignore();
    string nombre;
    ofstream Escritura("nombres.txt");
    if(Escritura.is_open()){
        for(int i = 0 ; i < cantidad ; i++){
            cout << "Nombre numero " << i + 1 << ": ";
            getline(cin , nombre);
            Escritura << nombre << endl;
        }
        Escritura.close();
    }else{
        cout << "No se pudo crear el archivo";
    }
}
void LeerNombres(){
    ifstream Leer("nombres.txt");
    string linea;
    if(Leer.is_open()){
        while(getline(Leer , linea)){
            cout << linea << endl;
        }
        Leer.close();
    }else{
        cout << "No se puede abrir el archivo";
    }
}
int main(){
    int cantidad;
    cout << "Ingrese la cantidad de nombres: ";
    cin >> cantidad;
EscribirNombres(cantidad);
LeerNombres();
    return 0;
}