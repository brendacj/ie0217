# include <iostream>
using namespace std;

int main () {
    // Declaro e inicializo el operador y los números según lo que diguite el usuario
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    // Lógica del código
    // Según el operador ingresado se ejecuta la operación correspondiente
    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2; 
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2; 
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2; 
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2; 
            break;
        default:
        // Si no se cumple ninguna de las anteriores condiciones ha ocurrido un error
        // se imprime el mensaje de error
        cout << "Error! The operator is not correct";
        break;
    }


    return 0;
}