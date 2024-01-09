#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;
//Pongo la clase en este archivo
class Persona {
private:
    string nombre;
    int edad;

public:
    // Constructor público
    Persona(string nombre, int edad);
    // Se poenen también los prototipos de los métodos
    string getNombre();
    int getEdad();
    void setEdad(int edad);

};

#endif