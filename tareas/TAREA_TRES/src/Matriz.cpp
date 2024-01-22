#include "Matriz.hpp"

template<typename T>
Matriz<T>::Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
    for (int i = 0; i < filas; i++) {
        std::vector<T> filaVector(columnas);  // Inicializa los elementos con valores predeterminados de T
        matriz.push_back(filaVector);
    }
}


template<typename T>
int Matriz<T>::tamYDatos(){

    try{

        std::cout << "Ingrese el número de filas: " ;
            std::cin >> filas;

        if (std::cin.fail()) {
            throw std::runtime_error("Error: No es un número válido para filas");
        }

        std::cout << "Ingrese el número de columnas";
            std::cin >> columnas;

         if (std::cin.fail()) {
            throw std::runtime_error("Error: No es un número válido para columnas");
        }
    }
    catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 0;
    }

   matriz.resize(filas, std::vector<T>(columnas));

    for( int i = 0; i <(filas); i++){
        for (int j = 0; j < columnas; j++){
            std::cout << "Ingrese el número de la posición " << i << "x" << j << ": ";
            std::cin >> numTemp;
            matriz[i][j] = T(numTemp);
        }

    }


}
