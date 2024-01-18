#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

// Prototipos de la clase estudiante 
class Estudiante {
    public:
        Estudiante(const std::string& nombre, int edad);
        void mostrarDatos();

    private:
        // Atributos
        std::string nombre;
        int edad;
        int edad2;
};


#endif