#include <iostream>
using namespace std;

int main() {
    int arreglo[10] = {25, 10, 36, 18, 42, 7, 49, 30, 15, 5};

    int mayor = arreglo[0];
    int menor = arreglo[0];

    // Encontrar el número mayor y el número menor
    for (int i = 1; i < 10; ++i) {
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
        if (arreglo[i] < menor) {
            menor = arreglo[i];
        }
    }

    // Imprimir el número mayor y el número menor
    cout << "El número mayor en el arreglo es: " << mayor << endl;
    cout << "El número menor en el arreglo es: " << menor << endl;

    return 0;
}
