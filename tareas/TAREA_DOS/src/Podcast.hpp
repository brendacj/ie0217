#ifndef PODCAST_HPP
#define PODCAST_HPP
#include "MaterialAudiovisual.hpp"

#include <iostream>
using namespace std;

class Podcast : public MaterialAudiovisual {
    public:
        Podcast();
        Podcast(
            string titulo,
            string grupo,
            string material,
            string autor,
            string genero,
            string estado,
            int duracion,
            double precio
        );
        
        string tamanoPodcast(int duracion);

        void imprimirPodcast(string titulo,
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