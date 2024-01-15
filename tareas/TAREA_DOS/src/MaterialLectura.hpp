#ifndef LECTURA_HPP
#define LECTURA_HPP

#include <iostream>
using namespace std;

class MaterialLectura {
    public:
        MaterialLectura(
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

    protected:
        string titulo;
        string grupo;
        string material;
        string autor;
        string editorial;
        string genero;
        string estado;
        int cantiHojas;
        double precio;

};

#endif