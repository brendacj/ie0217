#include <iostream>
// Se incluye la biblioteca list
#include <list>

using namespace std;

int main(){

    // Lista llamada nums
    list<int> nums {1, 2, 3, 4, 5};

    // Crea un iterador de lista de enteros desde el principio de nums
    list<int>::iterator itr = nums.begin();

    cout << "Moving forward: " << endl;

    // Mientras no llegue al final
    while (itr != nums.end()){
        // Se imprimen los valores del iterador
        cout << *itr << ", ";

        // Aumenta el iterador (Se mueve hacia adelante)
        itr++;
    }

    cout << endl << "Moving backward: " << endl;

    // Mientras no llegue al principio
    while (itr != nums.begin()){
        // Se imprimen los valores
        if (itr != nums.end()){
            cout << *itr << ", ";
        }

        // Se disminuye el iterador (Va hacía atrás)
        itr --;
    }
    cout << *itr << endl;

    return 0;
}