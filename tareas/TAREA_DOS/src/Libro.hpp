#ifndef LIBRO_HPP
#define LIBRO_HPP
#include "MaterialLectura.hpp"

#include <iostream>
using namespace std;

class Libro : public MaterialLectura {
    public:
        //Coche(int velocidad, int numPuertas);
        void tamanoLibro();
        void imprimirLibro();


};

#endif