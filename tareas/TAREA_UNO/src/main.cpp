#include <iostream>
#include "funciones.hpp"

int main(int argc, char* argv[]) {
    while(1){
        mostrarMenu(argc, argv);
        procesarOpcion(argc, argv);
    }

    return 0;
}