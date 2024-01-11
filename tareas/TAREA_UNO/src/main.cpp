/**
 * @file main.cpp
 * @brief Función principal del juego.
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */

// Bibliotecas necesarias
#include <iostream>
#include "funciones.hpp"

/**
 * Este programa implementa un juego de adivinanza en un bucle continuo.
 * El usuario puede elegir entre diferentes modos y opciones hasta que decide salir.
 *
 * @param argc Cantidad de argumentos de la línea de comandos.
 * @param argv Arreglo de cadenas que contiene los argumentos de la línea de comandos.
 * @return Código de retorno del programa (0 para una ejecución exitosa).
 */
int main(int argc, char* argv[]) {
    while(1){  // Bucle principal que se ejecuta indefinidamente
        JuegoDatos datos; // Se crea una nueva instancia de la estructura JuegoDatos
        mostrarMenu(argc, argv); // Se llama a la función que muestra el menú del juego
        procesarOpcion(argc, argv, datos); // Se llama a la función que procesa la opción del usuario
    }

    return 0; // Fin del programa con código de retorno 0
}