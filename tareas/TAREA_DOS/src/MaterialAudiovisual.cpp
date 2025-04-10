/**
 * @file MaterialAudiovisual.cpp
 * @brief Contiene la implementación de los métodos de la clase MaterialAudiovisual.
 * 
 * La clase `MaterialAudiovisual` gestiona los atributos y operaciones relacionadas con
 * los materiales audiovisuales, como películas, videos, etc.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "MaterialAudiovisual.hpp"

/**
 * @brief Constructor parametrizado de la clase MaterialAudiovisual.
 * 
 * Inicializa un objeto de tipo `MaterialAudiovisual` con los valores proporcionados.
 * 
 * @param titulo El título del material audiovisual.
 * @param grupo El grupo o categoría a la que pertenece el material.
 * @param material El tipo de material (por ejemplo, "Película", "Video", etc.).
 * @param autor El autor o creador del material audiovisual.
 * @param genero El género del material audiovisual (por ejemplo, "Drama", "Comedia", etc.).
 * @param estado El estado del material (por ejemplo, "Nuevo", "Usado", etc.).
 * @param duracion La duración del material en minutos.
 * @param precio El precio del material.
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
