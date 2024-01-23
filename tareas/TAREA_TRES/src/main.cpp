#include "Matriz.hpp"
#include <complex>
#include "OperacionesBasicas.hpp"
#include "OperacionCompleja.hpp"
#include "Imprimir.hpp"

OperacionCompleja<std::complex<float>> matriz1(1, 2);
OperacionCompleja<std::complex<float>> matriz2(1, 2);
OperacionCompleja<std::complex<float>> resultado(1, 2);
/*OperacionesBasicas<int> matriz1(1, 2);
OperacionesBasicas<int> matriz2(1, 2);
OperacionesBasicas<int> resultado(1, 2);*/




int main() {

    matriz1.tamYDatos();
    matriz2.tamYDatos();
    resultado = matriz1 * matriz2;

    Imprimir<std::complex<float>>::ImprimirMatriz(resultado, 2);

    return 0; // Fin del programa con código de retorno 0
}