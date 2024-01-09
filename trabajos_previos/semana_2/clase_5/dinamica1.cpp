#include <iostream>
using namespace std;

int main(){

    // Declara las variables puntero
    int* pointInt;
    float* pointFloat;

    // Inicializa las vairbalesw en una posición de memeroia con new
    pointInt = new int;
    pointFloat = new float;

    // Le asigna valores a los espacios de memroria
    *pointInt = 45;
    *pointFloat = 45.45f;

    // Imprime
    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    //Libera la memeoria
    delete pointInt;
    delete pointFloat;

    return 0;
}