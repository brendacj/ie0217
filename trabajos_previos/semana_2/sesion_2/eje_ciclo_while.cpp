# include <iostream>
using namespace std;
int main () {
    int i = 1; // Inicializa i en 1
    // Se imprime el número mientras sea menor que 5
    while (i <= 5){
        cout << i << " ";
        // Se aumenta en 1 el número con cada iteración
        ++ i;
    }
    return 0;
}