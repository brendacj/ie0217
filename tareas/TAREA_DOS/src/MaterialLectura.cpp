/**
 * @file MaterialLectura.cpp
 * @brief Contiene la implementación de los métodos de la clase MaterialLectura.
 * 
 * Este archivo implementa los métodos de la clase `MaterialLectura`, que representa un material
 * que puede ser leído, como libros, revistas o cualquier otro tipo de material textual.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "MaterialLectura.hpp"

/**
 * @brief Constructor parametrizado de la clase MaterialLectura.
 * 
 * Inicializa un objeto de tipo `MaterialLectura` con los valores proporcionados.
 * 
 * @param titulo Título del material de lectura.
 * @param grupo Grupo o categoría al que pertenece el material.
 * @param material Tipo de material de lectura (por ejemplo, "Libro", "Revista").
 * @param autor Autor del material de lectura.
 * @param editorial Editorial que publicó el material.
 * @param genero Género del material (por ejemplo, "Ficción", "Ciencia").
 * @param estado Estado del material (por ejemplo, "Nuevo", "Usado").
 * @param cantiHojas Cantidad de hojas del material de lectura.
 * @param precio Precio del material de lectura.
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
