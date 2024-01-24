/**
 * @file Imprimir.hpp
 * @brief Contiene la declaración de la clase Imprimir y los prototipos de sus métodos.
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef IMPRIMIR_H
#define IMPRIMIR_H

#include "Matriz.hpp"
#include "OperacionCompleja.hpp"
#include <iostream>

/**
 * @brief Clase plantilla para imprimir matrices en la consola.
 * 
 * @tparam T Tipo de datos de los elementos de la matriz.
 */
template <typename T>
class Imprimir {
public:

    /**
     * @brief Imprime una matriz en la consola con un método estático.
     * 
     * @param matriz Matriz que se imprimirá.
     * @param num identificador para saber si se trata de una matriz compleja.
     */
    static void ImprimirMatriz(const Matriz<T>& matriz, int num);
};

#include "Imprimir.cpp"

#endif