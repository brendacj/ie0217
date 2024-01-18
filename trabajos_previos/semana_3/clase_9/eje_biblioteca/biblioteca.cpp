#include <iostream>
#include "biblioteca.hpp"

// Implementación de los métodos de la clase biblioteca

void Biblioteca::agregarLibro(
    const std::string& titulo,
    const std::string& autor
) {
    // Agregar un libro al vector
    catalogo.emplace_back(titulo, autor);
}

// Para cada elemento se llama el método de mostrar libro
void Biblioteca::mostrarCatalogo(){
    for (const auto& libro : catalogo){
        libro.mostrarInfo();
    }
}