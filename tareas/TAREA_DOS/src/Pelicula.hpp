#ifndef PELICULA_HPP
#define PELICULA_HPP
#include "MaterialAudiovisual.hpp"

#include <iostream>
using namespace std;

class Pelicula : public MaterialAudiovisual {
    public:
        
        void tamanoPelicula();
        void imprimirPelicula();

};

#endif