/**
 * @file Noticia.cpp
 * @brief Contiene la implementación de los métodos de la clase Noticia.
 * 
 * La clase `Noticia` representa un objeto que almacena los detalles de una noticia, 
 * incluyendo el título, autor, editorial, género, estado, tamaño y precio. 
 * Este archivo contiene los métodos para inicializar, clasificar y mostrar información de las noticias.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "Noticia.hpp"

/**
 * @brief Constructor de la clase Noticia.
 * 
 * Este constructor inicializa una instancia de la clase `Noticia` con los valores 
 * proporcionados para sus atributos. El tamaño de la noticia se determina 
 * automáticamente en base a la cantidad de hojas.
 * 
 * @param titulo El título de la noticia.
 * @param grupo El grupo o categoría al que pertenece la noticia.
 * @param material El tipo de material (en este caso, siempre es "Noticia").
 * @param autor El autor de la noticia.
 * @param editorial La editorial que publicó la noticia.
 * @param genero El género de la noticia (por ejemplo, "Deportes", "Política").
 * @param estado El estado de la noticia (por ejemplo, "Nueva", "Antigua").
 * @param cantiHojas La cantidad de hojas de la noticia.
 * @param precio El precio de la noticia.
 */
Noticia::Noticia(
    string titulo,
    string grupo,
    string material,
    string autor,
    string editorial,
    string genero,
    string estado,
    int cantiHojas,
    double precio
): MaterialLectura(titulo, grupo, "Noticia", autor, editorial, genero, estado, cantiHojas, precio){
    tamano = tamanoNoticia(cantiHojas);
}

/**
 * @brief Constructor por defecto de la clase Noticia.
 * 
 * Este constructor inicializa una instancia de la clase `Noticia` con valores predeterminados.
 * El tamaño se establece como "desconocido".
 */
Noticia::Noticia() : MaterialLectura("", "", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}

/**
 * @brief Determina el tamaño de la noticia según la cantidad de hojas.
 * 
 * Este método clasifica el tamaño de la noticia en tres categorías: "corta", 
 * "mediana" o "larga", según la cantidad de hojas que tenga la noticia.
 * 
 * @param cantiHojas La cantidad de hojas de la noticia.
 * @return std::string El tamaño de la noticia ("corta", "mediana" o "larga").
 */
string Noticia::tamanoNoticia(int cantiHojas){
    // Clasificación del tamaño de la noticia según el número de hojas
    if (cantiHojas < 5){
        return "corta";  // Noticias con menos de 5 hojas
    } else if (cantiHojas >= 5 && cantiHojas < 10){
        return "mediana";  // Noticias con entre 5 y 9 hojas
    } else {
        return "larga";  // Noticias con 10 o más hojas
    }  
}

/**
 * @brief Imprime los detalles de la noticia.
 * 
 * Este método imprime la información completa de la noticia, incluyendo su título, 
 * grupo, material, autor, editorial, género, estado, tamaño y precio.
 * 
 * @param titulo El título de la noticia.
 * @param grupo El grupo o categoría de la noticia.
 * @param material El tipo de material (en este caso siempre es "Noticia").
 * @param autor El autor de la noticia.
 * @param editorial La editorial que publicó la noticia.
 * @param genero El género de la noticia.
 * @param estado El estado de la noticia.
 * @param tamano El tamaño de la noticia (corta, mediana, larga).
 * @param precio El precio de la noticia.
 */
void Noticia::imprimirNoticia(
    string titulo,
    string grupo,
    string material,
    string autor,
    string editorial,
    string genero,
    string estado,
    string tamano,
    double precio
    ){
    cout << "Titulo: " << titulo<< "  Grupo: "<< grupo << "  Material: "<< material << "  Autor: "<< autor << "  Editorial: "<< editorial << "  Genero: "<< genero << "  Estado: "<< estado << "  Tamaño: "<< tamano << "  Precio: "<< precio << endl;
}
