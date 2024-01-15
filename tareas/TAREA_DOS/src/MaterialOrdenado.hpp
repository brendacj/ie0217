#ifndef ORDENADO_HPP
#define ORDENADO_HPP
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"

#include <iostream>
using namespace std;

class MaterialOrdenado : public Libro, public Noticia, public Pelicula, public Podcast {
    public:
    
        void eliminarMaterial();
        void agregarMaterial();
        void buscarMaterial();


};

#endif