/**
 * @file MaterialPrecio.hpp
 * @brief Contiene la declaración de la clase MaterialPrecio y los prototipos de sus métodos.
 * 
 * La clase `MaterialPrecio` hereda de la clase `MaterialOrdenado` y proporciona funcionalidades 
 * adicionales para gestionar los precios de los materiales. Permite obtener, ordenar e imprimir 
 * los precios de los materiales de manera eficiente.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
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
 * La clase `MaterialPrecio` extiende la funcionalidad de la clase `MaterialOrdenado` y se 
 * encarga de obtener los precios de los materiales, ordenarlos según diferentes criterios 
 * (ascendente o descendente) y luego imprimir los materiales ordenados por su precio.
 */
class MaterialPrecio : public MaterialOrdenado {
    public:

        /**
         * @brief Constructor por defecto de la clase MaterialPrecio.
         * 
         * Inicializa un objeto de la clase `MaterialPrecio` sin realizar ninguna operación adicional
         * al momento de la creación del objeto.
         */
        MaterialPrecio();

        /**
         * @brief Obtiene los precios de todos los materiales y los devuelve en un vector.
         * 
         * Este método recorre los vectores de punteros a objetos de tipo Libro, Noticia, Pelicula y 
         * Podcast, extrayendo los precios de cada objeto y almacenándolos en un vector de punteros
         * a `double`. Los precios se almacenan dinámicamente.
         * 
         * @return std::vector<double*> Un vector de punteros que contiene los precios de los materiales.
         */
        std::vector<double*> obtenerPrecios();

        /**
         * @brief Ordena el vector de precios de manera ascendente o descendente según el parámetro.
         * 
         * Este método implementa el algoritmo de ordenación por burbuja (Bubble Sort) para ordenar 
         * el vector de precios. El ordenamiento se puede realizar de forma ascendente o descendente, 
         * dependiendo del valor del parámetro `deOrAs`.
         * 
         * @param vectorDePrecios Vector de punteros a los precios de los materiales que se desean ordenar.
         * @param deOrAs Un booleano que indica si el orden debe ser ascendente (`true`) o descendente (`false`).
         */
        void bubbleSort(std::vector<double*>& vectorDePrecios, bool deOrAs);

        /**
         * @brief Imprime los materiales ordenados por precio.
         * 
         * Este método recorre el vector de precios ordenados y para cada precio, recorre los 
         * vectores de materiales (Libro, Noticia, Pelicula, Podcast) y muestra la información de 
         * todos los materiales cuyo precio coincida con el precio actual.
         * 
         * @param vectorDePrecios Un vector de punteros que contiene los precios de los materiales ordenados.
         */
        void imprimirPorPrecio(std::vector<double*>& vectorDePrecios);
};

#endif
