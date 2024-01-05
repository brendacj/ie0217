#include <iostream>
using namespace std;

int main () {
    // Declaración de variables
    float num, average, sum = 0.0;
    int i, n;
    // Inicializo el numero maximo de entradas
    cout << "Maximum number of inputs: ";
    cin >> n;
    // Ciclo for hasta n
    for (i = 1; i <= n; ++ i){
        cout << "Enter n: " << i << ": ";
        cin >> num;
        // Si se cumple la condición se hace un goto para ir a calcular el promedio
        if (num < 0.0){

            goto jump;
        }
        sum += num;
    }
// Cuando termine el ciclo si no se cumplió la condición, se ejecuta el jump de todos modos 
jump:
    average = sum / (i-1);
    cout << "\nAverage = " << average;
    return 0;

}

