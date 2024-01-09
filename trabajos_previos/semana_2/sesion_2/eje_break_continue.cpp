# include <iostream>
using namespace std;
int main () {
    int i = 1; // Inicializa i en 1
    // Se imprime el número mientras sea menor que 5
    while (i <= 5){
    /* Se define la condición de que si i es igual a 3 el ciclo se quiebre
    por lo que cuando llegue a 3 se va a terminar la ejecución, de manera similar
    se pod´ria hacer con un continue, y en los ciclos for o do while*/
        if (i == 3) {
            break;
        }
        cout << i << " ";
        // Se aumenta en 1 el número con cada iteración
        ++ i;
    }
    return 0;
}