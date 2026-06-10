#include <iostream>
#include <string>
using namespace std;
struct Atleta{
    string nombre;
    string pais;
    int edad;
    int mejor_tiempo;
};
void registrarAtleta(Atleta &t){
    cout << "Ingrese su nombre: ";
    getline(cin , t.nombre);
    cout << "Ingrese su pais: ";
    getline(cin , t.pais);
    cout << "Ingrese su edad: ";
    cin >> t.edad;
    cout << "Ingrese su tiempo: ";
    cin >> t.mejor_tiempo;
    cin.ignore();
}
void EvaluarTiempo(Atleta a , Atleta &c){
    if(a.mejor_tiempo < c.mejor_tiempo){
        c = a;
    }
}
void MostrarCampeon(Atleta campeon){
    cout << "Nombre: " << campeon.nombre << endl;
    cout << "Pais: " << campeon.pais << endl;
    cout << "Edad: " << campeon.edad << endl;
    cout << "Tiempo: " << campeon.mejor_tiempo << endl;
}
int main(){
    int n;
    cout << "Ingrese cuantos atletas van a participar: ";
    cin >> n;
    cin.ignore();
    Atleta campeon;
    campeon.mejor_tiempo = 99999;
        for(int i = 0 ; i < n ; i++){
            cout << "Registrando al atleta numero " << i + 1 << endl;
            Atleta actual;
            registrarAtleta(actual);
            EvaluarTiempo(actual , campeon);
        }
        MostrarCampeon(campeon);
    return 0;
}