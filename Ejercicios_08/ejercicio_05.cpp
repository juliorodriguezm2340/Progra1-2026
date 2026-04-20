// Materia: Programación I, Paralelo 4
// Autor: Julio Rodrigiuez Marca.
// Fecha creación: 19/04/2026
#include <iostream>
#include <string>

using namespace std;
void validarCorreo(string email);
int main()
{
    string correo;

    cout << "Ingrese su correo electronico: ";
    cin >> correo;

    validarCorreo(correo);

    return 0;
}
void validarCorreo(string email)
{
    int arrobas = 0;
    int posicionArroba = -1;
    bool tienePuntoDespues = false;

    for (int i = 0; i < email.length(); i++)
    {
        if (email[i] == '@')
        {
            arrobas++;
            posicionArroba = i;
        }
    }

    if (arrobas == 1)
    {
        for (int j = posicionArroba + 1; j < email.length(); j++)
        {
            if (email[j] == '.')
            {
                tienePuntoDespues = true;
                break;
            }
        }
    }

    if (arrobas == 1 && tienePuntoDespues)
    {
        cout << "Correo electronico valido" << endl;
    }
    else
    {
        cout << "Correo electronico invalido" << endl;
    }
}
