/**
 * @file MaterialLectura.cpp
 * @brief Contiene la implementación de los métodos de la clase MaterialLectura
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "MaterialLectura.hpp"

/**
     * @brief Constructor parametrizado de la clase MaterialLectura.
     * Crea objetos inicializando los atributos
     */
MaterialLectura::MaterialLectura(
    string titulo,
    string grupo,
    string material,
    string autor,
    string editorial,
    string genero,
    string estado,
    int cantiHojas,
    double precio
) : titulo(titulo),
    grupo(grupo),
    material(material),
    autor(autor),
    editorial(editorial),
    genero(genero),
    estado(estado),
    cantiHojas(cantiHojas),
    precio(precio){}

