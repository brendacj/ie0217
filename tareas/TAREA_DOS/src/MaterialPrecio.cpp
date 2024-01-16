#include "MaterialPrecio.hpp"

MaterialPrecio::MaterialPrecio() {
    // No hay ninguna inicialización específica en este momento
}

std::vector<double*> MaterialPrecio::obtenerPrecios(){

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


void MaterialPrecio::bubbleSort(std::vector<double*>& vectorDePrecios, bool ascendente) {
    size_t n = vectorDePrecios.size();

    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            // Comparar los valores apuntados por los punteros
            bool condicionOrden = ascendente ? (*(vectorDePrecios[j]) > *(vectorDePrecios[j + 1])) : (*(vectorDePrecios[j]) < *(vectorDePrecios[j + 1]));

            if (condicionOrden) {
                // Intercambiar los punteros
                std::swap(vectorDePrecios[j], vectorDePrecios[j + 1]);
            }
        }
    }

    // Eliminar duplicados
    auto finDuplicados = std::unique(vectorDePrecios.begin(), vectorDePrecios.end(),
                                     [](const double* a, const double* b) { return *a == *b; });

    // Utilizar std::erase para eliminar los duplicados
    vectorDePrecios.erase(finDuplicados, vectorDePrecios.end());

    imprimirPorPrecio(vectorDePrecios);


}

void MaterialPrecio::imprimirPorPrecio(std::vector<double*>& vectorDePrecios){
    for (double* precio : vectorDePrecios){
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


