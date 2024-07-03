//fecha: 03/07/24
////Autor:Lopez Quiroz Wagner
//tema:Diseñe la función que invierte el orden de los elementos de un vector.

#include <iostream>
using namespace std;

void invertirArreglo(int* arreglo, int tamano) {
    int inicio = 0;
    int fin = tamano - 1;
    while (inicio < fin) {
        // Intercambiar los elementos de inicio y fin
        int temp = arreglo[inicio];
        arreglo[inicio] = arreglo[fin];
        arreglo[fin] = temp;
        inicio++;
        fin--;
    }
}

int main() {
    const int tamano = 7;
    int arreglo[tamano] = {45, 2, 10, 15, 199, 107, 45};

    cout << "Arreglo original: ";
    for (int i = 0; i < tamano; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    // Invertir el arreglo
    invertirArreglo(arreglo, tamano);

    cout << "Arreglo invertido: ";
    for (int i = 0; i < tamano; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
