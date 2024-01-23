#include "Matriz.hpp"
#include <complex>
#include "OperacionesBasicas.hpp"

OperacionesBasicas<std::complex<float>> matriz1(1, 2);
OperacionesBasicas<std::complex<float>> matriz2(1, 2);
OperacionesBasicas<std::complex<float>> resultado(1, 2);




int main() {

    matriz1.tamYDatos();
    matriz2.tamYDatos();
    resultado = matriz1 * matriz2;
    resultado.Imprimir();
    

    return 0; // Fin del programa con código de retorno 0
}