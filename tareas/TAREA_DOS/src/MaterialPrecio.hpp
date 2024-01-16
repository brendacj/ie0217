#ifndef PRECIO_HPP
#define PRECIO_HPP
#include "MaterialOrdenado.hpp"
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"
#include <algorithm>
#include <vector>

#include <iostream>
using namespace std;

class MaterialPrecio : public MaterialOrdenado {
    public:
        MaterialPrecio();
        std::vector<double*> obtenerPrecios();
        void bubbleSort(std::vector<double*>& vectorDePrecios, bool deOrAs);
        void imprimirPorPrecio(std::vector<double*>& vectorDePrecios);
    protected:
        std::vector<int*>vectorPrecios;
        

};


#endif