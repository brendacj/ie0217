#include <iostream>
using namespace std;
int main () {
    // Una variable int
    int var = 5;
    // Una variable int puntero 
    int* pointVar;

    // Inicializo pointVar con la dirección de var usando &
    pointVar = &var;

    // Contenido de la variable Var
    cout << "var = " << var << endl;
    
    // Dirección de la variable var
    cout << "Address of var (&var) = " << &var << endl
         << endl;
    // Contenido de la variable pointVar
    cout << "pointVar = " << pointVar << endl;

    // El contenido de lo que está en la direción de memoria
    cout << "Content of the adress pointed to by pointVar (*pointVar) = " << *pointVar << endl;

    cout << "Changing value of var to 7: " << endl;

    var = 7;

    // Contenido de la variable Var
    cout << "var = " << var << endl;

    // El contenido de lo que está en la direción de memoria
    cout << "*pointVar = " << *pointVar << endl;

    // Cambia le valor de *pointVar
    *pointVar = 16;

    // Contenido de la variable Var
    cout << "var = " << var << endl;
    // El contenido de lo que está en la direción de memoria
    cout << "*pointVar = " << *pointVar << endl;


    return 0;
}