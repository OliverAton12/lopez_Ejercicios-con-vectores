//fecha: 03/07/24
////Autor:Lopez Quiroz Wagner
//tema: Función que determina si un valor está en el vector e imprime un mensaje.
#include <iostream>

// Función para determinar si un entero está en el vector
void existeEnteroEnVector(int* vector, int tamano, int enteroBuscado) {
    for (int i = 0; i < tamano; ++i) {
        if (vector[i] == enteroBuscado) {
            std::cout << "El entero " << enteroBuscado << " existe en el vector." << std::endl;
            return; // Se encontró el entero, se termina la función
        }
    }
    std::cout << "El entero " << enteroBuscado << " no existe en el vector." << std::endl;
}

int main() {
    const int tamano = 5;
    int miVector[tamano] = {2, 4, 6, 8, 10};
    int entero = 6;

    existeEnteroEnVector(miVector, tamano, entero);

    return 0;
}



