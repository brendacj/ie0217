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

void procesarOpcion(int argc, char* argv[]){
    int opcion;
    std::cout << "\nIngrese una opcion: ";
    std::cin >> opcion;

    switch (opcion)
    {
    case 1: 
        juegoFacil(argc, argv);
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

void juegoFacil(int argc, char* argv[]){

    int inicio = std::atoi(argv[1]);
    int fin = std::atoi(argv[2]);

    int numAleatorio = obtenerAleatorio(fin, inicio);

    int numContador = (fin - inicio)/3;

    int numAdivina;

    std::cout << "Quedan " << numContador << " intentos\n";

    while (numContador > 0){

        std::cout << "Ingrese un numero: ";
        std::cin >> numAdivina;

        if (numAdivina < numAleatorio){
            numContador--;
            std::cout << "\nEl numero es mayor." << " Quedan " << numContador << " intentos\n";
        }else if (numAdivina > numAleatorio){
            numContador--;
            std::cout << "\nEl numero es menor." << " Quedan " << numContador << " intentos\n";
        }else{
            std::cout << "\nFelicidades! Haz adivinado el numero\n";
            break;
        }
    } if (numContador <= 0){
        std::cout << "Se acabaron los intentos, haz perdido";
    }
}

int obtenerAleatorio(int fin, int inicio){

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    return (std::rand() % (fin - inicio + 1) + inicio);
}