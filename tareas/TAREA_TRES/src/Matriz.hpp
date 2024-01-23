#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <limits> 
#include <complex>
#include <type_traits>

template <typename T>
class Matriz{
    public:
        Matriz(int filas, int columnas);
        int tamYDatos();
        T operacion();
        int filas;
        int columnas;
        //T numTemp;
        std::vector<std::vector<T>> matriz;
        std::vector<std::vector<std::complex<float>>> matrizC;
        //std::vector<T*> matriz; 

};

#include "Matriz.cpp"

#endif