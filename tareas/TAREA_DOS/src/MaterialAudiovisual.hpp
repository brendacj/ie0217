/**
 * @file MaterialAudiovisual.hpp
 * @brief Contiene la declaración de la clase MaterialAudiovisual y los prototipos de sus métodos.
 * 
 * La clase `MaterialAudiovisual` representa un material audiovisual, como películas o videos,
 * y contiene los atributos y métodos necesarios para manejar los detalles de dichos materiales.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef AUDIOVISUAL_HPP
#define AUDIOVISUAL_HPP

#include <iostream>
using namespace std;

/**
 * @brief Clase base que representa un material audiovisual.
 * 
 * Esta clase contiene los atributos esenciales para describir un material audiovisual, como 
 * su título, autor, género, estado, duración, y precio. Los materiales audiovisuales pueden 
 * ser películas, videos, o cualquier otro tipo de contenido relacionado con medios visuales y sonoros.
 */
class MaterialAudiovisual {
    public:
        /**
         * @brief Constructor parametrizado de la clase MaterialAudiovisual.
         * 
         * Inicializa un objeto de tipo `MaterialAudiovisual` con los valores proporcionados.
         * 
         * @param titulo Título del material audiovisual.
         * @param grupo Grupo o categoría al que pertenece el material.
         * @param material Tipo de material (por ejemplo, "Película", "Video", etc.).
         * @param autor Autor o creador del material audiovisual.
         * @param genero Género del material (por ejemplo, "Drama", "Comedia", etc.).
         * @param estado Estado del material (por ejemplo, "Nuevo", "Usado", etc.).
         * @param duracion Duración del material en minutos.
         * @param precio Precio del material audiovisual.
         */
        MaterialAudiovisual(
            string titulo,
            string grupo,
            string material,
            string autor,
            string genero,
            string estado,
            int duracion,
            double precio
        );

        /** @brief Título del material audiovisual. */
        string titulo;  ///< Título del material audiovisual.
        
        /** @brief Grupo al que pertenece el material audiovisual. */
        string grupo;  ///< Grupo o categoría al que pertenece el material.
        
        /** @brief Tipo de material audiovisual (por ejemplo, "Película"). */
        string material;  ///< Tipo de material (por ejemplo, "Película").
        
        /** @brief Autor o creador del material audiovisual. */
        string autor;  ///< Autor o creador del material.
        
        /** @brief Género del material audiovisual (por ejemplo, "Drama"). */
        string genero;  ///< Género del material audiovisual.
        
        /** @brief Estado del material (por ejemplo, "Nuevo", "Usado"). */
        string estado;  ///< Estado del material.
        
        /** @brief Duración en minutos del material audiovisual. */
        int duracion;  ///< Duración en minutos del material audiovisual.
        
        /** @brief Precio del material audiovisual. */
        double precio;  ///< Precio del material audiovisual.

};

#endif
