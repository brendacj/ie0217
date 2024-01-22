#include "Matriz.hpp"

template<typename T>
Matriz<T>::Matriz() {}

template<typename T>
void Matriz<T>::tamYDatos(){
    std::cout << "Ingrese el número de filas: " ;
    std::cin >> filas;

    std::cout << "Ingrese el número de columnas";
    std::cin >> columnas;


    for( int i = 0; i <(filas); i++){
        std::vector<T*> filaVector;
        for (int j = 0; j < columnas; j++){
            std::cout << "Ingrese el número  de la posición " << i << "x" << j << ": ";
            std::cin >> numTemp;
            filaVector.push_back(new T(numTemp));
        }
        matriz.push_back(filaVector);

    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << *matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

}