/**
 * @file OperacionesBasicas.cpp
 * @brief Contiene la implementación de los métodos de la clase OperacionesBasicas
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "OperacionesBasicas.hpp"

/// Implementación del constructor de la clase OperacionesBasicas
template<typename T>
OperacionesBasicas<T>::OperacionesBasicas(int filas, int columnas) : Matriz<T>(filas, columnas) {}

/// Implementación del método para verificar si las dimensiones de la matriz actual son iguales a las de otra matriz
template<typename T>
bool OperacionesBasicas<T>::verificarDimensiones(const Matriz<T>& otra) const {
    return this->filas == otra.filas && this->columnas == otra.columnas;
}

/// Implementación del método para verificar si las dimensiones son adecuadas para la multiplicación
template<typename T>
bool OperacionesBasicas<T>::verificarDimensionesMultiplicacion(const Matriz<T>& otra) const {
    return this->columnas == otra.filas;
}

/// Implementación de la sobrecarga del operador de suma para matrices
template<typename T>
OperacionesBasicas<T> OperacionesBasicas<T>::operator+(const Matriz<T> &otra) const {
    try{
        /// Verificar dimensiones antes de realizar la suma
        if (!verificarDimensiones(otra)) {
        // Lanzar una excepción u otro manejo de error
        throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la suma.");
        }

        /// Crear una matriz resultado con las mismas dimensiones
        OperacionesBasicas resultado(this->filas, otra.columnas);

        /// Realizar la suma de elementos
        for (int i = 0; i < this->filas; ++i) {
                for (int j = 0; j < this->columnas; ++j) {
                    resultado.matriz[i][j] = this->matriz[i][j] + otra.matriz[i][j];
                }
            }
            return resultado;
    }
    catch (const std::exception& e){
        /// Manejar excepciones y mostrar mensaje de error
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }

    
}

/// Implementación de la sobrecarga del operador de resta para matrices
template<typename T>
OperacionesBasicas<T> OperacionesBasicas<T>::operator-(const Matriz<T> &otra) const {
    try{
        /// Verificar dimensiones antes de realizar la resta
        if (!verificarDimensiones(otra)) {
            // Lanzar una excepción u otro manejo de error
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la resta.");
        }

        /// Crear una matriz resultado con las mismas dimensiones
        OperacionesBasicas resultado(this->filas, otra.columnas);

        /// Realizar la resta de elementos
        for (int i = 0; i < this->filas; ++i) {
                for (int j = 0; j < this->columnas; ++j) {
                    //resultado.matriz[i][j] = new T(*(this->matriz[i][j]) + *(otra.matriz[i][j]));
                    resultado.matriz[i][j] = this->matriz[i][j] - otra.matriz[i][j];
                }
            }
            return resultado;
    }
    catch (const std::exception& e){
        /// Manejar excepciones y mostrar mensaje de error
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }   
}

/// Implementación de la sobrecarga del operador de multiplicación para matrices
template<typename T>
OperacionesBasicas<T> OperacionesBasicas<T>::operator*(const Matriz<T> &otra) const{
    try{
        /// Verificar dimensiones antes de realizar la multiplicación
        if (!verificarDimensionesMultiplicacion(otra)) {
            // Lanzar una excepción u otro manejo de error
            throw std::invalid_argument("Las matrices no cumplen con las dimensiones para la multiplicación.");
        }

        /// Crear una matriz resultado con las dimensiones adecuadas
        OperacionesBasicas resultado(this->filas, otra.columnas);

        /// Realizar la multiplicación de matrices
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
        /// Manejar excepciones y mostrar mensaje de error
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    } 
}
