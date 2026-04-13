// Materia: Programación I, Paralelo 4
// Autor: Julio Rodriguez Marca
// Fecha creación: 27/03/2026
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<double> generarVoltajes() {
    vector<double> voltajes(100);
    for(int i = 0; i < 100; i++) {
        voltajes[i] = 20.00 + (rand() / (double)RAND_MAX) * 200.00;
    }
    return voltajes;
}

vector<double> generarTemperaturas() {
    vector<double> temperaturas(50);
    for(int i = 0; i < 50; i++) {
        temperaturas[i] = 0.00 + (rand() / (double)RAND_MAX) * 100.00;
    }
    return temperaturas;
}

vector<char> generarCaracteres() {
    vector<char> caracteres(30);
    string alfanumericos = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 30; i++) {
        int idx = rand() % alfanumericos.size();
        caracteres[i] = alfanumericos[idx];
    }
    return caracteres;
}

vector<int> generarAnios() {
    vector<int> anios(100);
    for(int i = 0; i < 100; i++) {
        anios[i] = 1990 + rand() % 36;
    }
    return anios;
}

vector<double> generarVelocidades() {
    vector<double> velocidades(32);
    for(int i = 0; i < 32; i++) {
        velocidades[i] = 10.00 + (rand() / (double)RAND_MAX) * 290.00;
    }
    return velocidades;
}

vector<double> generarDistancias() {
    vector<double> distancias(1000);
    for(int i = 0; i < 1000; i++) {
        distancias[i] = 1.00 + (rand() / (double)RAND_MAX) * 999.00;
    }
    return distancias;
}

int main() {
    srand(time(NULL));
    
    vector<double> voltajes = generarVoltajes();
    cout << "a. Una lista de 100 voltajes de precision doble (entre 20.00 V y 220.00 V):" << endl;
    for(auto v : voltajes) cout << v << " ";
    cout << endl << endl;
    
    vector<double> temperaturas = generarTemperaturas();
    cout << "b. Una lista de 50 temperaturas de precision doble (entre 0.00 y 100.00):" << endl;
    for(auto t : temperaturas) cout << t << " ";
    cout << endl << endl;
    
    vector<char> caracteres = generarCaracteres();
    cout << "c. Una lista de 30 caracteres alfanumericos:" << endl;
    for(auto c : caracteres) cout << c << " ";
    cout << endl << endl;
    
    vector<int> anios = generarAnios();
    cout << "d. Una lista de 100 anios en numero entero (entre 1990 y 2025):" << endl;
    for(auto a : anios) cout << a << " ";
    cout << endl << endl;
    
    vector<double> velocidades = generarVelocidades();
    cout << "e. Una lista de 32 velocidades de precision doble (entre 10.00 y 300.00):" << endl;
    for(auto vel : velocidades) cout << vel << " ";
    cout << endl << endl;
    
    vector<double> distancias = generarDistancias();
    cout << "f. Una lista de 1000 distancias de precision doble (entre 1.00 y 1000.00):" << endl;
    for(auto d : distancias) cout << d << " ";
    cout << endl;
    
    return 0;
}