#ifndef NOTICIA_HPP
#define NOTICIA_HPP
#include "MaterialLectura.hpp"

#include <iostream>
using namespace std;

class Noticia : public MaterialLectura {
    public:
        Noticia();
        Noticia(
            string titulo,
            string grupo,
            string material,
            string autor,
            string editorial,
            string genero,
            string estado,
            int cantiHojas,
            double precio
        );

        string tamanoNoticia(int cantiHojas);
        void imprimirNoticia();

        string tamano;


};

#endif