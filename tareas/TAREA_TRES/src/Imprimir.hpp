#ifndef IMPRIMIR_H
#define IMPRIMIR_H

#include "Matriz.hpp"
#include "OperacionCompleja.hpp"
#include <iostream>

template <typename T>
class Imprimir {
public:
    static void ImprimirMatriz(const Matriz<T>& matriz, int num);
};

#include "Imprimir.cpp"

#endif