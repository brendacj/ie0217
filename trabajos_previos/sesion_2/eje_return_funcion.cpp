# include <iostream>
using namespace std;

// Función para sumar dos numeros
int add (int a, int b){
    return (a + b); // Devuelve un valor
}

int main () {
    int sum;

    sum = add(100, 78); // Se guarda el valor regresado por add en sum
    cout << "100 + 78 = " << sum << endl;

    return 0;
}