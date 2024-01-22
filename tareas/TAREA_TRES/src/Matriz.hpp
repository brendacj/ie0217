#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <cstdlib>
#include <vector>

template <typename T>
class Matriz{
    public:
        Matriz();
        void tamYDatos();
        T operacion();
    private:
        int filas;
        int columnas;
        T numTemp;
        std::vector<std::vector<T*>> matriz;
        //std::vector<T*> matriz; 

};

#include "Matriz.cpp"

#endif