#ifndef LIBRO_HPP
#define LIBRO_HPP
#include "MaterialLectura.hpp"

#include <iostream>
using namespace std;

class Libro : public MaterialLectura {
    public:
        Libro();
        Libro(
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

        string tamanoLibro(int cantiHojas);
        void imprimirLibro(string titulo,
            string grupo,
            string material,
            string autor,
            string editorial,
            string genero,
            string estado,
            string tamano,
            double precio);

        string tamano;


};
#endif