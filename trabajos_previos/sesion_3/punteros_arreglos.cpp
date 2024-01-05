#include <iostream>
using namespace std;

int main () {
    // Arreglo flotante
    float arr[3];

    // Variable flotante puntero
    float *ptr;

    cout << "displaying addresses using arrays: " << endl;

    // Ir imprimiento en pantalla las direcciones mediante arreglos
    for (int i = 0; i <3; ++i){
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }
    // ptr igual al arreglo
    ptr = arr;

    cout << "\nDisplaying address using pointers: " << endl;
    // Ir imprimiento en pantalla las direcciones mediante punteros
    for (int i = 0; i < 3; ++i) {
        cout << "ptr + " << i << " = " << ptr + i << endl;
    }

    return 0;
}