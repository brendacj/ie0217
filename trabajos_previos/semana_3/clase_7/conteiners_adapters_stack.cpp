#include <iostream>
// Se incluye la biblioteca stack
#include <stack>

using namespace std;

int main(){
    // Sintaxis: stack, tipo de los elementos, nombre
    stack<int> numbers;

    // Agregar los núnmeros a la pila
    numbers.push(1);
    numbers.push(100);
    numbers.push(10);

    cout << "Numbers are: ";

    //Mientras no esté vacía se imprime el elemento de arriba y se van eliminando con pop
    while(!numbers.empty()){
        cout << numbers.top() << ", ";

        numbers.pop();
    }

    return 0;
}