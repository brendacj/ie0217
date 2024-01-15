#include <iostream>
// Se incluye la biblioteca vector
#include <vector>

using namespace std;

int main(){
    // Crear un vector con la sintaxis vista
    vector <string> lenguages = {"Python", "C++", "Java"};

    // Crea un iterador a un vector de strings
    vector <string>::iterator itr;

    // Itera por los elementos del vector hasta que itr esté en .end()
    for (itr = lenguages.begin(); itr != lenguages.end(); itr++){
        cout << *itr << ", ";
    }

    return 0;

}