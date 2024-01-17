/**
 * @file Podcast.cpp
 * @brief Contiene la implementación de los métodos de la clase Podcast
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "Podcast.hpp"

/**
 * @brief Constructor de la clase Podcast.
 * 
 * Inicializa un Podcast con valores predeterminados.
 */
Podcast::Podcast(
    string titulo,
    string grupo,
    string material,
    string autor,
    string genero,
    string estado,
    int duracion,
    double precio
): MaterialAudiovisual(titulo, grupo, "Podcast", autor, genero, estado, duracion, precio){
    tamano = tamanoPodcast(duracion);
}

/**
 * @brief Constructor por defecto.
 * 
 * Inicializa un podcast con valores predeterminados.
 */
Podcast::Podcast() : MaterialAudiovisual("", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}

/**
 * @brief Determina el tamaño del podcast según la duración en minutos.
 *
 * @param duracion Cantidad de minutos que dura el podcast.
 * @return std::string Tamaño del podcast ("corto", "mediano" o "largo").
 */
string Podcast::tamanoPodcast(int duracion){
    // Comparación con los limites de los tamaños de la pelicula, se devuleve el que corresponda
    if (duracion < 30){
        return "corta";
    } else if (duracion >= 30 && duracion < 90){
        return "mediana";
    } else {
        return "larga";
    } 
}

/**
 * @brief Imprime los detalles de la pelicula.
 *
 */
void Podcast::imprimirPodcast(
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