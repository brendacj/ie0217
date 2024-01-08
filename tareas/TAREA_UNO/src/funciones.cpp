#include "funciones.hpp"
#include <string>

void mostrarMenu(int argc, char* argv[]) {
    std::cout << "\n --- Adivina el entero ---\n";
    std::cout << "\n El numero se encuentra entre "<< argv[1] << " y " << argv[2]<< "\n";
    std::cout << " 1.Modo facil\n";
    std::cout << " 2.Modo dificil\n";
    std::cout << " 3.Salir\n";
}

void procesarOpcion(){
    int opcion;
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar empleado
        std::cout << "\nModo facil\n";
        break;

    case 2: // Lista empleados
        std::cout << "\nModo dificil\n";
        break;

    case 3: //Salir
        std::cout << "\nSaliendo del programa...\n";
        exit(0);
    
    default:
        std::cout << "\nOpcion invalida\n";
    }
}