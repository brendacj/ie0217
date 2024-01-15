#include <iostream>
// Incluyo la biblioteca vector
#include <vector>

using namespace std;

int main(){
    // Sintaxis: vector de tipo int llamado numbers con los siguientes elementos
    vector<int> numbers = {1, 100, 10, 70, 100};

    // Imprimir el vector
    cout << "Numbers are: ";
    // for para recorrer un elemento iterabe
    // Automaticamente se sabe el tipo de numbers, se recorre con num
    for(auto &num: numbers){
        cout << num << ", ";
    }

    return 0;
}

