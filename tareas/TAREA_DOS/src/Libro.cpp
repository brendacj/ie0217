/**
 * @file libro.cpp
 * @brief Contiene la implementación de los métodos de la clase Libro, que hereda de MaterialLectura.
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
# include "Libro.hpp"

/**
 * @brief Constructor de la clase Libro.
 * 
 * Inicializa un objeto de tipo Libro con los valores proporcionados.
 * @param titulo El título del libro.
 * @param grupo El grupo al que pertenece el libro.
 * @param material El tipo de material del libro (en este caso siempre es "Libro").
 * @param autor El autor del libro.
 * @param editorial La editorial que publicó el libro.
 * @param genero El género del libro.
 * @param estado El estado del libro (nuevo, usado, etc.).
 * @param cantiHojas La cantidad de hojas que tiene el libro.
 * @param precio El precio del libro.
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
 * Inicializa un objeto Libro con valores predeterminados.
 */
Libro::Libro() : MaterialLectura("", "", "", "", "", "", "", 0, 0.0) {
    tamano = "desconocido";
}

/**
 * @brief Determina el tamaño del libro según la cantidad de hojas.
 *
 * Esta función clasifica el tamaño del libro en tres categorías: "corto", "mediano" y "largo"
 * basándose en la cantidad de hojas.
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
 * Esta función imprime una lista con la información del libro, incluyendo título, grupo, 
 * tipo de material, autor, editorial, género, estado, tamaño y precio.
 * 
 * @param titulo El título del libro.
 * @param grupo El grupo al que pertenece el libro.
 * @param material El tipo de material del libro.
 * @param autor El autor del libro.
 * @param editorial La editorial del libro.
 * @param genero El género del libro.
 * @param estado El estado del libro.
 * @param tamano El tamaño del libro (corto, mediano, largo).
 * @param precio El precio del libro.
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
