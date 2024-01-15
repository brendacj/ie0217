#ifndef ORDENADO_HPP
#define ORDENADO_HPP
#include "Libro.hpp"
#include "Noticia.hpp"
#include <vector>


#include <iostream>
using namespace std;

class MaterialOrdenado : public Libro, public Noticia {
    public:
        MaterialOrdenado();
        void eliminarMaterial();
        void agregarMaterial();
        void buscarMaterial();
    protected:
        std::vector<Libro*> vectorDePunterosLibro; 
        std::vector<Noticia*> vectorDePunterosNoticia; 


};

#endif