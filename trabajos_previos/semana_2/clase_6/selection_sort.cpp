#include <iostream>
using namespace std;

// Función de cambio
void swap(int *a, int *b){
    // Acceder el valor por referencia
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función de Imprimir
void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

// Recibe el arreglo y su tamaño
void selectionSort(int array[], int size){
    // Por cada elemento hago una iteración para ver cual es el más bajo
    for (int step = 0; step < size-1; step++){
        // El indice minimo va a ser el actual
        int min_idx = step;
        for (int i = step + 1; i < size; i++){
            // Si algún valor es menor que el del menor indice
            if(array[i] < array[min_idx])
                // Ese indice es el actual
                min_idx = i;
        }
        // Los cambia
        swap(&array[min_idx], &array[step]);
    }
}

//Manejo
int main(){
    // valores
    int data[] = {20, 12, 10, 15, 2};
    // tamaño
    int size = sizeof(data) / sizeof(data[0]);
    // Ordeno
    selectionSort(data, size);
    // Imprime
    cout << "Sorted array in Acseding Order:";
    printArray(data, size);
}