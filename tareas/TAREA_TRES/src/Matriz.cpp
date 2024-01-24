/**
 * @file Matriz.cpp
 * @brief Contiene la implementación de los métodos de la clase Matriz
 * @details Este software está sujeto a los términos y condiciones de la Licencia MIT.
 * Entre otras cosas se establece que si se utiliza o distribuye partes sustanciales del
 * programa, se deben incluir el aviso de derechos de autor y el aviso de permiso en tu distribución.
 */
#include "Matriz.hpp"

/// Implementación del constructor de la clase Matriz
template<typename T>
Matriz<T>::Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
    /// Inicializa la matriz y la matrizC con el tamaño especificado de filas y columnas
    for (int i = 0; i < filas; i++) {
        std::vector<T> filaVector(columnas);
        std::vector<std::complex<float>> filaVectorC(columnas);
        matriz.push_back(filaVector);
        matrizC.push_back(filaVectorC);
    }
}

/// Implementación del método tamYDatos de la clase Matriz
template<typename T>
void Matriz<T>::tamYDatos(){

    try{
        /// Solicita al usuario que ingrese el número de filas
        std::cout << "Ingrese el número de filas: " ;
            std::cin >> filas;

        /// Verifica si la entrada es válida para el número de filas
        if (std::cin.fail()) {
            throw std::runtime_error("No es un número válido para filas");
        }

        /// Solicita al usuario que ingrese el número de columnas
        std::cout << "Ingrese el número de columnas: ";
            std::cin >> columnas;
        
        /// Verifica si la entrada es válida para el número de columnas
         if (std::cin.fail()) {
            throw std::runtime_error("No es un número válido para columnas");
        }
    }
    catch (const std::exception& e) {
        /// Maneja cualquier excepción que pueda ocurrir durante la entrada de datos
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE); /// Termina el programa con un código de error
    }

    /// Redimensiona la matriz y la matrizC según los valores de filas y columnas ingresados
    matriz.resize(filas, std::vector<T>(columnas));
    matrizC.resize(filas, std::vector<std::complex<float>>(columnas));

    /// Bucle para ingresar cada valor en la matriz y la matrizC
    for( int i = 0; i <(filas); i++){
         for (int j = 0; j < columnas; j++){
            
            /// Si el tipo de dato es float o int, solicita un valor y lo asigna a la matriz
            if (std::is_same<T, float>::value || std::is_same<T, int>::value) {
                T numTemp;
                try{
                    std::cout << "Ingrese el valor en la posición " << i << "x" << j << ": ";
                    std::cin >> numTemp; 
                    /// Verifica si la entrada es válida para el tipo de dato especificado
                    if (std::cin.fail()) {
                    throw std::runtime_error("No es un número válido para el tipo especificado");
                    }
                } catch (const std::exception& e){
                    /// Maneja el error arrojado
                    std::cerr << "Error: " << e.what() << std::endl;
                    exit(EXIT_FAILURE);
                }
                matriz[i][j] = numTemp;

            }else {
                /// Si el tipo de dato es otro, como complejo, solicita partes real e imaginaria
                std::complex<float> numTemp;
                float realPart;
                float imagPart;
                try{
                    std::cout << "Ingrese la parte real del número complejo en la posición " << i << "x" << j << ": ";
                    std::cin >> realPart;

                    /// Verifica si la entrada es válida para la parte real
                    if (std::cin.fail()) {
                    throw std::runtime_error("No es un número válido para el tipo especificado");
                    }

                    std::cout << "Ingrese la parte imaginaria del número complejo en la posición " << i << "x" << j << ": ";
                    std::cin >> imagPart;

                    /// Verifica si la entrada es válida para la parte imaginaria
                    if (std::cin.fail()) {
                    throw std::runtime_error("No es un número válido para el tipo especificado");
                    }

                } catch (const std::exception& e){
                    /// Maneja el error arrojado
                    std::cerr << "Error: " << e.what() << std::endl;
                    exit(EXIT_FAILURE);
                }

                /// Crea el número complejo y lo asigna a la matrizC
                numTemp = std::complex<float>(realPart, imagPart);
                matrizC[i][j] = numTemp;
            }
        }
    }


}
