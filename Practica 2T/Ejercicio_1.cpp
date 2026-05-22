// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca.
// Fecha creación: 11/05/2026
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void mostrarInterseccion(vector<string> listaA, vector<string> listaB) {
    cout << "Clientes en comun: ";
    for (int i = 0; i < listaA.size(); i++) {
        for (int j = 0; j < listaB.size(); j++) {
            if (listaA[i] == listaB[j]) {
                cout << listaA[i] << " ";
            }
        }
    }
    
    cout << endl;
}
int main() {
    vector<string> listaA = {"Juan", "Maria", "Pedro", "Ana", "Luis"};
    vector<string> listaB = {"Ana", "Carlos", "Pedro", "Sofia", "Luis"};
    mostrarInterseccion(listaA, listaB);    
    return 0;
}