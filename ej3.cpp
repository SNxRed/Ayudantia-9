#include <iostream>
using namespace std;

int main() {
    const int numDias = 30;
    double temperaturas[numDias];

    // Ingresar las temperaturas de los últimos 30 días
    cout << "Ingresa las temperaturas de los últimos 30 días:" << endl;
    for (int i = 0; i < numDias; ++i) {
        cout << "Día " << i + 1 << ": ";
        cin >> temperaturas[i];
    }

    // Calcular la media de temperatura
    double suma = 0;
    for (int i = 0; i < numDias; ++i) {
        suma += temperaturas[i];
    }
    double media = suma / numDias;

    // Mostrar la media de temperatura
    cout << "La media de temperatura de los últimos 30 días es: " << media << " grados Celsius." << endl;

    // Identificar los días con temperatura mayor a 30 grados
    cout << "Días con temperatura mayor a 30 grados Celsius:" << endl;
    for (int i = 0; i < numDias; ++i) {
        if (temperaturas[i] > 30) {
            cout << "Día " << i + 1 << ": " << temperaturas[i] << " grados Celsius." << endl;
        }
    }

    // Ordenar los días con el algoritmo de ordenamiento burbuja
    for (int i = 0; i < numDias - 1; ++i) {
        for (int j = 0; j < numDias - i - 1; ++j) {
            if (temperaturas[j] > temperaturas[j + 1]) {
                // Intercambiar los elementos
                double temp = temperaturas[j];
                temperaturas[j] = temperaturas[j + 1];
                temperaturas[j + 1] = temp;
            }
        }
    }

    // Mostrar los días ordenados
    cout << "Los 10 días con la temperatura más alta son:" << endl;
    for (int i = numDias - 1; i >= numDias - 10; --i) {
        cout << "Día " << numDias - i << ": " << temperaturas[i] << " grados Celsius." << endl;
    }

    return 0;
}
