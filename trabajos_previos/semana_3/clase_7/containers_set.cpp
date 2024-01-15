#include <iostream>
// Se incluye la biblioteca set
#include <set>

using namespace std;

// El set ordena los números, no permite elementos repetidos
int main(){
    //Sintaxis: Set, tipo de los alementos, nombre, elementos que contiene
    set<int> numbers = {1, 100, 10, 70, 100};

    //Imprimir numbers
    cout << "Numbers are: ";

    // for para recorrer un elemento iterabe
    // Automaticamente se sabe el tipo de numbers, se recorre con num
    for(auto &num: numbers){
        cout << num << ", ";
    }

    return 0;

}
