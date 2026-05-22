// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca.
// Fecha creación: 11/05/2026
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void agruparPixeles(vector<int> pixeles) {
    vector<int> rangos(26, 0);
    for (int i = 0; i < pixeles.size(); i++) {
        int indice = pixeles[i] / 10;
        rangos[indice]++;
    }
    for (int i = 0; i < 26; i++) {
        int inicio = i * 10;
        int fin = inicio + 9;
        if (fin > 255) {
            fin = 255;
        }   
        cout << inicio << "-" << fin << ": " << rangos[i] << " pixeles" << endl;
    }
}
int main() {
    srand(time(NULL));
    int N = 20;
    vector<int> pixeles;
    cout << "Pixeles: ";
    for (int i = 0; i < N; i++) {
        int valor = rand() % 256;
        pixeles.push_back(valor);
        cout << valor << " ";
    }
    cout << endl;
    agruparPixeles(pixeles);
    return 0;
}