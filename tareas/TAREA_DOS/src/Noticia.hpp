/**
 * @file Noticia.hpp
 * @brief Contiene la declaración de la clase Noticia y los prototipos de sus métodos
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */

#ifndef NOTICIA_HPP
#define NOTICIA_HPP
#include "MaterialLectura.hpp"

#include <iostream>
using namespace std;
/**
 * @class Noticia
 * @brief Clase que contiene los métodos para manejar materiales de tipo noticia
 * hereda publicamente la clase MaterialLectura
 */
class Noticia : public MaterialLectura {
    public:

        /**
         * @brief Constructor por defecto de Noticia.
         */
        Noticia();

         /**
         * @brief Constructor de Noticia con parámetros.
         * @param titulo Título de la noticia.
         * @param grupo Grupo al que pertenece la noticia.
         * @param material Tipo de material (Noticia en este caso).
         * @param autor Autor de la noticia.
         * @param editorial Editorial de la noticia.
         * @param genero Género de la noticia.
         * @param estado Estado de la noticia.
         * @param cantiHojas Cantidad de hojas de la noticia.
         * @param precio Precio de la noticia.
         */
        Noticia(
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
         * @brief Calcula el tamaño de la noticia en función de la cantidad de hojas.
         * @param cantiHojas Cantidad de hojas de la noticia.
         * @return Tamaño de la noticia.
         */
        string tamanoNoticia(int cantiHojas);

        /**
         * @brief Imprime los detalles de la noticia.
         * @param titulo Título de la noticia.
         * @param grupo Grupo al que pertenece la noticia.
         * @param material Tipo de material (Noticia en este caso).
         * @param autor Autor de la noticia.
         * @param editorial Editorial de la noticia.
         * @param genero Género de la noticia.
         * @param estado Estado de la noticia.
         * @param tamano Tamaño de la noticia.
         * @param precio Precio de la noticia.
         */
        void imprimirNoticia(string titulo,
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