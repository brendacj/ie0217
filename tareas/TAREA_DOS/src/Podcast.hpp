/**
 * @file Podcast.hpp
 * @brief Contiene la declaración de la clase Podcast y los prototipos de sus métodos
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef PODCAST_HPP
#define PODCAST_HPP
#include "MaterialAudiovisual.hpp"

#include <iostream>
using namespace std;

/**
 * @brief Clase que representa un Podcast, derivada de MaterialAudiovisual.
 */
class Podcast : public MaterialAudiovisual {
    public:
         /**
         * @brief Constructor por defecto de la clase Podcast.
         */
        Podcast();

        /**
         * @brief Constructor parametrizado de la clase Podcast.
         *
         * @param titulo Título del Podcast.
         * @param grupo Grupo al que pertenece el Podcast.
         * @param material Tipo de material (en este caso, "Podcast").
         * @param autor Autor del Podcast.
         * @param genero Género del Podcast.
         * @param estado Estado del Podcast.
         * @param duracion Duración en minutos del Podcast.
         * @param precio Precio del Podcast.
         */
        Podcast(
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
         * @brief Determina el tamaño del Podcast según la duración.
         *
         * @param duracion Duración en minutos del Podcast.
         * @return std::string Tamaño del Podcast ("corto", "mediano" o "largo").
         */
        string tamanoPodcast(int duracion);

        /**
         * @brief Imprime los detalles del Podcast.
         *
         * @param titulo Título del Podcast.
         * @param grupo Grupo al que pertenece el Podcast.
         * @param material Tipo de material (en este caso, "Podcast").
         * @param autor Autor del Podcast.
         * @param genero Género del Podcast.
         * @param estado Estado del Podcast.
         * @param tamano Tamaño del Podcast ("corto", "mediano" o "largo").
         * @param precio Precio del Podcast.
         */
        void imprimirPodcast(string titulo,
            string grupo,
            string material,
            string autor,
            string genero,
            string estado,
            string tamano,
            double precio);

        /// Tamaño del Podcast ("corto", "mediano" o "largo").
        string tamano;


};

#endif