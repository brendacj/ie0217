#ifndef AUDIOVISUAL_HPP
#define AUDIOVISUAL_HPP

#include <iostream>
using namespace std;

class MaterialAudiovisual {
    public:
        MaterialAudiovisual(
            string titulo,
            string grupo,
            string material,
            string autor,
            string genero,
            string estado,
            int duracion,
            double precio
        );

        string titulo;
        string grupo;
        string material;
        string autor;
        string genero;
        string estado;
        int duracion;
        double precio;
    /*
    protected:
        string titulo;
        string grupo;
        string material;
        string autor;
        string genero;
        string estado;
        int duracion;
        double precio;*/

};

#endif