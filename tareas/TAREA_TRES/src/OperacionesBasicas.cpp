#include "OperacionesBasicas.hpp"

template<typename T>
OperacionesBasicas<T>::OperacionesBasicas(int filas, int columnas) : Matriz<T>(filas, columnas) {}

template<typename T>
bool OperacionesBasicas<T>::verificarDimensiones(const Matriz<T>& otra) const {
    return this->filas == otra.filas && this->columnas == otra.columnas;
}

template<typename T>
bool OperacionesBasicas<T>::verificarDimensionesMultiplicacion(const Matriz<T>& otra) const {
    return this->columnas == otra.filas;
}

template<typename T>
OperacionesBasicas<T> OperacionesBasicas<T>::operator+(const Matriz<T> &otra) const {
    try{
        if (!verificarDimensiones(otra)) {
        // Lanzar una excepción u otro manejo de error
        throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la suma.");
        }
        OperacionesBasicas resultado(this->filas, otra.columnas);
        for (int i = 0; i < this->filas; ++i) {
                for (int j = 0; j < this->columnas; ++j) {
                    //resultado.matriz[i][j] = new T(*(this->matriz[i][j]) + *(otra.matriz[i][j]));
                    resultado.matriz[i][j] = this->matriz[i][j] + otra.matriz[i][j];
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
OperacionesBasicas<T> OperacionesBasicas<T>::operator-(const Matriz<T> &otra) const {
    try{
        if (!verificarDimensiones(otra)) {
            // Lanzar una excepción u otro manejo de error
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la resta.");
        }
        OperacionesBasicas resultado(this->filas, otra.columnas);
        for (int i = 0; i < this->filas; ++i) {
                for (int j = 0; j < this->columnas; ++j) {
                    //resultado.matriz[i][j] = new T(*(this->matriz[i][j]) + *(otra.matriz[i][j]));
                    resultado.matriz[i][j] = this->matriz[i][j] - otra.matriz[i][j];
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
OperacionesBasicas<T> OperacionesBasicas<T>::operator*(const Matriz<T> &otra) const{
    try{
        //Matriz<T> resultado(filas, otra.columnas);
        if (!verificarDimensionesMultiplicacion(otra)) {
            // Lanzar una excepción u otro manejo de error
            throw std::invalid_argument("Las matrices no cumplen con las dimensiones para la multiplicación.");
        }
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
    catch (const std::exception& e){
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    } 
}
