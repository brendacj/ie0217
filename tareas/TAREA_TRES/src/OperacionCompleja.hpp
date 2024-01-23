#ifndef COMPLEJA_H
#define COMPLEJA_H

#include <iostream>
#include "Matriz.hpp"

template <typename T>
class OperacionCompleja : public Matriz<T> {
    public:
        OperacionCompleja(int filas, int columnas);
        bool verificarDimensiones(const Matriz<T>& otra) const;
        bool verificarDimensionesMultiplicacion(const Matriz<T>& otra) const;
        OperacionCompleja<T> operator+(const Matriz<T>& otraMatriz) const;
        OperacionCompleja<T> operator-(const Matriz<T>& otraMatriz) const;
        OperacionCompleja<T> operator*(const Matriz<T>& otraMatriz) const;

    private:
        //std::vector<std::vector<T*>> resultado;
        //OperacionesBasicas<T> resultado;

};

#include "OperacionCompleja.cpp"

#endif