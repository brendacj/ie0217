#include "OperacionCompleja.hpp"

template<typename T>
OperacionCompleja<T>::OperacionCompleja(int filas, int columnas) : Matriz<T>(filas, columnas) {}

template<typename T>
bool OperacionCompleja<T>::verificarDimensiones(const Matriz<T>& otra) const {
    return this->filas == otra.filas && this->columnas == otra.columnas;
}

template<typename T>
bool OperacionCompleja<T>::verificarDimensionesMultiplicacion(const Matriz<T>& otra) const {
    return this->columnas == otra.filas;
}

template<typename T>
OperacionCompleja<T> OperacionCompleja<T>::operator+(const Matriz<T> &otra) const {
    try{
        if (!verificarDimensiones(otra)) {
            // Lanzar una excepción u otro manejo de error
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la suma.");
        }
        OperacionCompleja resultado(this->filas, otra.columnas);
        for (int i = 0; i < this->filas; ++i) {
                for (int j = 0; j < this->columnas; ++j) {
                    //resultado.matriz[i][j] = new T(*(this->matriz[i][j]) + *(otra.matriz[i][j]));
                    resultado.matrizC[i][j] = this->matrizC[i][j] + otra.matrizC[i][j];
                }
            }
            return resultado;
    }
    catch (const std::exception& e){
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    } 
    
}

template<typename T>
OperacionCompleja<T> OperacionCompleja<T>::operator-(const Matriz<T> &otra) const {
    try{
        if (!verificarDimensiones(otra)) {
            // Lanzar una excepción u otro manejo de error
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la resta.");
        }
        OperacionCompleja resultado(this->filas, otra.columnas);
        for (int i = 0; i < this->filas; ++i) {
                for (int j = 0; j < this->columnas; ++j) {
                    //resultado.matriz[i][j] = new T(*(this->matriz[i][j]) + *(otra.matriz[i][j]));
                    resultado.matrizC[i][j] = this->matrizC[i][j] - otra.matrizC[i][j];
                }
            }
            return resultado;
    }
    catch (const std::exception& e){
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    } 
    
}

template<typename T>
OperacionCompleja<T> OperacionCompleja<T>::operator*(const Matriz<T> &otra) const{
    try{
        //Matriz<T> resultado(filas, otra.columnas);
        if (!verificarDimensionesMultiplicacion(otra)) {
            // Lanzar una excepción u otro manejo de error
            throw std::invalid_argument("Las matrices no cumplen con las dimensiones para la multiplicación.");
        }
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
    catch (const std::exception& e){
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    } 
}
