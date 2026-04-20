// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 19/04/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void contarRangos(int pixeles[], int n);

int main()
{
    srand(time(0));
    int N;

    cout << "Ingrese la cantidad de pixeles (N): ";
    cin >> N;

    int imagen[N];

    cout << "Pixeles generados: ";
    for (int i = 0; i < N; i++)
    {
        imagen[i] = rand() % 256;
        cout << imagen[i] << " ";
    }
    cout << endl;

    contarRangos(imagen, N);

    return 0;
}
void contarRangos(int pixeles[], int n)
{

    int rangos[26] = {0};

    for (int i = 0; i < n; i++)
    {
        int indiceRango = pixeles[i] / 10;
        rangos[indiceRango]++;
    }

    cout << "\n--- Conteo por Rangos ---" << endl;
    for (int i = 0; i < 26; i++)
    {
        int inicio = i * 10;
        int fin = inicio + 9;

        if (inicio > 255)
            break;
        if (fin > 255)
            fin = 255;

        cout << inicio << "-" << fin << ": " << rangos[i] << " pixeles" << endl;
    }
}
