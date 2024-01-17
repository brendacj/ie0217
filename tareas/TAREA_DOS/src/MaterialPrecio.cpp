/**
 * @file MaterialPrecio.cpp
 * @brief Contiene la implementación de los métodos de la clase MaterialPrecio
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "MaterialPrecio.hpp"

/**
     * @brief Constructor por defecto de la clase MaterialPrecio.
     */
MaterialPrecio::MaterialPrecio() {
    // No hay ninguna inicialización específica en este momento
}

/**
     * @brief Método para obtener los precios de los materiales.
     */
std::vector<double*> MaterialPrecio::obtenerPrecios(){

    /**
     * Recorre todos los vectores de punteros de los materiales y
     * guarda los precios de cada objeto dentro de ellos en el vector
     * vectorPrecios
     */
    std::vector<double*> vectorPrecios;

    for (Libro* objeto : vectorDePunterosLibro) {
        vectorPrecios.push_back(new double(objeto->precio));
    }
    for (Noticia* objeto : vectorDePunterosNoticia) {
        vectorPrecios.push_back(new double(objeto->precio));
    }
    for (Pelicula* objeto : vectorDePunterosPelicula) {
        vectorPrecios.push_back(new double(objeto->precio));
    }
    for (Podcast* objeto : vectorDePunterosPodcast) {
        vectorPrecios.push_back(new double(objeto->precio));
    }

    return vectorPrecios;

 }

/**
     * @brief Método para ordenar los precios de los materiales.
     */
void MaterialPrecio::bubbleSort(std::vector<double*>& vectorDePrecios, bool ascendente) {
    // Calcula el tamaño del vector
    size_t n = vectorDePrecios.size();
    
    // Recorre iteradamente el vector
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            // Comparar los valores apuntados por los punteros
            bool condicionOrden = ascendente ? (*(vectorDePrecios[j]) > *(vectorDePrecios[j + 1])) : (*(vectorDePrecios[j]) < *(vectorDePrecios[j + 1]));

            // Si se cumple la condición se intercambian de lugar
            if (condicionOrden) {
                // Intercambiar los punteros
                std::swap(vectorDePrecios[j], vectorDePrecios[j + 1]);
            }
        }
    }

    // Eliminar duplicados (Necesario para imprimir de manera correcta)
    auto finDuplicados = std::unique(vectorDePrecios.begin(), vectorDePrecios.end(),
                                     [](const double* a, const double* b) { return *a == *b; });

    // Utilizar std::erase para eliminar los duplicados
    vectorDePrecios.erase(finDuplicados, vectorDePrecios.end());

    // Llama el método de imprimir
    imprimirPorPrecio(vectorDePrecios);


}

/**
     * @brief Método para imprimir por orden de precio.
     */
void MaterialPrecio::imprimirPorPrecio(std::vector<double*>& vectorDePrecios){

    // Recorre el vector ordenado de precios
    for (double* precio : vectorDePrecios){
        // Recorre cada vector de objetos accediendo a sus precios, si algún objto
        // tiene el mismo precio que el actual del vector precio, se imprime su información
        
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


