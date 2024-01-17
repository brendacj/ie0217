/**
 * @file MaterialPrecio.hpp
 * @brief Contiene la declaración de la clase MaterialPrecio y los prototipos de sus métodos
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef PRECIO_HPP
#define PRECIO_HPP
#include "MaterialOrdenado.hpp"
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"
#include <algorithm>
#include <vector>

#include <iostream>
using namespace std;

/**
 * @brief Clase que gestiona los precios de los materiales.
 *
 * Esta clase hereda la clase MaterialOrdenado publicamente y
 * proporciona funcionalidades para gestionar y manipular los precios.
 */
class MaterialPrecio : public MaterialOrdenado {
    public:

         /**
         * @brief Constructor por defecto de la clase MaterialPrecio.
         */
        MaterialPrecio();

            /**
         * @brief Obtiene los precios de todos los materiales y los devuelve en un vector.
         * @return Vector de punteros a los precios de los materiales.
         */
        std::vector<double*> obtenerPrecios();

            /**
         * @brief Ordena el vector de precios de manera ascendente o descendente según el parámetro.
         * @param vectorDePrecios Vector de punteros a los precios a ordenar.
         * @param deOrAs Indica si la ordenación es ascendente (true) o descendente (false).
         */
        void bubbleSort(std::vector<double*>& vectorDePrecios, bool deOrAs);

            /**
         * @brief Imprime los materiales ordenados por precio.
         * @param vectorDePrecios Vector de punteros a los precios a imprimir.
         */
        void imprimirPorPrecio(std::vector<double*>& vectorDePrecios);
        

};


#endif