/**
 * @file OperacionCompleja.cpp
 * @brief Contiene la implementación de los métodos de la clase OperacionCompleja
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "OperacionCompleja.hpp"

/// Implementación del constructor de la clase OperacionCompleja
template<typename T>
OperacionCompleja<T>::OperacionCompleja(int filas, int columnas) : Matriz<T>(filas, columnas) {}

/// Implementación del método para verificar si las dimensiones son iguales a las de otra matriz
template<typename T>
bool OperacionCompleja<T>::verificarDimensiones(const Matriz<T>& otra) const {
    return this->filas == otra.filas && this->columnas == otra.columnas;
}

/// Implementación del método para verificar si las dimensiones son adecuadas para la multiplicación
template<typename T>
bool OperacionCompleja<T>::verificarDimensionesMultiplicacion(const Matriz<T>& otra) const {
    return this->columnas == otra.filas;
}

/// Implementación de la sobrecarga del operador de suma para matrices complejas
template<typename T>
OperacionCompleja<T> OperacionCompleja<T>::operator+(const Matriz<T> &otra) const {
    try{
        /// Verificar dimensiones antes de realizar la suma
        if (!verificarDimensiones(otra)) {
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la suma.");
        }

        /// Crear una matriz resultado con las mismas dimensiones
        OperacionCompleja resultado(this->filas, otra.columnas);

        /// Realizar la suma de cada uno de los elementos complejos
        for (int i = 0; i < this->filas; ++i) {
                for (int j = 0; j < this->columnas; ++j) {
                    resultado.matrizC[i][j] = this->matrizC[i][j] + otra.matrizC[i][j];
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

/// Implementación de la sobrecarga del operador de resta para matrices complejas
template<typename T>
OperacionCompleja<T> OperacionCompleja<T>::operator-(const Matriz<T> &otra) const {
    try{
        /// Verificar dimensiones antes de realizar la resta
        if (!verificarDimensiones(otra)) {
            // Lanzar una excepción u otro manejo de error
            throw std::invalid_argument("Las matrices no tienen las mismas dimensiones para la resta.");
        }

        /// Crear una matriz resultado con las mismas dimensiones
        OperacionCompleja resultado(this->filas, otra.columnas);

        /// Realizar la resta de cada uno de los elementos complejos
        for (int i = 0; i < this->filas; ++i) {
                for (int j = 0; j < this->columnas; ++j) {
                    resultado.matrizC[i][j] = this->matrizC[i][j] - otra.matrizC[i][j];
                }
            }
            return resultado;
    }
    /// Manejar excepciones y mostrar mensaje de error
    catch (const std::exception& e){
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    } 
    
}

/// Implementación de la sobrecarga del operador de multiplicación para matrices complejas
template<typename T>
OperacionCompleja<T> OperacionCompleja<T>::operator*(const Matriz<T> &otra) const{
    try{
        /// Verificar dimensiones antes de realizar la multiplicación
        if (!verificarDimensionesMultiplicacion(otra)) {
            // Lanzar una excepción u otro manejo de error
            throw std::invalid_argument("Las matrices no cumplen con las dimensiones para la multiplicación.");
        }

        /// Crear una matriz resultado con las dimensiones adecuadas
        OperacionCompleja resultado(this->filas, otra.columnas);

        /// Realizar la multiplicación de matrices complejas
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
        /// Manejar excepciones y mostrar mensaje de error
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    } 
}
