#ifndef COMPLEJA_H
#define COMPLEJA_H

#include <iostream>
#include "Matriz.hpp"

template <typename T>
class OperacionCompleja : public Matriz<T> {
    public:
        OperacionCompleja(int filas, int columnas);
        T verificar();
        void Imprimir() const;
        OperacionCompleja<T> operator+(const Matriz<T>& otraMatriz) const;
        OperacionCompleja<T> operator-(const Matriz<T>& otraMatriz) const;
        OperacionCompleja<T> operator*(const Matriz<T>& otraMatriz) const;

    private:
        //std::vector<std::vector<T*>> resultado;
        //OperacionesBasicas<T> resultado;

};

#include "OperacionCompleja.cpp"

#endif