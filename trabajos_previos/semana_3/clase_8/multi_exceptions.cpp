#include <iostream>
using namespace std;

int main() {
    // Declarar denominador, numerador, y un arreglo de 4 elementos
    double numerador, denominador, arr[4] = {0.0, 0.0, 0.0, 0.0};
    // Indice
    int index;
    
    // Pide el indice
    cout << "Enter array index: ";
    cin >> index;

    // Parte del código que podría tener un error
    try{
        // Si el indice está fuera del rango del arreglo, levanta una excepción
        if(index >= 4)
            throw "Error: Array out of bounds!";
        
        // Pide el numerador
        cout << "Enter numerator: ";
        cin >> numerador;

        // Pide el denominador
        cout << "Enter denominador: ";
        cin >> denominador;

        // Si el denominador es cero lanza una excepción
        if (denominador == 0)
            throw 0;

        // La división de guarda en el indice del arreglo especificado
        arr[index] = numerador/denominador;
        cout << arr[index] << endl;
    }
    // Se atarpan las excepciones según el tipo que esperan

    // Atrapa la excepción de fuera de rango
    catch (const char* msg){
        cout << msg << endl;
    }

    // Atrapa la excepción de dividir entre cero y muestra un mensaje
    catch(int num){
        cout << "Error: Cnnot divide by "<< num << endl;
    }

    // Atrapa los errores que no fueron planificados con throw
    catch (...){
        cout << "Unexpected exception" << endl;
    }

    return 0;
}