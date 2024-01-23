#include "Imprimir.hpp"

template <typename T>
void Imprimir<T>::ImprimirMatriz(const Matriz<T>& matrizImprimir, int num) {
    for (int i = 0; i < matrizImprimir.filas; ++i) {
        for (int j = 0; j < matrizImprimir.columnas; ++j) {
            if (num == 1){
                std::cout << matrizImprimir.matriz[i][j] << " ";
            }
            else{
                std::cout << matrizImprimir.matrizC[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}