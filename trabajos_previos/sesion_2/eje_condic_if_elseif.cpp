# include <iostream>
using namespace std;

int main () {
    int number = 5;
    if (number > 0){
        // Como number es 5 y es mayor que 0 se cumple la condición
        cout << "Se cumple la condicion";
    }
    else if (number == 0){
        // Si number fuera igual a 0 se ejecutaría el siguiente código
        cout << "Se ejecuta el codigo else";
    }
    else {
        // Si no se cumplen ninguno de los bloques anteriores (Es decir, que
        // el número sea menor que 0) se ejecuta el siguiente bloque
        cout << "No se ejecuto ninguno de los codigos anteriores";
    }

    return 0;
}