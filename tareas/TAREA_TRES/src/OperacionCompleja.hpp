/**
 * @file Operacioncompleja.hpp
 * @brief Contiene la declaración de la clase Operacionescomplejas y los prototipos de sus métodos.
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef COMPLEJA_H
#define COMPLEJA_H

#include <iostream>
#include "Matriz.hpp"

/**
 * @brief Clase plantilla para realizar operaciones complejas con matrices.
 * 
 * Esta clase hereda de la clase Matriz y proporciona operaciones de suma,
 * resta y multiplicación específicas para matrices de tipo complejo.
 * 
 * @tparam T Tipo de datos de los elementos de la matriz (debe ser de tipo complejo).
 */
template <typename T>
class OperacionCompleja : public Matriz<T> {
    public:
        /**
         * @brief Constructor de la clase OperacionCompleja.
         * 
         * Crea una instancia de OperacionCompleja con las dimensiones especificadas.
         * 
         * @param filas Número de filas de la matriz.
         * @param columnas Número de columnas de la matriz.
         */
        OperacionCompleja(int filas, int columnas);

        /**
         * @brief Verifica si las dimensiones de la matriz actual son iguales a las de otra matriz.
         * 
         * @param otra Matriz con la que se desea verificar las dimensiones.
         * @return true si las dimensiones son iguales, false en caso contrario.
         */
        bool verificarDimensiones(const Matriz<T>& otra) const;

        /**
         * @brief Verifica si las dimensiones de la matriz actual son adecuadas para la multiplicación.
         * 
         * @param otra Matriz con la que se desea verificar las dimensiones para la multiplicación.
         * @return true si las dimensiones son adecuadas, false en caso contrario.
         */
        bool verificarDimensionesMultiplicacion(const Matriz<T>& otra) const;

        /**
         * @brief Sobrecarga del operador de suma para matrices complejas.
         * 
         * @param otraMatriz Matriz que se sumará a la matriz actual.
         * @return Nueva matriz resultante de la suma.
         */
        OperacionCompleja<T> operator+(const Matriz<T>& otraMatriz) const;

        /**
         * @brief Sobrecarga del operador de resta para matrices complejas.
         * 
         * @param otraMatriz Matriz que se restará de la matriz actual.
         * @return Nueva matriz resultante de la resta.
         */
        OperacionCompleja<T> operator-(const Matriz<T>& otraMatriz) const;

        /**
         * @brief Sobrecarga del operador de multiplicación para matrices complejas.
         * 
         * @param otraMatriz Matriz que se multiplicará por la matriz actual.
         * @return Nueva matriz resultante de la multiplicación.
         */
        OperacionCompleja<T> operator*(const Matriz<T>& otraMatriz) const;

};

#include "OperacionCompleja.cpp"

#endif