// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>

using namespace std;

void encontrarComunes(string listaA[], int tamA, string listaB[], int tamB);

int main()
{
    string listaA[] = {"Juan", "Maria", "Pedro", "Ana", "Luis"};
    string listaB[] = {"Ana", "Carlos", "Pedro", "Sofia", "Luis"};

    int tamA = 5;
    int tamB = 5;

    encontrarComunes(listaA, tamA, listaB, tamB);

    return 0;
}
void encontrarComunes(string listaA[], int tamA, string listaB[], int tamB)
{
    cout << "Clientes en comun: ";
    bool primero = true;

    for (int i = 0; i < tamA; i++)
    {
        for (int j = 0; j < tamB; j++)
        {
            if (listaA[i] == listaB[j])
            {
                if (!primero)
                    cout << ", ";
                cout << listaA[i];
                primero = false;
            }
        }
    }
    cout << endl;
}
