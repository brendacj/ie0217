/**
 * @file MaterialAudiovisual.cpp
 * @brief Contiene la implementación de los métodos de la clase MaterialAudiovisual
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "MaterialAudiovisual.hpp"

    /**
     * @brief Constructor parametrizado de la clase MaterialAudiovisual.
     * Crea objetos inicializando los atributos
     */
MaterialAudiovisual::MaterialAudiovisual(
    string titulo,
    string grupo,
    string material,
    string autor,
    string genero,
    string estado,
    int duracion,
    double precio
) : titulo(titulo),
    grupo(grupo),
    material(material),
    autor(autor),
    genero(genero),
    estado(estado),
    duracion(duracion),
    precio(precio){}