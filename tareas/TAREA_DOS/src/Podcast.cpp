/**
 * @file Podcast.cpp
 * @brief Contiene la implementación de los métodos de la clase Podcast.
 * 
 * La clase `Podcast` hereda de `MaterialAudiovisual` y gestiona la información de un podcast, 
 * como el título, autor, género, estado, duración y precio. Este archivo contiene los métodos 
 * para inicializar el podcast, clasificar su tamaño según la duración y mostrar la información 
 * del podcast.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "Podcast.hpp"

/**
 * @brief Constructor de la clase Podcast.
 * 
 * Inicializa un podcast con los valores proporcionados para los atributos. El tamaño del 
 * podcast se determina automáticamente en función de la duración en minutos.
 * 
 * @param titulo Título del podcast.
 * @param grupo Grupo o categoría al que pertenece el podcast (por ejemplo, "Tecnología", "Educación").
 * @param material Tipo de material (en este caso siempre es "Podcast").
 * @param autor Autor o creador del podcast.
 * @param genero Género del podcast (por ejemplo, "Historia", "Cultura").
 * @param estado Estado del podcast (por ejemplo, "Nuevo", "Disponible").
 * @param duracion Duración del podcast en minutos.
 * @param precio Precio del podcast.
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
    tamano = tamanoPodcast(duracion);  // Determina el tamaño del podcast en función de la duración
}

/**
 * @brief Constructor por defecto de la clase Podcast.
 * 
 * Inicializa un podcast con valores predeterminados. El tamaño del podcast se establece 
 * como "desconocido".
 */
Podcast::Podcast() : MaterialAudiovisual("", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}

/**
 * @brief Determina el tamaño del podcast según la duración en minutos.
 * 
 * Este método clasifica el tamaño del podcast en tres categorías: "corto", "mediano" o "largo", 
 * dependiendo de la duración del podcast en minutos.
 * 
 * - "Corto": Menos de 30 minutos.
 * - "Mediano": Entre 30 y 89 minutos.
 * - "Largo": Más de 90 minutos.
 * 
 * @param duracion Duración del podcast en minutos.
 * @return std::string Tamaño del podcast ("corto", "mediano" o "largo").
 */
string Podcast::tamanoPodcast(int duracion){
    // Clasificación del tamaño del podcast según su duración en minutos
    if (duracion < 30){
        return "corto";  // Podcasts de menos de 30 minutos
    } else if (duracion >= 30 && duracion < 90){
        return "mediano";  // Podcasts entre 30 y 89 minutos
    } else {
        return "largo";  // Podcasts de 90 minutos o más
    } 
}

/**
 * @brief Imprime los detalles del podcast.
 * 
 * Este método imprime la información completa del podcast, incluyendo el título, grupo, 
 * material, autor, género, estado, tamaño y precio. 
 * Se utiliza para mostrar todos los atributos del podcast en consola.
 * 
 * @param titulo Título del podcast.
 * @param grupo Grupo o categoría del podcast.
 * @param material Tipo de material (Podcast en este caso).
 * @param autor Autor o creador del podcast.
 * @param genero Género del podcast.
 * @param estado Estado del podcast.
 * @param tamano Tamaño del podcast ("corto", "mediano" o "largo").
 * @param precio Precio del podcast.
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
    cout << "Titulo: " << titulo << "  Grupo: " << grupo << "  Material: " << material 
         << "  Autor: " << autor << "  Genero: " << genero << "  Estado: " << estado 
         << "  Tamaño: " << tamano << "  Precio: " << precio << endl;
}
