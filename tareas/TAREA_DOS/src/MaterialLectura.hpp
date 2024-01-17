/**
 * @file MaterialLectura.hpp
 * @brief Contiene la declaración de la clase MaterialLectura y los prototipos de sus métodos
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef LECTURA_HPP
#define LECTURA_HPP

#include <iostream>
using namespace std;

/**
 * @brief Clase base que representa un material de lectura.
 */
class MaterialLectura {
    public:
        MaterialLectura(
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

        /// @brief  Declaración de los atributos de la clase
        string titulo;
        string grupo;
        string material;
        string autor;
        string editorial;
        string genero;
        string estado;
        int cantiHojas;
        double precio;

    /*protected:
        string grupo;
        string material;
        string autor;
        string editorial;
        string genero;
        string estado;
        int cantiHojas;
        double precio;*/

};

#endif