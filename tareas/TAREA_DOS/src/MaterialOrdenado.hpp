/**
 * @file MaterialOrdenado.hpp
 * @brief Contiene la declaración de la clase MaterialOrdenado y los prototipos de sus métodos.
 * 
 * La clase `MaterialOrdenado` gestiona una colección de materiales de diferentes tipos, 
 * tales como libros, noticias, películas y podcasts. Proporciona funcionalidades para 
 * agregar, eliminar, buscar y mostrar estos materiales de manera ordenada.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas, se establece que si se utiliza o distribuye partes sustanciales del
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
 * La clase `MaterialOrdenado` gestiona diferentes tipos de materiales (libros, noticias, 
 * películas y podcasts) y proporciona métodos para agregar, eliminar, buscar y ordenar 
 * dichos materiales. Cada tipo de material es representado por un puntero a un objeto 
 * correspondiente (Libro, Noticia, Pelicula o Podcast).
 */
class MaterialOrdenado : public Libro, public Noticia, public Pelicula, public Podcast {
    public:
        /**
         * @brief Constructor por defecto de la clase MaterialOrdenado.
         * 
         * Inicializa los vectores de punteros para almacenar los diferentes tipos de materiales.
         */
        MaterialOrdenado();

        /**
         * @brief Destructor de la clase MaterialOrdenado.
         * 
         * Libera la memoria ocupada por los objetos almacenados en los vectores de punteros.
         * El destructor recorre cada vector y elimina los objetos correspondientes.
         */
        ~MaterialOrdenado();

        /**
         * @brief Elimina un material con el título especificado.
         * 
         * Recorre los vectores de punteros y elimina el material correspondiente al título 
         * proporcionado. Luego libera la memoria del objeto eliminado.
         * 
         * @param titulo Título del material a eliminar.
         */
        void eliminarMaterial(string titulo);

        /**
         * @brief Agrega un nuevo material a la colección.
         * 
         * Solicita los datos al usuario y agrega un nuevo objeto de tipo Libro, Noticia, 
         * Película o Podcast al vector correspondiente. El material se agrega dinámicamente 
         * usando punteros.
         */
        void agregarMaterial();

        /**
         * @brief Busca materiales por tipo (libro, noticia, película, podcast).
         * 
         * Recorre los vectores correspondientes y muestra la información de todos los materiales 
         * del tipo especificado. Los materiales se filtran por el tipo proporcionado.
         * 
         * @param material Tipo de material a buscar ("libro", "noticia", "pelicula", "podcast").
         */
        void buscarMaterial(string material);

        /**
         * @brief Busca materiales por título.
         * 
         * Recorre todos los vectores de materiales y muestra la información del material cuyo 
         * título coincida con el título proporcionado.
         * 
         * @param titulo Título del material a buscar.
         */
        void buscarTitulo(string titulo);

    protected:
        /** @brief Vector de punteros a objetos de tipo Libro, Noticia, Pelicula y Podcast. */
        std::vector<Libro*> vectorDePunterosLibro; ///< Almacena punteros a objetos de tipo Libro.
        std::vector<Noticia*> vectorDePunterosNoticia; ///< Almacena punteros a objetos de tipo Noticia.
        std::vector<Pelicula*> vectorDePunterosPelicula; ///< Almacena punteros a objetos de tipo Pelicula.
        std::vector<Podcast*> vectorDePunterosPodcast; ///< Almacena punteros a objetos de tipo Podcast.
};

#endif
