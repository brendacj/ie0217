/**
 * @file Pelicula.hpp
 * @brief Contiene la declaración de la clase Pelicula y los prototipos de sus métodos.
 * 
 * La clase `Pelicula` hereda de `MaterialAudiovisual` y gestiona la información relacionada 
 * con una película, como el título, autor, género, estado, duración y precio. 
 * Proporciona funcionalidades para calcular su tamaño según la duración y mostrar la información 
 * completa de la película.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef PELICULA_HPP
#define PELICULA_HPP
#include "MaterialAudiovisual.hpp"

#include <iostream>
using namespace std;

/**
 * @class Pelicula
 * @brief Clase que representa una película.
 * 
 * Esta clase hereda de `MaterialAudiovisual` y contiene los atributos y métodos necesarios 
 * para gestionar una película. Permite calcular el tamaño de la película en función de su 
 * duración y mostrar toda la información relevante sobre la película.
 */
class Pelicula : public MaterialAudiovisual {
    public:

        /**
         * @brief Constructor por defecto de la clase Pelicula.
         * 
         * Inicializa una película con valores predeterminados. El tamaño de la película 
         * se establece como "desconocido".
         */
        Pelicula();

        /**
         * @brief Constructor parametrizado de la clase Pelicula.
         * 
         * Inicializa una película con los valores proporcionados para los atributos.
         * El tamaño de la película se determina automáticamente en función de la duración.
         * 
         * @param titulo Título de la película.
         * @param grupo Grupo o categoría al que pertenece la película.
         * @param material Tipo de material (en este caso, siempre es "Pelicula").
         * @param autor Autor o director de la película.
         * @param genero Género de la película (por ejemplo, "Drama", "Acción").
         * @param estado Estado de la película (por ejemplo, "Nuevo", "Usado").
         * @param duracion Duración de la película en minutos.
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
         * Este método clasifica el tamaño de la película en tres categorías: "corta", 
         * "mediana" o "larga", dependiendo de la duración de la película en minutos.
         * 
         * - "Corta": Menos de 90 minutos.
         * - "Mediana": Entre 90 y 150 minutos.
         * - "Larga": Más de 150 minutos.
         * 
         * @param duracion Duración de la película en minutos.
         * @return std::string Tamaño de la película ("corta", "mediana" o "larga").
         */
        string tamanoPelicula(int duracion);

        /**
         * @brief Imprime los detalles de la película.
         * 
         * Este método imprime la información completa de la película, incluyendo el título, 
         * grupo, material, autor, género, estado, tamaño y precio. 
         * Se utiliza para mostrar todos los atributos de la película en consola.
         * 
         * @param titulo Título de la película.
         * @param grupo Grupo o categoría de la película.
         * @param material Tipo de material (Pelicula en este caso).
         * @param autor Autor o director de la película.
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
         * @brief Tamaño de la película (corta, mediana, o larga). 
         * 
         * Este atributo se determina automáticamente según la duración de la película.
         */
        string tamano;

};

#endif
