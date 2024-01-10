#include <iostream>
using namespace std;

// Recibe el areglo y el tamaño
void bubbleSort(int array[], int size){
    // loop de 0 al tamaño
    for (int step = 0; step < (size-1); ++step){

        // Variable para comprobar si se han volteado
        int swapped = 0;

        // loop de 0 hasta el tamaño menos la iteración
        for (int i = 0; i < size - step - 1; ++i){

            // Si el elemento es mayor al elemento de al lado
            if(array[i] > array[i + 1]){

                // Se intercambian
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                //Fue intercambiada
                swapped = 1;
            }
        }

        // Si no se intercambió el arreglo ya está ordenado
        //Sale del ciclo
        if (swapped == 0)
            break;
    }
}

// Función para imprimir
void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << " " << array[i];
    }
    cout << "\n";
}

// Manejo
int main(){
    // Haer un arreglo
    int data[] = {-2, 45, 0, 11, -9};

    // Tamaño del arreglo (Un 5)
    int size = sizeof(data) / sizeof(data[0]);

    // Llama la función para ordenar
    bubbleSort(data, size);

    //Imprime
    cout << "Sorted Array in Ascending Order: \n";
    printArray(data, size);
}