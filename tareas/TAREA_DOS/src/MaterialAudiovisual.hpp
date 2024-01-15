#ifndef AUDIOVISUAL_HPP
#define AUDIOVISUAL_HPP

#include <iostream>
using namespace std;

class MaterialAudiovisual {
    public:
        MaterialAudiovisual(int velocidad);

    protected:
        int titulo;
        int grupo;
        int material;
        int autor;
        int genero;
        int estado;
        int duracion;
        int precio;

};

#endif