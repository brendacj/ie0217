/**
 * @file MaterialLectura.hpp
 * @brief Contiene la declaración de la clase MaterialLectura y los prototipos de sus métodos.
 * 
 * La clase `MaterialLectura` representa un material que puede ser leído, como libros, revistas,
 * periódicos, etc., y contiene los atributos y métodos necesarios para manejar dichos materiales.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef LECTURA_HPP
#define LECTURA_HPP

#include <iostream>
using namespace std;

/**
 * @brief Clase base que representa un material de lectura.
 * 
 * Esta clase es la base para representar cualquier material de lectura. Incluye atributos
 * comunes a todos los materiales de lectura como el título, autor, precio, estado, etc.
 */
class MaterialLectura {
    public:
        /**
         * @brief Constructor parametrizado de la clase MaterialLectura.
         * 
         * Inicializa un objeto de tipo `MaterialLectura` con los valores proporcionados.
         * 
         * @param titulo Título del material de lectura.
         * @param grupo Grupo o categoría al que pertenece el material.
         * @param material Tipo de material (por ejemplo, "Libro", "Revista").
         * @param autor Autor del material de lectura.
         * @param editorial Editorial que publicó el material.
         * @param genero Género del material (por ejemplo, "Ficción", "Ciencia").
         * @param estado Estado del material (por ejemplo, "Nuevo", "Usado").
         * @param cantiHojas Cantidad de hojas del material de lectura.
         * @param precio Precio del material de lectura.
         */
        MaterialLectura(
            string titulo,
            string grupo,
            string material,
            string autor,
            string editorial,
            string genero,
            string estado,
            int cantiHojas,
            double precio
        );

        /** @brief Título del material de lectura. */
        string titulo; ///< Título del material de lectura.
        
        /** @brief Grupo o categoría al que pertenece el material de lectura. */
        string grupo; ///< Grupo al que pertenece el material (por ejemplo, "Ficción").
        
        /** @brief Tipo de material (por ejemplo, "Libro", "Revista"). */
        string material; ///< Tipo de material de lectura.
        
        /** @brief Autor del material de lectura. */
        string autor; ///< Autor del material.
        
        /** @brief Editorial que publicó el material. */
        string editorial; ///< Editorial que publicó el material.
        
        /** @brief Género del material de lectura (por ejemplo, "Ficción"). */
        string genero; ///< Género del material (por ejemplo, "Ficción").
        
        /** @brief Estado del material (por ejemplo, "Nuevo", "Usado"). */
        string estado; ///< Estado del material.
        
        /** @brief Cantidad de hojas del material de lectura. */
        int cantiHojas; ///< Número de hojas del material.
        
        /** @brief Precio del material de lectura. */
        double precio; ///< Precio del material.

    /*protected:
        string grupo;
        string material;
        string autor;
        string editorial;
        string genero;
        string estado;
        int cantiHojas;
        double precio;*/

};

#endif
