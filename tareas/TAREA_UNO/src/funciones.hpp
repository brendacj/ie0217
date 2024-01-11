/**
 * @file funciones.hpp
 * @brief Contiene las funciones principales para el juego de adivinar el entero.
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */

#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * @struct JuegoDatos
 * @brief Estructura que contiene datos relevantes para el juego.
 */

struct JuegoDatos {
    int inicio;         /**< Valor inicial del rango para adivinar. */
    int fin;            /**< Valor final del rango para adivinar. */
    int numAleatorio;   /**< Número aleatorio generado para adivinar. */
    int numContador;    /**< Contador de intentos restantes. */
    int numAdivina;     /**< Número ingresado por el usuario para adivinar. */
};

/**
 * @brief Muestra el menú del juego.
 * @param argc Número de argumentos de la línea de comandos.
 * @param argv Arreglo de argumentos de la línea de comandos.
 */

void mostrarMenu(int argc, char* argv[]);

/**
 * @brief Procesa la opción seleccionada por el usuario.
 * @param argc Número de argumentos de la línea de comandos.
 * @param argv Arreglo de argumentos de la línea de comandos.
 * @param datos Estructura que contiene los datos del juego.
 */
void procesarOpcion(int argc, char* argv[], JuegoDatos& datos);

/**
 * @brief Inicia el juego en modo fácil.
 * @param argv Arreglo de argumentos de la línea de comandos.
 * @param datos Estructura que contiene los datos del juego.
 */
void juegoFacil(char* argv[], JuegoDatos datos);

/**
 * @brief Inicia el juego en modo difícil.
 * @param datos Estructura que contiene los datos del juego.
 */
void juegoDificil(JuegoDatos datos);

/**
 * @brief Obtiene un número aleatorio dentro del rango dado.
 * @param fin Valor final del rango.
 * @param inicio Valor inicial del rango.
 * @return Número aleatorio dentro del rango.
 */
int obtenerAleatorio(int fin, int inicio);

#endif