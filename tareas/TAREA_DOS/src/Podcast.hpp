/**
 * @file Podcast.hpp
 * @brief Contiene la declaración de la clase Podcast y los prototipos de sus métodos.
 * 
 * La clase `Podcast` hereda de `MaterialAudiovisual` y gestiona la información de un podcast,
 * como el título, autor, género, estado, duración y precio. Esta clase proporciona métodos para 
 * calcular su tamaño según la duración en minutos y para mostrar la información completa del podcast.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef PODCAST_HPP
#define PODCAST_HPP
#include "MaterialAudiovisual.hpp"

#include <iostream>
using namespace std;

/**
 * @class Podcast
 * @brief Clase que representa un podcast, derivada de `MaterialAudiovisual`.
 * 
 * Esta clase hereda de `MaterialAudiovisual` y contiene atributos y métodos específicos 
 * para manejar un podcast. Permite determinar su tamaño en función de la duración en minutos 
 * y mostrar todos los detalles del podcast.
 */
class Podcast : public MaterialAudiovisual {
    public:

         /**
         * @brief Constructor por defecto de la clase Podcast.
         * 
         * Inicializa un podcast con valores predeterminados. El tamaño se establece como "desconocido".
         */
        Podcast();

        /**
         * @brief Constructor parametrizado de la clase Podcast.
         * 
         * Inicializa un podcast con los valores proporcionados para los atributos. 
         * El tamaño del podcast se determina automáticamente en función de la duración.
         * 
         * @param titulo Título del podcast.
         * @param grupo Grupo o categoría al que pertenece el podcast (por ejemplo, "Tecnología").
         * @param material Tipo de material (en este caso, siempre es "Podcast").
         * @param autor Autor o creador del podcast.
         * @param genero Género del podcast (por ejemplo, "Cultura", "Historia").
         * @param estado Estado del podcast (por ejemplo, "Nuevo", "Disponible").
         * @param duracion Duración del podcast en minutos.
         * @param precio Precio del podcast.
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
         * @brief Determina el tamaño del podcast según la duración.
         * 
         * Este método clasifica el tamaño del podcast en tres categorías: "corto", 
         * "mediano" o "largo", dependiendo de la duración del podcast en minutos.
         * 
         * - "Corto": Menos de 30 minutos.
         * - "Mediano": Entre 30 y 89 minutos.
         * - "Largo": Más de 90 minutos.
         * 
         * @param duracion Duración del podcast en minutos.
         * @return std::string Tamaño del podcast ("corto", "mediano" o "largo").
         */
        string tamanoPodcast(int duracion);

        /**
         * @brief Imprime los detalles del podcast.
         * 
         * Este método imprime la información completa del podcast, incluyendo el título, 
         * grupo, material, autor, género, estado, tamaño y precio. 
         * 
         * @param titulo Título del podcast.
         * @param grupo Grupo o categoría del podcast.
         * @param material Tipo de material (Podcast en este caso).
         * @param autor Autor o creador del podcast.
         * @param genero Género del podcast.
         * @param estado Estado del podcast.
         * @param tamano Tamaño del podcast ("corto", "mediano" o "largo").
         * @param precio Precio del podcast.
         */
        void imprimirPodcast(string titulo,
            string grupo,
            string material,
            string autor,
            string genero,
            string estado,
            string tamano,
            double precio);

        /** 
         * @brief Tamaño del podcast ("corto", "mediano" o "largo"). 
         * 
         * Este atributo se determina automáticamente según la duración del podcast.
         */
        string tamano;

};

#endif
