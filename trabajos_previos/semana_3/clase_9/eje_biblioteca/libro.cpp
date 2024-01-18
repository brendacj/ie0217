#include <iostream>
#include "libro.hpp"

// Implementación de los métodos de la clase libro
Libro::Libro(
    // Inicializar variables
    const std::string& titulo, const std::string& autor
) : titulo(titulo), autor(autor) {}

// Imprimir los atributos
void Libro::mostrarInfo() const {
    std::cout << "Titulo: " << titulo << ", Autor: " << autor << std::endl;
}