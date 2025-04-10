/**
 * @file Pelicula.cpp
 * @brief Contiene la implementación de los métodos de la clase Pelicula.
 * 
 * La clase `Pelicula` hereda de `MaterialAudiovisual` y gestiona la información de una película,
 * como el título, autor, género, estado, duración y precio. 
 * Este archivo contiene los métodos para inicializar la película, clasificar su tamaño 
 * según la duración y mostrar la información de la película.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "Pelicula.hpp"

/**
 * @brief Constructor de la clase Pelicula.
 * 
 * Inicializa una película con los valores proporcionados para los atributos. 
 * El tamaño de la película se determina automáticamente en función de la duración.
 * 
 * @param titulo Título de la película.
 * @param grupo Grupo o categoría al que pertenece la película.
 * @param material Tipo de material (en este caso siempre es "Pelicula").
 * @param autor Autor o director de la película.
 * @param genero Género de la película (por ejemplo, "Drama", "Acción").
 * @param estado Estado de la película (por ejemplo, "Nuevo", "Usado").
 * @param duracion Duración de la película en minutos.
 * @param precio Precio de la película.
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
 * @brief Constructor por defecto de la clase Pelicula.
 * 
 * Inicializa una película con valores predeterminados. El tamaño de la película 
 * se establece como "desconocido".
 */
Pelicula::Pelicula() : MaterialAudiovisual("", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}

/**
 * @brief Determina el tamaño de la película según la duración en minutos.
 * 
 * Este método clasifica el tamaño de la película en tres categorías: "corta", 
 * "mediana" o "larga", dependiendo de la duración de la película en minutos.
 * 
 * - "Corta": Menos de 90 minutos.
 * - "Mediana": Entre 90 y 150 minutos.
 * - "Larga": Más de 150 minutos.
 * 
 * @param duracion Duración de la película en minutos.
 * @return std::string El tamaño de la película ("corta", "mediana" o "larga").
 */
string Pelicula::tamanoPelicula(int duracion){
    // Clasificación del tamaño de la película según su duración en minutos
    if (duracion < 90){
        return "corta";  // Películas de menos de 90 minutos
    } else if (duracion >= 90 && duracion < 150){
        return "mediana";  // Películas entre 90 y 149 minutos
    } else {
        return "larga";  // Películas de 150 minutos o más
    } 
}

/**
 * @brief Imprime los detalles de la película.
 * 
 * Este método imprime la información completa de la película, incluyendo el título, 
 * grupo, material, autor, género, estado, tamaño y precio.
 * 
 * @param titulo Título de la película.
 * @param grupo Grupo o categoría de la película.
 * @param material Tipo de material (Pelicula en este caso).
 * @param autor Autor o director de la película.
 * @param genero Género de la película.
 * @param estado Estado de la película.
 * @param tamano Tamaño de la película (corta, mediana, larga).
 * @param precio Precio de la película.
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
    cout << "Titulo: " << titulo<< "  Grupo: "<< grupo << "  Material: "<< material << "  Autor: "<< autor << "  Genero: "<< genero << "  Estado: "<< estado << "  Tamaño: "<< tamano << "  Precio: "<< precio << endl;
}
