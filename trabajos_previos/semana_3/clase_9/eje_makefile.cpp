#include <iostream>
#include "eje_makefile.hpp"

// Implementación de los métodos de la clase Estudiantes

// Constructor de la clase estudiante
Estudiante::Estudiante(
    const std::string& nombre, int edad
) : nombre(nombre), edad(edad){}

// Imprimir los datos
void Estudiante::mostrarDatos(){
    std::cout << "Nombre: " << nombre;
    std::cout << ", Edad: " << edad << std::endl;
}