
#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>

// Clase libro
class Libro {
    public:
        // Cosntructor prototipo
        Libro(const std::string& titulo, const std::string& autor);
        // Mostrar info prototipo
        void mostrarInfo() const;

    private:
        // Atributos
        std::string titulo;
        std::string autor;
};

#endif