/**
 * @file Pelicula.cpp
 * @brief Contiene la implementación de los métodos de la clase Pelicula
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "Pelicula.hpp"

/**
 * @brief Constructor de la clase Pelicula.
 * 
 * Inicializa un libro con valores predeterminados.
 */
Pelicula::Pelicula(
    string titulo,
    string grupo,
    string material,
    string autor,
    string genero,
    string estado,
    int duracion,
    double precio
): MaterialAudiovisual(titulo, grupo, "Pelicula", autor, genero, estado, duracion, precio){
    tamano = tamanoPelicula(duracion);
}

/**
 * @brief Constructor por defecto.
 * 
 * Inicializa una noticia con valores predeterminados.
 */
Pelicula::Pelicula() : MaterialAudiovisual("", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}

/**
 * @brief Determina el tamaño de la pelicula según la cantidad de minutos.
 *
 * @param duracion Cantidad de minutos que dura la pelicula.
 * @return std::string Tamaño de la noticia ("corta", "mediana" o "larga").
 */
string Pelicula::tamanoPelicula(int duracion){
    // Comparación con los limites de los tamaños de la pelicula, se devuleve el que corresponda
    if (duracion < 90){
        return "corta";
    } else if (duracion >= 90 && duracion < 150){
        return "mediana";
    } else {
        return "larga";
    } 
}

/**
 * @brief Imprime los detalles de la pelicula.
 *
 */
void Pelicula::imprimirPelicula(
    string titulo,
    string grupo,
    string material,
    string autor,
    string genero,
    string estado,
    string tamano,
    double precio
    ){
    cout << "Titulo: " << titulo<< "  Grupo: "<< grupo << "  Material: "<< material << "  Autor: "<< autor << "  Genero: "<< genero << "  Estado: "<< estado << "  Tamaño: "<< tamano << "  Precio: "<< precio <<endl;
}