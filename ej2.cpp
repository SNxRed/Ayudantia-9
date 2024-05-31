#include <iostream>
using namespace std;

int main() {
    int arreglo[10];
    int sumaPositivos = 0, sumaNegativos = 0;

    // Leer los elementos del arreglo
    cout << "Introduce los elementos del arreglo:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];

        // Sumar los números positivos y negativos mientras se leen
        if (arreglo[i] >= 0) {
            sumaPositivos += arreglo[i];
        } else {
            sumaNegativos += arreglo[i];
        }
    }

    // Imprimir la suma de los números positivos y negativos
    cout << "Suma de los números positivos: " << sumaPositivos << endl;
    cout << "Suma de los números negativos: " << sumaNegativos << endl;

    return 0;
}
