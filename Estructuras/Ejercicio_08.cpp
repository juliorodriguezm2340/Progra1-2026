#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct Atleta {
    string nombre;
    string departamento;
    string deporte;
    int medallas;
};

void mostrarDeportes() {
    cout << "--- Deportes Disponibles ---\n";
    cout << "1. Tiro con arco\n";
    cout << "2. Atletismo\n";
    cout << "3. Boxeo\n";
    cout << "4. Ciclismo\n";
    cout << "5. Natacion\n";
    cout << "6. Esgrima\n";
}

void registrarAtleta(vector<Atleta>& atletas) {
    Atleta nuevo;
    cout << "\nNombre del atleta: ";
    cin.ignore();
    getline(cin, nuevo.nombre);
    
    cout << "Departamento al que representa: ";
    getline(cin, nuevo.departamento);
    
    mostrarDeportes();
    cout << "Escriba el nombre del deporte que practica: ";
    getline(cin, nuevo.deporte);
    
    nuevo.medallas = 0;
    atletas.push_back(nuevo);
    cout << "Atleta registrado exitosamente.\n";
}

void registrarMedallas(vector<Atleta>& atletas) {
    if (atletas.empty()) {
        cout << "\nNo hay atletas registrados aun.\n";
        return;
    }

    string nombreBuscado;
    int cantidad;
    bool encontrado = false;

    cout << "\nNombre del atleta: ";
    cin.ignore();
    getline(cin, nombreBuscado);
    
    for (size_t i = 0; i < atletas.size(); i++) {
        if (atletas[i].nombre == nombreBuscado) {
            cout << "Cuantas medallas gano?: ";
            cin >> cantidad;
            atletas[i].medallas += cantidad;
            encontrado = true;
            cout << "Medallas registradas exitosamente.\n";
            break;
        }
    }
    
    if (!encontrado) {
        cout << "Atleta no encontrado.\n";
    }
}

void mostrarMedallero(const vector<Atleta>& atletas) {
    if (atletas.empty()) {
        cout << "\nNo hay datos para mostrar el medallero.\n";
        return;
    }

    map<string, int> medallero;
    
    for (size_t i = 0; i < atletas.size(); i++) {
        medallero[atletas[i].departamento] += atletas[i].medallas;
    }
    
    cout << "\n=== MEDALLERO FINAL POR DEPARTAMENTO ===\n";
    for (map<string, int>::const_iterator it = medallero.begin(); it != medallero.end(); ++it) {
        cout << "Departamento: " << it->first << " | Total Medallas: " << it->second << "\n";
    }
    cout << "========================================\n";
}

void ejecutarMenu() {
    vector<Atleta> atletas;
    int opcion = 0;
    
    while (opcion != 4) {
        cout << "\n--- OLIMPIADA NACIONAL ---\n";
        cout << "1. Registrar Atleta\n";
        cout << "2. Registrar Medallas de Atleta\n";
        cout << "3. Mostrar Medallero por Departamento\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        if (opcion == 1) {
            registrarAtleta(atletas);
        } else if (opcion == 2) {
            registrarMedallas(atletas);
        } else if (opcion == 3) {
            mostrarMedallero(atletas);
        } else if (opcion != 4) {
            cout << "Opcion invalida.\n";
        }
    }
}

int main() {
    ejecutarMenu();
    return 0;
}