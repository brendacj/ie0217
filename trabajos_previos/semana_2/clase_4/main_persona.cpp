#include <iostream>
#include "persona.hpp"
using namespace std;

int main(){
    // Instanciar
    Persona p("Juan", 25);

    // Aquí se debe acceder al nombre o edad con los métodos porque son privados
    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Edad: " << p.getEdad() << endl;

    p.setEdad(26);

    cout << "Nueva edad: " << p.getEdad() << endl;

    return 0;
}
