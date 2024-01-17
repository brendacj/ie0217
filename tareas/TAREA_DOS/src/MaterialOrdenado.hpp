/**
 * @file MaterialOrdenado.hpp
 * @brief Contiene la declaración de la clase MaterialOrdenado y los prototipos de sus métodos
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#ifndef ORDENADO_HPP
#define ORDENADO_HPP
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"
#include <vector>


#include <iostream>
using namespace std;

/**
 * @brief Clase que representa un conjunto de materiales ordenados.
 *
 * Esta clase hereda de las clases específicas de material (Libro, Noticia, Pelicula, Podcast) y
 * proporciona funcionalidades para gestionar y manipular dichos materiales de manera ordenada.
 */
class MaterialOrdenado : public Libro, public Noticia, public Pelicula, public Podcast {
    public:
            /**
         * @brief Constructor por defecto de la clase MaterialOrdenado.
         */
        MaterialOrdenado();

        /**
         * @brief Destructor de la clase MaterialOrdenado.
         */
        ~MaterialOrdenado();

            /**
         * @brief Elimina un material con el título especificado.
         *
         * @param titulo Título del material a eliminar.
         */
        void eliminarMaterial(string titulo);

            /**
         * @brief Agrega un nuevo material a la colección.
         */
        void agregarMaterial();

            /**
         * @brief Busca materiales por tipo (libro, noticia, película, podcast).
         *
         * @param material Tipo de material a buscar.
         */
        void buscarMaterial(string material);

            /**
         * @brief Busca materiales por título.
         *
         * @param titulo Título del material a buscar.
         */
        void buscarTitulo(string titulo);
    protected:
        /// @brief Vector de punteros a objetos de tipo Libro., Noticia, Pelicula y Podcast
        std::vector<Libro*> vectorDePunterosLibro; 
        std::vector<Noticia*> vectorDePunterosNoticia;
        std::vector<Pelicula*> vectorDePunterosPelicula;
        std::vector<Podcast*> vectorDePunterosPodcast;


};

#endif