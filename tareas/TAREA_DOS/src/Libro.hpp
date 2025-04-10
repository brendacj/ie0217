/**
 * @file libro.hpp
 * @brief Contiene la declaración de la clase Libro y los prototipos de sus métodos.
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef LIBRO_HPP
#define LIBRO_HPP
#include "MaterialLectura.hpp"

#include <iostream>
using namespace std;

/**
 * @class Libro
 * @brief Clase que representa un libro y contiene los métodos para manejar materiales de tipo libro.
 * 
 * Esta clase hereda públicamente de `MaterialLectura` y se encarga de gestionar la información 
 * relacionada con un libro, como su título, autor, precio, género y tamaño, entre otros.
 */
class Libro : public MaterialLectura {
    public:
         /**
         * @brief Constructor por defecto de la clase Libro.
         * 
         * Inicializa un objeto de tipo Libro con valores predeterminados.
         */
        Libro();

        /**
         * @brief Constructor de la clase Libro con parámetros.
         * 
         * Inicializa un libro con los valores proporcionados.
         * @param titulo Título del libro.
         * @param grupo Grupo al que pertenece el libro.
         * @param material Tipo de material (Libro en este caso).
         * @param autor Autor del libro.
         * @param editorial Editorial del libro.
         * @param genero Género del libro.
         * @param estado Estado del libro (nuevo, usado, etc.).
         * @param cantiHojas Cantidad de hojas del libro.
         * @param precio Precio del libro.
         */
        Libro(
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

        /**
         * @brief Calcula el tamaño del libro en función de la cantidad de hojas.
         * 
         * Clasifica el libro como "corto", "mediano" o "largo" dependiendo de la cantidad de hojas.
         * @param cantiHojas Cantidad de hojas del libro.
         * @return Tamaño del libro ("corto", "mediano" o "largo").
         */
        string tamanoLibro(int cantiHojas);

        /**
         * @brief Imprime los detalles del libro.
         * 
         * Muestra en la consola información relevante sobre el libro, como título, autor, precio, 
         * género, estado, tamaño, etc.
         * @param titulo Título del libro.
         * @param grupo Grupo al que pertenece el libro.
         * @param material Tipo de material (Libro en este caso).
         * @param autor Autor del libro.
         * @param editorial Editorial del libro.
         * @param genero Género del libro.
         * @param estado Estado del libro.
         * @param tamano Tamaño del libro (corto, mediano, largo).
         * @param precio Precio del libro.
         */
        void imprimirLibro(
            string titulo,
            string grupo,
            string material,
            string autor,
            string editorial,
            string genero,
            string estado,
            string tamano,
            double precio
        );

         /**
         * @brief Tamaño del libro.
         * 
         * Este campo almacena el tamaño del libro, que puede ser "corto", "mediano" o "largo".
         */
        string tamano;

};
#endif
