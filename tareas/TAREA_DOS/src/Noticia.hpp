#ifndef NOTICIA_HPP
#define NOTICIA_HPP
#include "MaterialLectura.hpp"

#include <iostream>
using namespace std;

class Noticia : public MaterialLectura {
    public:
    
        void tamanoNoticia();
        void imprimirNoticia();


};

#endif