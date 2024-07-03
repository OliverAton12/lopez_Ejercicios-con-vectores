//fecha: 03/07/24
////Autor:Lopez Quiroz Wagner
//tema:Diseñe la función que imprime una barra vertical por cada elemento del vector. 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Función para imprimir barras verticales según los elementos del vector
void imprimirBarrasVerticales(int* vector, int tamano, char caracter) {
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < vector[i]; ++j) {
            cout << caracter;
        }
        cout << " (" << vector[i] << ")" << endl;
    }
}

int main() {
    const int tamano = 8;
    int X[tamano] = {10, 12, 6, 7, 15, 7, 9, 19};

    char caracter;
    cout << "Ingrese el carácter que desea usar para imprimir las barras: ";
    cin >> caracter;

    imprimirBarrasVerticales(X, tamano, caracter);

    return 0;
}
