/**
 * @file libro.hpp
 * @brief Contiene la declaración de la clase Libro y los prototipos de sus métodos
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
 * @brief Clase que contiene los métodos para manejar materiales de tipo libro
 * hereda publicamente la clase MaterialLectura
 */

class Libro : public MaterialLectura {
    public:
         /**
         * @brief Constructor por defecto de Libro.
         */
        Libro();

        /**
         * @brief Constructor de Libro con parámetros.
         * @param titulo Título de la libro.
         * @param grupo Grupo al que pertenece la libro.
         * @param material Tipo de material (Libro en este caso).
         * @param autor Autor de la libro.
         * @param editorial Editorial de la libro.
         * @param genero Género de la libro.
         * @param estado Estado de la libro.
         * @param cantiHojas Cantidad de hojas de la libro.
         * @param precio Precio de la libro.
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
         * @param cantiHojas Cantidad de hojas del libro.
         * @return Tamaño del libro.
         */
        string tamanoLibro(int cantiHojas);

        /**
         * @brief Imprime los detalles del libro.
         * @param titulo Título del libro.
         * @param grupo Grupo al que pertenece el libro.
         * @param material Tipo de material (Libro en este caso).
         * @param autor Autor del libro.
         * @param editorial Editorial del libro.
         * @param genero Género del libro.
         * @param estado Estado del libro.
         * @param tamano Tamaño del libro.
         * @param precio Precio del libro.
         */
        void imprimirLibro(string titulo,
            string grupo,
            string material,
            string autor,
            string editorial,
            string genero,
            string estado,
            string tamano,
            double precio);

         /**
        * @brief Tamaño de la noticia.
        */
        string tamano;


};
#endif