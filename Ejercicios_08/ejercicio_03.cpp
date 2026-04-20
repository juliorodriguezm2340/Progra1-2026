// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 19/04/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void calcularEstadisticas(int notas[], int n);
int main()
{
    srand(time(0));
    int n;

    cout << "Ingrese la cantidad de calificaciones (N): ";
    cin >> n;

    int calificaciones[n];

    cout << "Calificaciones generadas: ";
    for (int i = 0; i < n; i++)
    {
        calificaciones[i] = rand() % 101;
        cout << calificaciones[i] << " ";
    }
    cout << endl;

    calcularEstadisticas(calificaciones, n);

    return 0;
}
void calcularEstadisticas(int notas[], int n)
{
    float repro = 0, regu = 0, buen = 0, exce = 0;

    for (int i = 0; i < n; i++)
    {
        if (notas[i] <= 59)
            repro++;
        else if (notas[i] <= 79)
            regu++;
        else if (notas[i] <= 89)
            buen++;
        else
            exce++;
    }

    cout << "\n--- Resultados ---" << endl;
    cout << "Reprobados: " << (repro / n) * 100 << "%" << endl;
    cout << "Regulares: " << (regu / n) * 100 << "%" << endl;
    cout << "Buenos: " << (buen / n) * 100 << "%" << endl;
    cout << "Excelentes: " << (exce / n) * 100 << "%" << endl;
}