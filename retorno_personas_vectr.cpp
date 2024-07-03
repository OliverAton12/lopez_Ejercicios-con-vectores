//fecha: 03/07/24
////Autor:Lopez Quiroz Wagner
//tema:Diseñe la función que imprime una barra vertical por cada elemento del vector. 
#include <iostream>

using namespace std;

// Declarar la función time() externamente para evitar la inclusión de <ctime>
extern "C" unsigned long int time(unsigned long int* t);

// Función para obtener un nombre aleatorio del vector
string obtenerNombreAleatorio(string* vector, int tamano) {
    if (tamano == 0) {
        return "";  // Manejo de caso en que el vector está vacío
    }
    int indiceAleatorio = rand() % tamano;  // Generar un índice aleatorio
    return vector[indiceAleatorio];
}

int main() {
    const int tamano = 8;
    string nombres[tamano] = {"Ana", "Wagner", "Luis", "Marta", "Pedro", "Ale", "Juli", "Lucia"};

    // Inicializar la semilla para la generación de números aleatorios
    srand(static_cast<unsigned int>(time(nullptr)));

    string nombreAleatorio = obtenerNombreAleatorio(nombres, tamano);
    cout << "Nombre aleatorio: " << nombreAleatorio << endl;

    return 0;
}



