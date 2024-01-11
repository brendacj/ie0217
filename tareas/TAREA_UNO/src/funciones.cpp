
/**
 * @file funcioness.cpp
 * @brief Contiene el desarrollo e implementación de las funciones usadas en el programa.
 * 
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */

// Blibliotecas necesarias
#include "funciones.hpp"
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

/**
 * @brief Muestra el menú del juego con el rango disponible.
 * @param argc Número de argumentos de la línea de comandos.
 * @param argv Arreglo de argumentos de la línea de comandos.
 */
void mostrarMenu(int argc, char* argv[]) {
    // Mensajes de bienvenida y opciones disponibles
    std::cout << "\n --- Adivina el entero ---\n";
    std::cout << "\n El numero se encuentra entre "<< argv[1] << " y " << argv[2]<< "\n";
    std::cout << " 1.Modo facil\n";
    std::cout << " 2.Modo dificil\n";
    std::cout << " 3.Salir\n";
}

/**
 * @brief Procesa la opción seleccionada por el usuario.
 * @param argc Número de argumentos de la línea de comandos.
 * @param argv Arreglo de argumentos de la línea de comandos.
 * @param datos Estructura de datos del juego.
 */
void procesarOpcion(int argc, char* argv[], JuegoDatos& datos){
    int opcion;
    // Solicitar al usuario que elija una opción
    std::cout << "\nIngrese una opcion: ";
    std::cin >> opcion;

    // Configurar datos del juego según los argumentos de la línea de comandos
    // Estas son las mismas para cualquier modo de juego
    datos.inicio = std::atoi(argv[1]);
    datos.fin = std::atoi(argv[2]);
    datos.numContador = (datos.fin - datos.inicio)/3;

    // Seleccionar la acción según la opción elegida
    switch (opcion)
    {
    case 1: 
        // Iniciar juego fácil
        juegoFacil(argv, datos);
        break;

    case 2: 
        // Iniciar juego difícil
        juegoDificil(datos);
        break;

    case 3: 
        // Sale del programa
        std::cout << "\nSaliendo del programa...\n";
        exit(0);
    
    default:
        // Opción invalida
        std::cout << "\nOpcion invalida\n";
    }
}

/**
 * @brief Implementa el juego en modo fácil.
 * @param argv Arreglo de argumentos de la línea de comandos.
 * @param datos Estructura de datos del juego.
 */
void juegoFacil(char* argv[], JuegoDatos datos){

    // Generar un número aleatorio que el jugador debe adivinar
    datos.numAleatorio = obtenerAleatorio(datos.fin, datos.inicio);

    std::cout << "Quedan " << datos.numContador << " intentos\n";

    // Ciclo principal del juego
    while (datos.numContador > 0){

        // Solicitar al jugador que ingrese un número y guardarlo
        std::cout << "Ingrese un numero: ";
        std::cin >> datos.numAdivina;

         // Comparar el número ingresado con el número aleatorio (Mayor, menor o igual)
         // Imprime mensaje y disminuye los intentos o rompe el ciclo
        if (datos.numAdivina < datos.numAleatorio){
            datos.numContador--;
            std::cout << "\nEl numero es mayor." << " Quedan " << datos.numContador << " intentos\n";

        }else if (datos.numAdivina > datos.numAleatorio){
            datos.numContador--;
            std::cout << "\nEl numero es menor." << " Quedan " << datos.numContador << " intentos\n";

        }else{
            std::cout << "\nFelicidades! Haz adivinado el numero\n";
            break;

        }

    } if (datos.numContador <= 0){ // Verificar si se agotaron los intentos
        std::cout << "Se acabaron los intentos, haz perdido";
    }
}

/**
 * @brief Implementa el juego en modo difícil.
 * @param datos Estructura de datos del juego.
 */
void juegoDificil(JuegoDatos datos){
    // Generar un número aleatorio que el jugador debe adivinar
    datos.numAleatorio = obtenerAleatorio(datos.fin, datos.inicio);

    std::cout << "Quedan " << datos.numContador << " intentos\n";

    // Ciclo principal del juego
    while (datos.numContador > 0){
        // Solicitar al jugador que ingrese un número
        std::cout << "Ingrese un numero: ";
        std::cin >> datos.numAdivina;

        // Valor absoluto de la distancia entre el número aletorio y el intento
        int diferencia = std::abs(datos.numAdivina - datos.numAleatorio);

        // Si el número intento es igual al aleatorio ganó
        if (datos.numAdivina == datos.numAleatorio){
            std::cout << "\nFelicidades! Haz adivinado el numero\n";
            break;
        
        // Si la diferencia es menor que 1/9 del intervalo
        }else if (diferencia <= (datos.fin - datos.inicio) / 9){
            datos.numContador--;
            std::cout << "\nHirviendo." << " Quedan " << datos.numContador << " intentos\n";

        // Si la diferencia es menor que 1/4 del intervalo
        }else if (diferencia <= (datos.fin - datos.inicio) / 4){
            datos.numContador--;
            std::cout << "\nCaliente." << " Quedan " << datos.numContador << " intentos\n";

        // Si la diferencia es menor que 1/2 del intervalo
        }else if (diferencia <= (datos.fin - datos.inicio) / 2){
            datos.numContador--;
            std::cout << "\nFrio." << " Quedan " << datos.numContador << " intentos\n";

        // Si está más lejos
        }else{
            datos.numContador--;
            std::cout << "\nCongelado." << " Quedan " << datos.numContador << " intentos\n";
        }
    // Verificar si se acabaron los intentos
    } if (datos.numContador <= 0){
        std::cout << "Se acabaron los intentos, haz perdido";
    }
}

/**
 * @brief Obtiene el número aletorio a adivinar
 * @param fin Valor final del rango.
 * @param inicio Valor inicial del rango.
 */
int obtenerAleatorio(int fin, int inicio){

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    return (std::rand() % (fin - inicio + 1) + inicio);
}