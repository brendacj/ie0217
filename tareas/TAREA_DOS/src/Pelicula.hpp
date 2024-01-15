#ifndef PELICULA_HPP
#define PELICULA_HPP
#include "MaterialAudiovisual.hpp"

#include <iostream>
using namespace std;

class Pelicula : public MaterialAudiovisual {
    public:
        Pelicula();
        Pelicula(
            string titulo,
            string grupo,
            string material,
            string autor,
            string genero,
            string estado,
            int duracion,
            double precio
        );
        
        string tamanoPelicula(int duracion);
        void imprimirPelicula(string titulo,
            string grupo,
            string material,
            string autor,
            string genero,
            string estado,
            string tamano,
            double precio);

        string tamano;

};

#endif