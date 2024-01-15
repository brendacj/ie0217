#ifndef ORDENADO_HPP
#define ORDENADO_HPP
#include "Libro.hpp"
#include <vector>


#include <iostream>
using namespace std;

class MaterialOrdenado : public Libro {
    public:
        MaterialOrdenado();
        void eliminarMaterial();
        void agregarMaterial();
        void buscarMaterial();
    protected:
        std::vector<Libro*> vectorDePunterosLibro; 


};

#endif