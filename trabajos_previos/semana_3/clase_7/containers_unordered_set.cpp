#include <iostream>
// Se incluye la biblioteca unordered_set
#include <unordered_set>

using namespace std;
// No tiene un orden especifico (aletorio), no permite repetidos
int main(){
    //Sintaxis: Set, tipo de los alementos, nombre, elementos que contiene
    unordered_set<int> numbers = {1, 100, 10, 70, 100};

    //Imprimir numbers
    cout << "Numbers are: ";

    // for para recorrer un elemento iterabe
    // Automaticamente se sabe el tipo de numbers, se recorre con num
    for(auto &num: numbers){
        cout << num << ", ";
    }

    return 0;

}