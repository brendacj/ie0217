#include <iostream>
using namespace std;

int factorial(int);

int main () {
    // Esta parte solo es para declarar e inicializar las variables
    // además de mostrar el resultado
    int n, result;

    cout << "Enter a non-negative number: ";
    cin>> n;
    
    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}
// Función del factorial usando recursividad
int factorial(int n){
    if (n > 1){
        // Se llama la función recursivamente en (n-1) multiplicada por n mientras n > 1
        return n * factorial(n-1);
    }else{
        return 1;
    }
}