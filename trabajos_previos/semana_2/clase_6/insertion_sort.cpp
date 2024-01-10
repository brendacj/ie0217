#include <iostream>
using namespace std;

// Función de imprimir
void printArray(int array[], int size){
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

// inserción, recibe el areglo y el tamaño
void insertionSort(int array[], int size){
    // Dede uno a tamaño
    for (int step = 1; step < size; step++){
        // Valor actual
        int key = array[step];

        int j = step - 1;
        // Mientras que la llave sea menor al elemento y no esté en el borde       
        while (key < array[j] && j >= 0){
            // El proximo elemento es igual al actual
            array[j + 1] = array[j];
            // Va hacia atrás
            --j;
        }
        // Actualizo el j
        array[j + 1] = key;
    }
}

//Manejo
int main(){
    // valores
    int data[] = {9, 5, 1, 4, 3};
    // tamaño
    int size = sizeof(data) / sizeof(data[0]);
    // Ordeno
    insertionSort(data, size);
    // Imprime
    cout << "Sorted array in acseding Order:";
    printArray(data, size);
}