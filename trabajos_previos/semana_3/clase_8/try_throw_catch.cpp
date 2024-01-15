#include <iostream>
using namespace std;

int main (){
    // Declara las variables
    double numerator, denominator, divide;

    // Pide el numerador y denominador
    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    // Trata de dividir el númerador entre el denominador
    try {
        // Si el denominador es cero lanza una excepción
        if (denominator == 0)
            throw 0;

        divide = numerator / denominator;
        cout << numerator << "/ " << denominator << " = " << divide << endl;
    }
    // Atrapa la excepción (La recibe como un argumento) e imprime un mensaje de error
    catch (int num_exception){
        cout << "Error: Cannot divide by " << num_exception << endl;
    }
    
    return 0;
}