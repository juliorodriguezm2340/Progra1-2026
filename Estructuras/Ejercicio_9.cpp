#include <iostream>
#include <iomanip>

using namespace std;

void procesarCalificaciones() {
    int n;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad de alumnos invalida.\n";
        return;
    }

    double sumaNF = 0.0;
    double maxNF = 0.0;
    double minNF = 0.0;

    for (int i = 0; i < n; i++) {
        double t1, t2, t3, t4, ef;
        
        cout << "\n--- Alumno " << (i + 1) << " ---\n";
        cout << "Ingrese T1: ";
        cin >> t1;
        cout << "Ingrese T2: ";
        cin >> t2;
        cout << "Ingrese T3: ";
        cin >> t3;
        cout << "Ingrese T4: ";
        cin >> t4;
        cout << "Ingrese Examen Final (EF): ";
        cin >> ef;

        double np = (t1 + t2 + t3 + t4) / 4.0;
        double nf = (0.7 * np) + (0.3 * ef);

        cout << fixed << setprecision(2);
        cout << "Nota de Presentacion (NP): " << np << "\n";
        cout << "Nota Final (NF): " << nf << "\n";

        sumaNF += nf;

        if (i == 0) {
            maxNF = nf;
            minNF = nf;
        } else {
            if (nf > maxNF) {
                maxNF = nf;
            }
            if (nf < minNF) {
                minNF = nf;
            }
        }
    }

    double promedio = sumaNF / n;

    cout << "\n=== ESTADISTICAS DEL CURSO ===\n";
    cout << "Promedio del curso: " << promedio << "\n";
    cout << "Nota maxima: " << maxNF << "\n";
    cout << "Nota minima: " << minNF << "\n";
    cout << "==============================\n";
}

int main() {
    procesarCalificaciones();
    return 0;
}