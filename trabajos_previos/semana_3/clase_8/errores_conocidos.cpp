#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
    int numerador, denominador, resultado;

    // Pide el numerador
    cout << "Enter numerator: ";
    cin >> numerador;

    // Pide el denominador
    cout << "Enter denominador: ";
    cin >> denominador;

    // Parte que podría tener errores
    try {
        // Si el denominador es cero levanta una excepción
        if (denominador == 0){
            throw runtime_error("Error: el denominador no puede ser cero");
        }

        // Calcula y muestra el resultado
        resultado = numerador/denominador;
        cout <<"El resultado es: "<< resultado << endl;
        
    } catch(const exception& e){ // Sintaxis para representar errores estandar el de C++
        cerr << e.what() << endl; // imprimir error: cerr. que es el error; e.what()
    }

    return 0;

    // Si no se ponen las excepciones es una mala práctica de programación
}