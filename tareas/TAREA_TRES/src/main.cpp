#include "Matriz.hpp"
#include <complex>
#include "OperacionesBasicas.hpp"
#include "OperacionCompleja.hpp"
#include "Imprimir.hpp"

/*OperacionCompleja<std::complex<float>> matriz1(1, 2);
OperacionCompleja<std::complex<float>> matriz2(1, 2);
OperacionCompleja<std::complex<float>> resultado(1, 2);
OperacionesBasicas<int> matriz1(1, 2);
OperacionesBasicas<int> matriz2(1, 2);
OperacionesBasicas<int> resultado(1, 2);*/

void tipoDeDato();
void opcionDato();
char operacionVerificar();



int main() {
    tipoDeDato();
    opcionDato();
    /*matriz1.tamYDatos();
    matriz2.tamYDatos();
    resultado = matriz1 * matriz2;

    Imprimir<std::complex<float>>::ImprimirMatriz(resultado, 2);*/

    return 0; // Fin del programa con código de retorno 0
}

void tipoDeDato(){
    std::cout << "\n --- Operaciones con matriciales: Tipos de datos para la matriz ---\n";
    std::cout << " 1.Matriz de enteros\n";
    std::cout << " 2.Matriz de flotantes\n";
    std::cout << " 3.Matriz compleja\n";
}

void opcionDato(){
    int opcionDato;
    try{
        std::cout << "Ingrese una opción: ";
        std::cin  >> opcionDato;
        if (std::cin.fail() || (opcionDato != 1 && opcionDato != 2 && opcionDato != 3) ){
            throw std::runtime_error("No es una opción válida");
        }

    }catch (const std::exception& e){
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }

    if (opcionDato == 1){
        OperacionesBasicas<int> matriz1(1, 2);
        OperacionesBasicas<int> matriz2(1, 2);
        OperacionesBasicas<int> resultado(1, 2);

        std::cout << "Datos primera matriz" << std::endl;
        matriz1.tamYDatos();
        std::cout << "Primera matriz" << std::endl;
        Imprimir<int>::ImprimirMatriz(matriz1, 1);

        std::cout << "Datos segunda matriz" << std::endl;
        matriz2.tamYDatos();
        std::cout << "Segunda matriz" << std::endl;
        Imprimir<int>::ImprimirMatriz(matriz1, 1);

        char operacion = operacionVerificar();

        if (operacion == '+'){
            resultado = matriz1 + matriz2;
            std::cout << "Resultado de la suma" << std::endl;
            Imprimir<int>::ImprimirMatriz(resultado, 1);
        }
        else if (operacion == '-'){
            resultado = matriz1 - matriz2;
            std::cout << "Resultado de la resta" << std::endl;
            Imprimir<int>::ImprimirMatriz(resultado, 1);
        }
        else{
            resultado = matriz1 * matriz2;
            std::cout << "Resultado de la multiplicación" << std::endl;
            Imprimir<int>::ImprimirMatriz(resultado, 1);
        }
    }
    else if(opcionDato == 2){
        OperacionesBasicas<float> matriz1(1, 2);
        OperacionesBasicas<float> matriz2(1, 2);
        OperacionesBasicas<float> resultado(1, 2);

        std::cout << "Datos primera matriz" << std::endl;
        matriz1.tamYDatos();
        std::cout << "Primera matriz" << std::endl;
        Imprimir<float>::ImprimirMatriz(matriz1, 1);

        std::cout << "Datos segunda matriz" << std::endl;
        matriz2.tamYDatos();
        std::cout << "Segunda matriz" << std::endl;
        Imprimir<float>::ImprimirMatriz(matriz1, 1);

        char operacion = operacionVerificar();

        if (operacion == '+'){
            resultado = matriz1 + matriz2;
            std::cout << "Resultado de la suma" << std::endl;
            Imprimir<float>::ImprimirMatriz(resultado, 1);
        }
        else if (operacion == '-'){
            std::cout << "Resultado de la resta" << std::endl;
            resultado = matriz1 - matriz2;
            Imprimir<float>::ImprimirMatriz(resultado, 1);
        }
        else{
            resultado = matriz1 * matriz2;
            std::cout << "Resultado de la multiplicación" << std::endl;
            Imprimir<float>::ImprimirMatriz(resultado, 1);
        }

    }
    else if(opcionDato == 3){
        OperacionesBasicas<std::complex<float>> matriz1(1, 2);
        OperacionesBasicas<std::complex<float>> matriz2(1, 2);
        OperacionesBasicas<std::complex<float>> resultado(1, 2);

        std::cout << "Datos primera matriz" << std::endl;
        matriz1.tamYDatos();
        std::cout << "Primera matriz" << std::endl;
        Imprimir<std::complex<float>>::ImprimirMatriz(matriz1, 2);

        std::cout << "Datos segunda matriz" << std::endl;
        matriz2.tamYDatos();
        std::cout << "Segunda matriz" << std::endl;
        Imprimir<std::complex<float>>::ImprimirMatriz(matriz1, 2);

       char operacion = operacionVerificar();

        if (operacion == '+'){
            resultado = matriz1 + matriz2;
            std::cout << "Resultado de la suma" << std::endl;
            Imprimir<std::complex<float>>::ImprimirMatriz(resultado, 2);
        }
        else if (operacion == '-'){
            std::cout << "Resultado de la resta" << std::endl;
            resultado = matriz1 - matriz2;
            Imprimir<std::complex<float>>::ImprimirMatriz(resultado, 2);
        }
        else{
            resultado = matriz1 * matriz2;
            std::cout << "Resultado de la multiplicación" << std::endl;
            Imprimir<std::complex<float>>::ImprimirMatriz(resultado, 2);
        }

    }
    else{
        std::cout << "xd";
    }
}

char operacionVerificar(){
    char operacion;
    try{
        std::cout << "Ingrese la operación que desea realizar (+, -, *): ";
        std::cin >> operacion;
        if (std::cin.fail() || (operacion != '+' && operacion != '-' && operacion != '*') ){
            throw std::runtime_error("No es una operación valida");
        }
    }
    catch (const std::exception& e){
        std::cerr << "Error: " << e.what() << std::endl;
        exit(EXIT_FAILURE);
    }
    return operacion;
}