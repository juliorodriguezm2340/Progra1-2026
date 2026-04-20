// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void mostrarDatosAlAzar(string nombres[], string apellidos[], int edades[]);
int main()
{
    srand(time(0));

    string vectorNombres[10] = {"Juan", "Maria", "Luis", "Ana", "Pedro", "Lucia", "Carlos", "Elena", "Diego", "Sofia"};
    string vectorApellidos[10] = {"Gomez", "Perez", "Lopez", "Garcia", "Rodriguez", "Sanches", "Torres", "Ramirez", "Flores", "Ruiz"};
    int vectorEdades[10] = {18, 22, 30, 45, 19, 50, 25, 33, 28, 41};

    int n;

    cout << "Ingrese cuantos nombres se escogera ";
    cin >> n;

    cout << "\n--- RESULTADOS ---" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". ";
        mostrarDatosAlAzar(vectorNombres, vectorApellidos, vectorEdades);
    }

    return 0;
}
void mostrarDatosAlAzar(string nombres[], string apellidos[], int edades[])
{
    int posNombre = rand() % 10;
    int posApellido = rand() % 10;
    int posEdad = rand() % 10;

    cout << nombres[posNombre] << " " << apellidos[posApellido] << " de " << edades[posEdad] << " años" << endl;
}