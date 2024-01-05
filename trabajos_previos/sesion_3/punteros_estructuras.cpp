#include <iostream>
using namespace std;

// Uso de estructuras para encapsular las variables
struct Distance {
    int feet;
    float inch;

};

int main () {
    // Definición de variables
    Distance *ptr, d;
    // inicialización de ptr con la dirección de d
    ptr = &d;
    
    cout << "Enter feet: ";
    // Inicializar pies y pulgadas
    // En esta parte se podría usar -> en lugar de los parentesis y punto, son equivalentes
    cin>> (*ptr).feet;
    cout << "Enter inch: ";
    // En esta parte se podría usar -> en lugar de los parentesis y punto, son equivalentes
    cin >> (*ptr).inch;
    // Mostrar la información
    cout << "Display information: " << endl;
    // En esta parte se podría usar -> en lugar de los parentesis y punto, son equivalentes
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";

    return 0;
}