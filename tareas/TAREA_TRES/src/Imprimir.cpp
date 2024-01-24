/**
 * @file OperacionesBasicas.cpp
 * @brief Contiene la implementación de los métodos de la clase OperacionesBasicas
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "Imprimir.hpp"

/// Implementación del método para imprimir una matriz en la consola
template <typename T>
void Imprimir<T>::ImprimirMatriz(const Matriz<T>& matrizImprimir, int num) {
    /// Bucle para recorrer las filas de la matriz
    for (int i = 0; i < matrizImprimir.filas; ++i) {
        /// Bucle para recorrer las columnas de la matriz
        for (int j = 0; j < matrizImprimir.columnas; ++j) {
            /// Verifica si se deben imprimir elementos de la matriz regular o de la matriz de números complejos
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