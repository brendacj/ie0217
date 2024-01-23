#include "OperacionesBasicas.hpp"

template<typename T>
OperacionesBasicas<T>::OperacionesBasicas(int filas, int columnas) : Matriz<T>(filas, columnas) {}

template<typename T>
OperacionesBasicas<T> OperacionesBasicas<T>::operator+(const Matriz<T> &otra) const {
    OperacionesBasicas resultado(this->filas, otra.columnas);
    for (int i = 0; i < this->filas; ++i) {
            for (int j = 0; j < this->columnas; ++j) {
                //resultado.matriz[i][j] = new T(*(this->matriz[i][j]) + *(otra.matriz[i][j]));
                resultado.matriz[i][j] = this->matriz[i][j] + otra.matriz[i][j];
            }
        }
        return resultado;

    
}

template<typename T>
OperacionesBasicas<T> OperacionesBasicas<T>::operator-(const Matriz<T> &otra) const {
    OperacionesBasicas resultado(this->filas, otra.columnas);
    for (int i = 0; i < this->filas; ++i) {
            for (int j = 0; j < this->columnas; ++j) {
                //resultado.matriz[i][j] = new T(*(this->matriz[i][j]) + *(otra.matriz[i][j]));
                resultado.matriz[i][j] = this->matriz[i][j] - otra.matriz[i][j];
            }
        }
        return resultado;

    
}

template<typename T>
OperacionesBasicas<T> OperacionesBasicas<T>::operator*(const Matriz<T> &otra) const{
    //Matriz<T> resultado(filas, otra.columnas);
    OperacionesBasicas resultado(this->filas, otra.columnas);
    for (int i = 0; i < this->filas; ++i) {
        for (int j = 0; j < otra.columnas; ++j) {
            resultado.matriz[i][j] = 0;
            for (int k = 0; k < this->columnas; ++k) {
                resultado.matriz[i][j] += this->matriz[i][k] * otra.matriz[k][j];
            }
        }
    }

    return resultado;
}
