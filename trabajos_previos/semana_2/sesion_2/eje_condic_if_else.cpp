# include <iostream>
using namespace std;

int main () {
    int number = 5;
    if (number > 0){
        // Como number es 5 y es mayor que 0 se cumple la condición
        cout << "Se cumple la condicion";
    }
    else{
        // Si number fuera menor o igual que 0 se ejecutaría el siguiente código
        cout << "Se ejecuta el codigo else";
    }
    // Alguno de los dos bloques se va a ejecutar

    return 0;
}