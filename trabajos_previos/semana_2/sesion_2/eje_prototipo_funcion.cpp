# include <iostream>
using namespace std;

// Pongo el prototipo de la función para que el programa identifique
// Que está definida más adelante
int add(int, int);

int main () {
    int sum;

    sum = add(100, 78); // Se guarda el valor regresado por add en sum
    cout << "100 + 78 = " << sum << endl;

    return 0;
}

// Función para sumar dos numeros
int add (int a, int b){
    return (a + b); // Devuelve un valor
}