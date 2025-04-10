/**
 * @file Noticia.hpp
 * @brief Contiene la declaración de la clase Noticia y los prototipos de sus métodos.
 * 
 * La clase `Noticia` hereda de la clase `MaterialLectura` y gestiona la información relacionada 
 * con una noticia, como el título, autor, editorial, género, estado, cantidad de hojas y precio.
 * Proporciona métodos para calcular el tamaño de la noticia en función de la cantidad de hojas
 * y para imprimir la información de la noticia.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */

#ifndef NOTICIA_HPP
#define NOTICIA_HPP
#include "MaterialLectura.hpp"

#include <iostream>
using namespace std;

/**
 * @class Noticia
 * @brief Clase que representa una noticia.
 * 
 * Esta clase hereda de `MaterialLectura` y contiene atributos y métodos específicos para manejar
 * materiales de tipo noticia. Permite calcular el tamaño de la noticia y mostrar su información.
 */
class Noticia : public MaterialLectura {
    public:

        /**
         * @brief Constructor por defecto de la clase Noticia.
         * 
         * Inicializa una noticia con valores predeterminados. El tamaño se establece como "desconocido".
         */
        Noticia();

         /**
         * @brief Constructor de la clase Noticia con parámetros.
         * 
         * Inicializa una noticia con los valores proporcionados para los atributos.
         * El tamaño de la noticia se calcula automáticamente en base a la cantidad de hojas.
         * 
         * @param titulo Título de la noticia.
         * @param grupo Grupo al que pertenece la noticia (por ejemplo, "Política", "Deportes").
         * @param material Tipo de material (en este caso siempre es "Noticia").
         * @param autor Autor de la noticia.
         * @param editorial Editorial de la noticia.
         * @param genero Género de la noticia (por ejemplo, "Ficción", "Actualidad").
         * @param estado Estado de la noticia (por ejemplo, "Nueva", "Antigua").
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
         * 
         * Este método clasifica el tamaño de la noticia en tres categorías: "corta", 
         * "mediana" o "larga", según el número de hojas proporcionado.
         * 
         * @param cantiHojas Cantidad de hojas de la noticia.
         * @return std::string El tamaño de la noticia ("corta", "mediana" o "larga").
         */
        string tamanoNoticia(int cantiHojas);

        /**
         * @brief Imprime los detalles de la noticia.
         * 
         * Este método muestra en consola la información completa de la noticia, 
         * incluyendo su título, grupo, material, autor, editorial, género, estado, 
         * tamaño y precio.
         * 
         * @param titulo Título de la noticia.
         * @param grupo Grupo al que pertenece la noticia.
         * @param material Tipo de material (Noticia en este caso).
         * @param autor Autor de la noticia.
         * @param editorial Editorial de la noticia.
         * @param genero Género de la noticia.
         * @param estado Estado de la noticia.
         * @param tamano Tamaño de la noticia (corta, mediana, larga).
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

        /** @brief Tamaño de la noticia (corta, mediana o larga). */
        string tamano;

};

#endif
