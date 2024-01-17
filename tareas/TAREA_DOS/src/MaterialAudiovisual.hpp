/**
 * @file MaterialAudiovisual.hpp
 * @brief Contiene la declaración de la clase MaterialAudiovisual y los prototipos de sus métodos
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef AUDIOVISUAL_HPP
#define AUDIOVISUAL_HPP

#include <iostream>
using namespace std;

/**
 * @brief Clase base que representa un material audiovisual.
 */
class MaterialAudiovisual {
    public:
        /**
         * @brief Constructor parametrizado de la clase MaterialAudiovisual.
         *
         * @param titulo Título del material audiovisual.
         * @param grupo Grupo al que pertenece el material.
         * @param material Tipo de material.
         * @param autor Autor del material.
         * @param genero Género del material.
         * @param estado Estado del material.
         * @param duracion Duración en minutos del material audiovisual.
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

        /// @brief  Declaración de los atributos de la clase
        string titulo;
        string grupo;
        string material;
        string autor;
        string genero;
        string estado;
        int duracion;
        double precio;

};

#endif