#ifndef ORDENADO_HPP
#define ORDENADO_HPP
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"
#include <vector>


#include <iostream>
using namespace std;

class MaterialOrdenado : public Libro, public Noticia, public Pelicula, public Podcast {
    public:
        MaterialOrdenado();
        ~MaterialOrdenado();
        void eliminarMaterial(string titulo);
        void agregarMaterial();
        void buscarMaterial(string material);
        void buscarTitulo(string titulo);
    protected:
        std::vector<Libro*> vectorDePunterosLibro; 
        std::vector<Noticia*> vectorDePunterosNoticia;
        std::vector<Pelicula*> vectorDePunterosPelicula;
        std::vector<Podcast*> vectorDePunterosPodcast;


};

#endif