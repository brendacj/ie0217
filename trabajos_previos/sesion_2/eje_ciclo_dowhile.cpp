# include <iostream>
using namespace std;
int main () {
    int i = 1; // Inicializa i en 1
    // Se imprime el número mientras sea menor que 5
    do {
        // Esta parte se ejecuta por lo menos una vez siempre
        cout << i << " ";
        ++i;
    }
    while (i <= 5);

    return 0;
}