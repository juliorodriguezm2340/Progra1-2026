// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca.
// Fecha creación: 11/05/2026
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
void VerificarAlertas(string nombres[5], int monitoreo[5][24], int umbral) {
    cout << "Pacientes que superaron el umbral de " << umbral << " grados en mas de 3 ocasiones:" << endl;
    for (int i = 0; i < 5; i++) {
        int contador = 0;
        for (int j = 0; j < 24; j++) {
            if (monitoreo[i][j] > umbral) {
                contador++;
            }
        }
        if (contador > 3) {
            cout << "- " << nombres[i] << " (" << contador << " veces)" << endl;
        }
    }
}
int main() {
    srand(time(NULL));
    string nombres[5] = {"Ana Torroja", "Juan Luna", "Sergio Murillo", "Liliana Espinoza", "Mercedes Lima"};
    int monitoreo[5][24];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 24; j++) {
            monitoreo[i][j] = rand() % 21 + 20;
        }
    }
    int umbral = 37;
    VerificarAlertas(nombres, monitoreo, umbral);   
    return 0;
}