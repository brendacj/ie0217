/**
 * @file Pelicula.hpp
 * @brief Contiene la declaración de la clase Pelicula y los prototipos de sus métodos
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef PELICULA_HPP
#define PELICULA_HPP
#include "MaterialAudiovisual.hpp"

#include <iostream>
using namespace std;

class Pelicula : public MaterialAudiovisual {
    public:

        /**
     * @brief Constructor por defecto de la clase Pelicula.
     * 
     * Inicializa una película con valores predeterminados.
     */
        Pelicula();

        /**
     * @brief Constructor parametrizado de la clase Pelicula.
     *
     * @param titulo Título de la película.
     * @param grupo Grupo al que pertenece la película.
     * @param material Tipo de material (en este caso, "Pelicula").
     * @param autor Autor de la película.
     * @param genero Género de la película.
     * @param estado Estado de la película.
     * @param duracion Duración en minutos de la película.
     * @param precio Precio de la película.
     */
        Pelicula(
            string titulo,
            string grupo,
            string material,
            string autor,
            string genero,
            string estado,
            int duracion,
            double precio
        );
        
        /**
         * @brief Determina el tamaño de la película según la duración.
         *
         * @param duracion Duración en minutos de la película.
         * @return std::string Tamaño de la película ("corta", "mediana" o "larga").
         */
        string tamanoPelicula(int duracion);

        /**
         * @brief Imprime los detalles de la película.
         *
         * @param titulo Título de la película.
         * @param grupo Grupo al que pertenece la película.
         * @param material Tipo de material (en este caso, "Pelicula").
         * @param autor Autor de la película.
         * @param genero Género de la película.
         * @param estado Estado de la película.
         * @param tamano Tamaño de la película ("corta", "mediana" o "larga").
         * @param precio Precio de la película.
         */
        void imprimirPelicula(string titulo,
            string grupo,
            string material,
            string autor,
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