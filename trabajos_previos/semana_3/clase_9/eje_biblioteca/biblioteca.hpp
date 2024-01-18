#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
// Para el uso de vectores
#include <vector>
#include "libro.hpp"

// Clase biblioteca
class Biblioteca {
    public:
        // Prototipos de los métodos
        void agregarLibro(
            const std::string& titulo,
            const std::string& autor
        );
        void mostrarCatalogo();

    private:
        // Declaración del vector
        std::vector<Libro> catalogo;
};

#endif