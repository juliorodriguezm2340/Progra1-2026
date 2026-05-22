// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca.
// Fecha creación: 11/05/2026
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
bool esPalindromo(string texto) {
    vector<char> letras;
    for (int i = 0; i < texto.length(); i++) {
        char c = tolower(texto[i]);
        if (c >= 'a' && c <= 'z') {
            letras.push_back(c);
        }
    }
    int izq = 0;
    int der = letras.size() - 1;
    while (izq < der) {
        if (letras[izq] != letras[der]) {
            return false;
        }
        izq++;
        der--;
    }
    return true;
}
void mostrarResultado(string texto) {
    if (esPalindromo(texto)) {
        cout << "Verdadero" << endl;
    } else {
        cout << "Falso" << endl;
    }
}
int main() {
    string texto = "Ana lleva al oso la avellana.";
    mostrarResultado(texto);
    return 0;
}