#include "funciones.hpp"
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

void mostrarMenu(int argc, char* argv[]) {
    std::cout << "\n --- Adivina el entero ---\n";
    std::cout << "\n El numero se encuentra entre "<< argv[1] << " y " << argv[2]<< "\n";
    std::cout << " 1.Modo facil\n";
    std::cout << " 2.Modo dificil\n";
    std::cout << " 3.Salir\n";
}

void procesarOpcion(int argc, char* argv[], JuegoDatos& datos){
    int opcion;
    std::cout << "\nIngrese una opcion: ";
    std::cin >> opcion;

    datos.inicio = std::atoi(argv[1]);
    datos.fin = std::atoi(argv[2]);
    datos.numContador = (datos.fin - datos.inicio)/3;

    switch (opcion)
    {
    case 1: 
        juegoFacil(argv, datos);
        break;

    case 2: 
        juegoDificil(datos);
        break;

    case 3: 
        std::cout << "\nSaliendo del programa...\n";
        exit(0);
    
    default:
        std::cout << "\nOpcion invalida\n";
    }
}

void juegoFacil(char* argv[], JuegoDatos datos){

    datos.numAleatorio = obtenerAleatorio(datos.fin, datos.inicio);
    std::cout << datos.numAleatorio;

    std::cout << "Quedan " << datos.numContador << " intentos\n";

    while (datos.numContador > 0){

        std::cout << "Ingrese un numero: ";
        std::cin >> datos.numAdivina;

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
    } if (datos.numContador <= 0){
        std::cout << "Se acabaron los intentos, haz perdido";
    }
}

void juegoDificil(JuegoDatos datos){
    datos.numAleatorio = obtenerAleatorio(datos.fin, datos.inicio);
    std::cout << datos.numAleatorio;

    std::cout << "Quedan " << datos.numContador << " intentos\n";

    while (datos.numContador > 0){

        std::cout << "Ingrese un numero: ";
        std::cin >> datos.numAdivina;

        int diferencia = std::abs(datos.numAdivina - datos.numAleatorio);

        if (datos.numAdivina == datos.numAleatorio){
            std::cout << "\nFelicidades! Haz adivinado el numero\n";
            break;

        }else if (diferencia <= (datos.fin - datos.inicio) / 9){
            datos.numContador--;
            std::cout << "\nHirviendo." << " Quedan " << datos.numContador << " intentos\n";

        }else if (diferencia <= (datos.fin - datos.inicio) / 4){
            datos.numContador--;
            std::cout << "\nCaliente." << " Quedan " << datos.numContador << " intentos\n";

        }else if (diferencia <= (datos.fin - datos.inicio) / 2){
            datos.numContador--;
            std::cout << "\nFrio." << " Quedan " << datos.numContador << " intentos\n";
        }else{
            datos.numContador--;
            std::cout << "\nCongelado." << " Quedan " << datos.numContador << " intentos\n";
        }
    } if (datos.numContador <= 0){
        std::cout << "Se acabaron los intentos, haz perdido";
    }
}

int obtenerAleatorio(int fin, int inicio){

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    return (std::rand() % (fin - inicio + 1) + inicio);
}