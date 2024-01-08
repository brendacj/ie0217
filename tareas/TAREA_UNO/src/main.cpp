#include <iostream>
#include "funciones.hpp"

int main(int argc, char* argv[]) {
    while(1){
        JuegoDatos datos;
        mostrarMenu(argc, argv);
        procesarOpcion(argc, argv, datos);
    }

    return 0;
}