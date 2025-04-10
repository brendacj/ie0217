/**
 * @file MaterialPrecio.cpp
 * @brief Contiene la implementación de los métodos de la clase MaterialPrecio.
 * 
 * La clase `MaterialPrecio` gestiona la obtención, ordenación y visualización de los precios
 * de diferentes materiales, como libros, noticias, películas y podcasts. Los precios se 
 * almacenan en vectores de punteros para facilitar su manipulación y ordenación.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "MaterialPrecio.hpp"

/**
 * @brief Constructor por defecto de la clase MaterialPrecio.
 * 
 * Inicializa un objeto de la clase `MaterialPrecio` sin realizar ninguna inicialización específica,
 * ya que no es necesario al momento de la creación.
 */
MaterialPrecio::MaterialPrecio() {
    // No hay ninguna inicialización específica en este momento
}

/**
 * @brief Método para obtener los precios de los materiales.
 * 
 * Este método recorre todos los vectores de punteros a los objetos de tipo Libro, Noticia,
 * Pelicula y Podcast, extrayendo los precios de cada uno de ellos y almacenándolos en un vector
 * de punteros a `double`.
 * 
 * @return std::vector<double*> Vector que contiene los precios de los materiales.
 */
std::vector<double*> MaterialPrecio::obtenerPrecios(){
    std::vector<double*> vectorPrecios;

    // Recorre los objetos de tipo Libro y guarda sus precios en vectorPrecios
    for (Libro* objeto : vectorDePunterosLibro) {
        vectorPrecios.push_back(new double(objeto->precio));
    }

    // Recorre los objetos de tipo Noticia y guarda sus precios en vectorPrecios
    for (Noticia* objeto : vectorDePunterosNoticia) {
        vectorPrecios.push_back(new double(objeto->precio));
    }

    // Recorre los objetos de tipo Pelicula y guarda sus precios en vectorPrecios
    for (Pelicula* objeto : vectorDePunterosPelicula) {
        vectorPrecios.push_back(new double(objeto->precio));
    }

    // Recorre los objetos de tipo Podcast y guarda sus precios en vectorPrecios
    for (Podcast* objeto : vectorDePunterosPodcast) {
        vectorPrecios.push_back(new double(objeto->precio));
    }

    return vectorPrecios;
}

/**
 * @brief Método para ordenar los precios de los materiales.
 * 
 * Este método utiliza el algoritmo de ordenación `bubbleSort` para ordenar los precios
 * almacenados en un vector de punteros a `double`, en orden ascendente o descendente, según
 * el parámetro `ascendente`.
 * 
 * @param vectorDePrecios Vector de punteros a los precios a ordenar.
 * @param ascendente Booleano que indica si el orden debe ser ascendente (true) o descendente (false).
 */
void MaterialPrecio::bubbleSort(std::vector<double*>& vectorDePrecios, bool ascendente) {
    // Calcula el tamaño del vector
    size_t n = vectorDePrecios.size();
    
    // Recorre el vector para realizar la ordenación por burbuja
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            // Comparar los valores apuntados por los punteros
            bool condicionOrden = ascendente ? (*(vectorDePrecios[j]) > *(vectorDePrecios[j + 1])) : (*(vectorDePrecios[j]) < *(vectorDePrecios[j + 1]));

            // Si se cumple la condición, intercambia los punteros
            if (condicionOrden) {
                std::swap(vectorDePrecios[j], vectorDePrecios[j + 1]);
            }
        }
    }

    // Eliminar duplicados (Necesario para imprimir de manera correcta)
    auto finDuplicados = std::unique(vectorDePrecios.begin(), vectorDePrecios.end(),
                                     [](const double* a, const double* b) { return *a == *b; });

    // Utiliza std::erase para eliminar los duplicados
    vectorDePrecios.erase(finDuplicados, vectorDePrecios.end());

    // Llama al método de impresión para mostrar los precios ordenados
    imprimirPorPrecio(vectorDePrecios);
}

/**
 * @brief Método para imprimir los materiales ordenados por precio.
 * 
 * Este método recorre el vector de precios ordenados y, para cada precio, recorre los
 * vectores de materiales correspondientes (libros, noticias, películas, podcasts) y muestra
 * la información de los materiales cuyo precio coincide con el precio actual en el vector.
 * 
 * @param vectorDePrecios Vector de precios ordenados que se utilizarán para imprimir los materiales.
 */
void MaterialPrecio::imprimirPorPrecio(std::vector<double*>& vectorDePrecios){
    // Recorre el vector ordenado de precios
    for (double* precio : vectorDePrecios){
        // Recorre los vectores de materiales y compara el precio con el actual en vectorDePrecios
        for (Libro* objeto : vectorDePunterosLibro) {
            if (objeto->precio == *precio){
                cout << "Titulo: " << objeto->titulo << " Material: " << objeto->material << " Precio: " << objeto->precio << endl;
            }
        }
        for (Noticia* objeto : vectorDePunterosNoticia) {
            if (objeto->precio == *precio){
                cout << "Titulo: " << objeto->titulo << " Material: " << objeto->material << " Precio: " << objeto->precio << endl;
            }
        }
        for (Pelicula* objeto : vectorDePunterosPelicula) {
            if (objeto->precio == *precio){
                cout << "Titulo: " << objeto->titulo << " Material: " << objeto->material << " Precio: " << objeto->precio << endl;
            }
        }
        for (Podcast* objeto : vectorDePunterosPodcast) {
            if (objeto->precio == *precio){
                cout << "Titulo: " << objeto->titulo << " Material: " << objeto->material << " Precio: " << objeto->precio << endl;
            }
        }
    }
}


