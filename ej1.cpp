#include <iostream>
using namespace std;

// Definición de la función para calcular el determinante de una matriz 2x2
int calcularDeterminante(int matriz[2][2]) {
    return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
}

int main() {
    // Declarar una matriz 2x2
    int matriz[2][2];

    // Leer los elementos de la matriz por pantalla
    cout << "Introduce los elementos de la matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular el determinante e imprimirlo
    int determinante = calcularDeterminante(matriz);
    cout << "El determinante de la matriz es: " << determinante << endl;

    return 0;
}
