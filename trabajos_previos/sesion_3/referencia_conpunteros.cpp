#include <iostream>
using namespace std;

// Función para voltear los valores de las variables mediante sus punteros
void swap(int* n1, int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main () {
    // Inicializa la variables
    int a = 1, b =2;

    // Imprime antes del cambio
    cout << "Before swapping " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "\nDirecciones" << endl;
    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;

    // Llama la función con las direcciones
    swap(&a,&b);

    // Imprime después del cambio
    cout << "\nAfter swapping " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}