#include <iostream>
#include <string>
using namespace std;
struct Libro{
    string titulo;
    string autor;
    int anio_publicacion;
    bool disponible;
};
void registrarLibro(Libro &l){
    cout << "Ingrese el titulo del libro: ";
    getline(cin , l.titulo) ;
    cout << "Ingrese el nombre del autor: ";
    getline(cin , l.autor);
    cout << "Ingrese el anio de publicacion: ";
    cin >> l.anio_publicacion;
    cout << "El libro esta disponible? (1 para si , 0 para no)";
    cin >> l.disponible;
}
void MostrarLibro(Libro L){
    cout << "Titulo:" << L.titulo << endl;
    cout << "Autor:" << L.autor << endl;
    cout << "Anio:" << L.anio_publicacion << endl;
    if(L.disponible == true){
        cout << "Esta disponible";
    }else{
        cout << "No esta disponible";
    }
}
int main(){
Libro milibroCaja;
registrarLibro(milibroCaja);
MostrarLibro(milibroCaja);
    return 0;
}