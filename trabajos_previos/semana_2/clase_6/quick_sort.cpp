#include <iostream>
using namespace std;

// Función voltear
void swap(int *a, int *b){
    // Acceder el valor por referencia
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Función de imprimir
void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}


int partition(int array[], int low, int high) {
    // Selecciona el pivote como el último elemento
    int pivot = array[high];

    // Índice del menor elemento
    int i = low - 1;

    // Recorre y coloca los elementos menores que el pivote a la izquierda
    for (int j = low; j < high; ++j) {
        if (array[j] < pivot) {
            ++i;
            swap(&array[i], &array[j]); 
        }
    }

    // Coloca el pivote en la posición correcta
    swap(&array[i + 1], &array[high]);

    // Retorna el índice donde se colocó el pivote
    return i + 1;
}

// Función recursiva de QuickSort
void quickSort(int array[], int low, int high) {
    if (low < high) {

         int pivotIndex = partition(array, low, high);

        // Ordena los arreglos antes y después del pivote
        quickSort(array, low, pivotIndex - 1 );
        quickSort(array,  pivotIndex + 1, high);
    }
}

//Manejo
int main(){
    // valores
    int data[] = {9, 5, 1, 4, 3};
    // tamaño
    int size = sizeof(data) / sizeof(data[0]);
    // Ordeno
    quickSort(data, 0, size - 1);
    // Imprime
    cout << "Sorted array in acseding Order:";
    printArray(data, size);

}