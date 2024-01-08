#include "funciones.hpp"
#include <string>
#include <cstdlib>
#include <ctime>

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
        std::cout << "\nModo dificil\n";
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


int obtenerAleatorio(int fin, int inicio){

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    return (std::rand() % (fin - inicio + 1) + inicio);
}