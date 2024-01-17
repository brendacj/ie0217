/**
 * @file libro.cpp
 * @brief Contiene la implementación de los métodos de la clase Libro
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "Libro.hpp"

/**
 * @brief Constructor de la clase Libro.
 * 
 * Inicializa una noticia con valores predeterminados.
 */
Libro::Libro(
    string titulo,
    string grupo,
    string material,
    string autor,
    string editorial,
    string genero,
    string estado,
    int cantiHojas,
    double precio
): MaterialLectura(titulo, grupo, "Libro", autor, editorial, genero, estado, cantiHojas, precio){
    tamano = tamanoLibro(cantiHojas);
}

/**
 * @brief Constructor por defecto.
 * 
 * Inicializa un libro con valores predeterminados.
 */
Libro::Libro() : MaterialLectura("", "", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}

/**
 * @brief Determina el tamaño del libro según la cantidad de hojas.
 *
 * @param cantiHojas Cantidad de hojas del libro.
 * @return std::string Tamaño del libro ("corto", "mediano" o "largo").
 */
string Libro::tamanoLibro(int cantiHojas){
    // Limites de los tamaños del libro, devuelve el que corresponda
    if (cantiHojas < 100){
        return "corto";
    } else if (cantiHojas >= 100 && cantiHojas < 200){
        return "mediano";
    } else {
        return "largo";
    }  
}

/**
 * @brief Imprime los detalles del libro.
 *
 */
void Libro::imprimirLibro(
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