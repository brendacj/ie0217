# include <iostream>
using namespace std;

// prototipo con valores por defecto
void temp (int = 10, float = 8.8);

int main () {
    temp(6, 5.5);
    // Podría llamar la función con un solo parametro o sin ninguno,
    // en tal caso se establecerían por valores por defecto, pero no puedo pretender dar
    // el valor del segundo parametro primero o viceversa, debe llevar un orden

    return 0;
}

// Función
void temp (int i, float f){
    cout << "El numero int es: " << i << endl;
    cout << "El numero float es: " << f;

}