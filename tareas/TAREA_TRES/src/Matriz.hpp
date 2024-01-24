/**
 * @file Matriz.hpp
 * @brief Contiene la declaración de la clase Matriz y los prototipos de sus métodos.
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <limits> 
#include <complex>
#include <type_traits>

/**
 * @brief Clase plantilla para representar una matriz genérica.
 * 
 * Esta clase proporciona una implementación básica de una matriz con un número
 * específico de filas y columnas. Puede contener elementos de cualquier tipo
 * de datos especificado por el usuario.
 * 
 * @tparam T Tipo de datos de los elementos de la matriz.
 */

template <typename T>
class Matriz{
    public:
        /**
         * @brief Constructor de la clase Matriz.
         * 
         * Crea una matriz con la cantidad especificada de filas y columnas
         * con la intención de redimencionarla al llamar el métofo tamYDatos.
         * 
         * @param filas Número de filas de la matriz.
         * @param columnas Número de columnas de la matriz.
         */
        Matriz(int filas, int columnas);

        /**
         * @brief Método para obtener el tamaño y datos de la matriz.
         * 
         * Solicita al usuario que ingrese el número de filas y columnas para la matriz.
         * También inicializa la matriz con los datos ingresados por el usuario.
         * 
         * @return 0 si se ejecuta correctamente.
         */
        int tamYDatos();

        int filas; /**< Número de filas de la matriz. */
        int columnas; /**< Número de columnas de la matriz. */
        std::vector<std::vector<T>> matriz; /**< Matriz de elementos del tipo T. */
        std::vector<std::vector<std::complex<float>>> matrizC; /**< Matriz de elementos complejos. */

};

#include "Matriz.cpp"

#endif