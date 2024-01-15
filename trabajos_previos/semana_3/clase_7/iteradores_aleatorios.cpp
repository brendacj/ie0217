#include <iostream>
// Se incluye la biblioteca list
#include <vector>

using namespace std;

int main(){
    // Crear un vector de nombre vec
    vector<int> vec{1, 2, 3, 4};

    // Crear un interador de vector de int en el principio de vec
    vector<int>::iterator itr_first = vec.begin();

     // Crear un interador de vector de int en el final de vec
    vector<int>::iterator itr_last = vec.end() - 1;

    // Acceder con el iterador por referencia
    cout << "First Element: " << *itr_first << endl;

    // Acceder con el iterador por parentesis cuadrados
    cout << "Second Element: " << itr_first[1] << endl;

    // Acceder a los elementos
    cout << "Second Last Element: " << *(itr_last - 1) << endl;
    cout << "Last Element: " << *(itr_last) << endl;

    return 0;
}