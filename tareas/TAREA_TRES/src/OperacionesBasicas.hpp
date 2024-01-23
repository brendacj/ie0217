#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <iostream>
#include "Matriz.hpp"

template <typename T>
class OperacionesBasicas : public Matriz<T> {
    public:
        OperacionesBasicas(int filas, int columnas);
        T verificar();
        //void Imprimir() const;
        OperacionesBasicas<T> operator+(const Matriz<T>& otraMatriz) const;
        OperacionesBasicas<T> operator-(const Matriz<T>& otraMatriz) const;
        OperacionesBasicas<T> operator*(const Matriz<T>& otraMatriz) const;

    private:
        //std::vector<std::vector<T*>> resultado;
        //OperacionesBasicas<T> resultado;

};

#include "OperacionesBasicas.cpp"

#endif