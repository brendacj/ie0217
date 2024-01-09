#include "persona.hpp"
using namespace std;
 
// Sintaxis para el constructor
Persona::Persona(string nombre, int edad) {
    // Hace referencia a la clase actual
    this->nombre = nombre;
    this->edad =edad;
}

//Sintaxis para otros métodos
string Persona::getNombre(){
    return nombre;
}

int Persona::getEdad(){
    return edad;
}

void Persona::setEdad(int edad){
    this->edad = edad;
}