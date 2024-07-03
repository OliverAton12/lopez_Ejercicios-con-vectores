//fecha: 03/07/24
////Autor:Lopez Quiroz Wagner
//tema: Diseñe la función que calcula la sumatoria de N elementos enteros almacenados en un vector. También diseñe la función que calcule el promedio de esos elementos
 #include <iostream>
using namespace std;

int sum(const int* arr, int size);
double average(const int* arr, int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int total_sum = sum(arr, size);
    double avg = average(arr, size);

    cout << "La sumatoria de los elementos es: " << total_sum << endl;
    cout << "El promedio de los elementos es: " << avg << endl;

    return 0;
}

// Definición de la función sum
int sum(const int* arr, int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

// Definición de la función average
double average(const int* arr, int size) {
    if (size == 0) {
        cerr << "El array está vacío, no se puede calcular el promedio." << endl;
        return 0.0;
    }
    int total = sum(arr, size); // Reutilizamos la función sum.
    return static_cast<double>(total) / size;
}
