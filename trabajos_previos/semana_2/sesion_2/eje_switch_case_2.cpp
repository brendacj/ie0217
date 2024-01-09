# include <iostream>
using namespace std;

int main () {
    // Declaro e inicializo el operador y los números según lo que diguite el usuario
    int var1 = 1;
    //int var2 = 2;
    //int var3 = 2;

    switch (var1) {
        case 1:
        // Como var1 es igual a 1, se ejecuta este bloque de código
            cout << "Case 1!\n";
            break;
        case 2:
        case 3:
        // Si var1 fuera igual a 2 o 3 se ejecutaría este
            cout << "Final case!\n";
            break;

        default:
        // Si no es igual a ninguno de los anteriore se ejecuta este (última instancia)
            cout << "Default case!\n";
            break;
    }

    return 0;
}