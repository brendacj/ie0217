#include "OperacionCompleja.hpp"

template<typename T>
OperacionCompleja<T>::OperacionCompleja(int filas, int columnas) : Matriz<T>(filas, columnas) {}

template<typename T>
OperacionCompleja<T> OperacionCompleja<T>::operator+(const Matriz<T> &otra) const {
    OperacionCompleja resultado(this->filas, otra.columnas);
    for (int i = 0; i < this->filas; ++i) {
            for (int j = 0; j < this->columnas; ++j) {
                //resultado.matriz[i][j] = new T(*(this->matriz[i][j]) + *(otra.matriz[i][j]));
                resultado.matrizC[i][j] = this->matrizC[i][j] + otra.matrizC[i][j];
            }
        }
        return resultado;

    
}

template<typename T>
OperacionCompleja<T> OperacionCompleja<T>::operator-(const Matriz<T> &otra) const {
    OperacionCompleja resultado(this->filas, otra.columnas);
    for (int i = 0; i < this->filas; ++i) {
            for (int j = 0; j < this->columnas; ++j) {
                //resultado.matriz[i][j] = new T(*(this->matriz[i][j]) + *(otra.matriz[i][j]));
                resultado.matrizC[i][j] = this->matrizC[i][j] - otra.matrizC[i][j];
            }
        }
        return resultado;

    
}

template<typename T>
OperacionCompleja<T> OperacionCompleja<T>::operator*(const Matriz<T> &otra) const{
    //Matriz<T> resultado(filas, otra.columnas);
    OperacionCompleja resultado(this->filas, otra.columnas);
    for (int i = 0; i < this->filas; ++i) {
        for (int j = 0; j < otra.columnas; ++j) {
            resultado.matrizC[i][j] = 0;
            for (int k = 0; k < this->columnas; ++k) {
                resultado.matrizC[i][j] += this->matrizC[i][k] * otra.matrizC[k][j];
            }
        }
    }

    return resultado;
}

template<typename T>
void OperacionCompleja<T>::Imprimir() const {
        for (int k = 0; k < this->filas; k++) {
            for (int r = 0; r < this->columnas; r++) {
                std::cout << this->matriz[k][r] << " ";
            }
            std::cout << std::endl;
        }
    }