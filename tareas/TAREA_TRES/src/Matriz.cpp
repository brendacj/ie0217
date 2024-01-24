#include "Matriz.hpp"

template<typename T>
Matriz<T>::Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
    for (int i = 0; i < filas; i++) {
        std::vector<T> filaVector(columnas);
        std::vector<std::complex<float>> filaVectorC(columnas);
        matriz.push_back(filaVector);
        matrizC.push_back(filaVectorC);
    }
}


template<typename T>
int Matriz<T>::tamYDatos(){

    try{

        std::cout << "Ingrese el número de filas: " ;
            std::cin >> filas;

        if (std::cin.fail()) {
            throw std::runtime_error("No es un número válido para filas");
        }

        std::cout << "Ingrese el número de columnas";
            std::cin >> columnas;

         if (std::cin.fail()) {
            throw std::runtime_error("No es un número válido para columnas");
        }
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        //std::cout << e.what() << std::endl;
        //std::cin.clear();
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        exit(EXIT_FAILURE);
        //return 0;
    }

   matriz.resize(filas, std::vector<T>(columnas));
   matrizC.resize(filas, std::vector<std::complex<float>>(columnas));

    for( int i = 0; i <(filas); i++){
         for (int j = 0; j < columnas; j++){

            //T numTemp;
            if (std::is_same<T, float>::value || std::is_same<T, int>::value) {
                T numTemp;
                try{
                    std::cout << "Ingrese el valor en la posición " << i << "x" << j << ": ";
                    std::cin >> numTemp; 
                    if (std::cin.fail()) {
                    throw std::runtime_error("No es un número válido para el tipo especificado");
                    }
                } catch (const std::exception& e){
                    std::cerr << "Error: " << e.what() << std::endl;
                    exit(EXIT_FAILURE);
                }
                matriz[i][j] = numTemp;

            }else {
                std::complex<float> numTemp;
                float realPart;
                float imagPart;
                try{
                    std::cout << "Ingrese la parte real del número complejo en la posición " << i << "x" << j << ": ";
                    std::cin >> realPart;

                    if (std::cin.fail()) {
                    throw std::runtime_error("No es un número válido para el tipo especificado");
                    }

                    std::cout << "Ingrese la parte imaginaria del número complejo en la posición " << i << "x" << j << ": ";
                    std::cin >> imagPart;

                    if (std::cin.fail()) {
                    throw std::runtime_error("No es un número válido para el tipo especificado");
                    }
                    
                } catch (const std::exception& e){
                    std::cerr << "Error: " << e.what() << std::endl;
                    exit(EXIT_FAILURE);
                }

                numTemp = std::complex<float>(realPart, imagPart);
                matrizC[i][j] = numTemp;
            }

            //matriz[i][j] = numTemp;
        }
    }


}
