/**
 * @file Noticia.cpp
 * @brief Contiene la implementación de los métodos de la clase Noticia
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "Noticia.hpp"

/**
 * @brief Constructor de la clase Noticia.
 * 
 * Inicializa una noticia con valores predeterminados.
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
 * @brief Constructor por defecto.
 * 
 * Inicializa una noticia con valores predeterminados.
 */
Noticia::Noticia() : MaterialLectura("", "", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}

/**
 * @brief Determina el tamaño de la noticia según la cantidad de hojas.
 *
 * @param cantiHojas Cantidad de hojas de la noticia.
 * @return std::string Tamaño de la noticia ("corta", "mediana" o "larga").
 */
string Noticia::tamanoNoticia(int cantiHojas){
    // Comparación con los limites de los tamaños de la noticia, se devuleve el que corresponda
    if (cantiHojas < 5){
        return "corta";
    } else if (cantiHojas >= 5 && cantiHojas < 10){
        return "mediana";
    } else {
        return "larga";
    }  
}

/**
 * @brief Imprime los detalles de la noticia.
 *
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
    cout << "Titulo: " << titulo<< "  Grupo: "<< grupo << "  Material: "<< material << "  Autor: "<< autor << "  Editorial: "<< editorial << "  Genero: "<< genero << "  Estado: "<< estado << "  Tamaño: "<< tamano << "  Precio: "<< precio <<endl;
}