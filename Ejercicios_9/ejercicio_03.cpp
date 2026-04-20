// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 20/04/2026
// Número de ejercicio: 3
#include <iostream>

using namespace std;

const int FILAS = 3;
const int COLS = 4;

void mostrarMatriz(char m[FILAS][COLS])
{
    cout << "a) Mostrar matriz" << endl;
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void mostrarLibres(char m[FILAS][COLS])
{
    int filasLibres = 0, colsLibres = 0;

    for (int i = 0; i < FILAS; i++)
    {
        bool tieneZombie = false;
        for (int j = 0; j < COLS; j++)
        {
            if (m[i][j] == 'x')
                tieneZombie = true;
        }
        if (!tieneZombie)
            filasLibres++;
    }

    for (int j = 0; j < COLS; j++)
    {
        bool tieneZombie = false;
        for (int i = 0; i < FILAS; i++)
        {
            if (m[i][j] == 'x')
                tieneZombie = true;
        }
        if (!tieneZombie)
            colsLibres++;
    }

    cout << "b) filas libres: " << filasLibres << endl;
    cout << "   columnas libres: " << colsLibres << endl;
}

void coordenadasZombies(char m[FILAS][COLS])
{
    int vFila[FILAS * COLS], vCol[FILAS * COLS];
    int contador = 0;

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (m[i][j] == 'x')
            {
                vFila[contador] = i;
                vCol[contador] = j;
                contador++;
            }
        }
    }

    cout << "c) Posiciones en la matriz:" << endl;
    for (int i = 0; i < contador; i++)
    {
        cout << vFila[i] << " - " << vCol[i] << endl;
    }
}

int totalMuertos(char m[FILAS][COLS])
{
    int total = 0;
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (m[i][j] == 'x')
                total++;
        }
    }
    return total;
}

int main()
{
    char mapa[FILAS][COLS] =
        {
            {'x', 'o', 'x', 'o'},
            {'o', 'o', 'o', 'o'},
            {'o', 'o', 'x', 'o'}};

    // Llamada a las funciones
    mostrarMatriz(mapa);
    mostrarLibres(mapa);
    coordenadasZombies(mapa);

    int zombies = totalMuertos(mapa);
    cout << "d) total muertos vivientes: " << zombies << endl;

    int zombiesPrimeraCol = 0;
    for (int i = 0; i < FILAS; i++)
    {
        if (mapa[i][0] == 'x')
            zombiesPrimeraCol++;
    }

    cout << "e) ";
    if (zombiesPrimeraCol >= 2)
    {
        cout << "no es posible entrar al complejo!" << endl;
    }
    else
    {
        cout << "es posible entrar al complejo" << endl;
    }

    return 0;
}
