# include <iostream>
using namespace std;

// Variable global, definida fuera del main
int g;

int main () {
    // Variables locales declaradas dentro del main
    int a, b;
    
    // Inicialización de las variables, darles valores
    a = 10;
    b = 20;
    g = a + b;

    // Imprimo el valor de g
    cout << g;

    return 0;
}