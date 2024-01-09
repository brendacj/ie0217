# include <iostream>
using namespace std;
// Creo una función para mostrar numeros que recibe como parametros
void displayNum (int n1, float n2) {
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}

int main () {

    // Declaro e inicializo las variables
    int num1 = 5;
    double num2 = 5.5;
    // Aquí llamo la función con num1 y num2 como parametros
    displayNum(num1, num2);
    
    return 0;
}